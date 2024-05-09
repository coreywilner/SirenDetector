/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for the PDM PCM Example
*              for ModusToolbox.
*
* Related Document: See README.md 
*
*
*******************************************************************************
* Copyright 2021-2022, Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
*
* This software, including source code, documentation and related
* materials ("Software") is owned by Cypress Semiconductor Corporation
* or one of its affiliates ("Cypress") and is protected by and subject to
* worldwide patent protection (United States and foreign),
* United States copyright laws and international treaty provisions.
* Therefore, you may use this Software only as provided in the license
* agreement accompanying the software package from which you
* obtained this Software ("EULA").
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software
* source code solely for use in connection with Cypress's
* integrated circuit products.  Any reproduction, modification, translation,
* compilation, or representation of this Software except as specified
* above is prohibited without the express written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so agrees to indemnify Cypress against all liability.
*******************************************************************************/

#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"

#include "stdlib.h"
#include "model.h"
/*******************************************************************************
* Macros
********************************************************************************/
/* Define how many samples in a frame */
#define FRAME_SIZE                  (1024)
/* Noise threshold hysteresis */
#define THRESHOLD_HYSTERESIS        3u
/* Volume ratio for noise and print purposes */
#define VOLUME_RATIO                (4*FRAME_SIZE)
/* Desired sample rate. Typical values: 8/16/22.05/32/44.1/48kHz */
#define SAMPLE_RATE_HZ              8000u
/* Decimation Rate of the PDM/PCM block. Typical value is 64 */
#define DECIMATION_RATE             64u
/* Audio Subsystem Clock. Typical values depends on the desire sample rate:
- 8/16/48kHz    : 24.576 MHz
- 22.05/44.1kHz : 22.579 MHz */
#define AUDIO_SYS_CLOCK_HZ          24576000u
/* PDM/PCM Pins */
#define PDM_DATA                    P10_5
#define PDM_CLK                     P10_4

/*******************************************************************************
* Function Prototypes
********************************************************************************/
void button_isr_handler(void *arg, cyhal_gpio_event_t event);
void pdm_pcm_isr_handler(void *arg, cyhal_pdm_pcm_event_t event);
void clock_init(void);

/*******************************************************************************
* Global Variables
********************************************************************************/
/* Interrupt flags */
volatile bool button_flag = false;
volatile bool pdm_pcm_flag = true;

/* Volume variables */
uint32_t volume = 0;
uint32_t noise_threshold = THRESHOLD_HYSTERESIS;

/* HAL Object */
cyhal_pdm_pcm_t pdm_pcm;
cyhal_clock_t   audio_clock;
cyhal_clock_t   pll_clock;

/* HAL Config */
const cyhal_pdm_pcm_cfg_t pdm_pcm_cfg = 
{
    .sample_rate     = SAMPLE_RATE_HZ,
    .decimation_rate = DECIMATION_RATE,
    .mode            = CYHAL_PDM_PCM_MODE_STEREO, 
    .word_length     = 16,  /* bits */
    .left_gain       = 0,   /* dB */
    .right_gain      = 0,   /* dB */
};

/*This structure is used to initialize callback*/
cyhal_gpio_callback_data_t cb_data =
    {
        .callback = button_isr_handler,
        .callback_arg = NULL
 };


/*******************************************************************************
* Function Name: main
********************************************************************************
* Summary:
* The main function for Cortex-M4 CPU does the following:
*  Initialization:
*  - Initializes all the hardware blocks
*  Do forever loop:
*  - Check if PDM/PCM flag is set. If yes, report the current volume
*  - Update the LED status based on the volume and the noise threshold
*  - Check if the User Button was pressed. If yes, reset the noise threshold
*
* Parameters:
*  void
*
* Return:
*  int
*
*
*******************************************************************************/
/*Model Input variables*/
int16_t  audio_frame[FRAME_SIZE] = {0};
float val = 0.0f;

/*Model Output variable*/
float out[IMAI_DATA_OUT_COUNT] = {0};

/*Post-processing variable*/
float confidence = 0.65f;

/* Window time variables*/
float time_in;
float time_out[2];
float window_time;
const float expected_time = 1012.0;
const float time_lower_limit = expected_time * 0.8;
const float time_upper_limit = expected_time * 1.5;

/*System tick variables*/
uint32_t tick = 0;
void systick_isr(void)
{
    tick++; // This increments every time the SysTick counter decrements to 0.
}

int main(void)
{
    cy_rslt_t result;
    int16_t  audio_frame[FRAME_SIZE] = {0};

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    /* Enable global interrupts */
    __enable_irq();

    /* Init the clocks */
    clock_init();

    /* Initialize retarget-io to use the debug UART port */
    cy_retarget_io_init(CYBSP_DEBUG_UART_TX, CYBSP_DEBUG_UART_RX, CY_RETARGET_IO_BAUDRATE);

    /* Initialize the User LED */
    cyhal_gpio_init(CYBSP_USER_LED, CYHAL_GPIO_DIR_OUTPUT, CYHAL_GPIO_DRIVE_STRONG, CYBSP_LED_STATE_OFF);

    /* Initialize the User Button */
    cyhal_gpio_init(CYBSP_USER_BTN, CYHAL_GPIO_DIR_INPUT, CYHAL_GPIO_DRIVE_PULLUP, CYBSP_BTN_OFF);
    cyhal_gpio_enable_event(CYBSP_USER_BTN, CYHAL_GPIO_IRQ_FALL, CYHAL_ISR_PRIORITY_DEFAULT, true);
    cyhal_gpio_register_callback(CYBSP_USER_BTN, &cb_data);

    /* Initialize the PDM/PCM block */
    cyhal_pdm_pcm_init(&pdm_pcm, PDM_DATA, PDM_CLK, &audio_clock, &pdm_pcm_cfg);
    cyhal_pdm_pcm_register_callback(&pdm_pcm, pdm_pcm_isr_handler, NULL);
    cyhal_pdm_pcm_enable_event(&pdm_pcm, CYHAL_PDM_PCM_ASYNC_COMPLETE, CYHAL_ISR_PRIORITY_DEFAULT, true);
    cyhal_pdm_pcm_start(&pdm_pcm);
    
    /* Initialize Imagimob AI library */
    IMAI_init();

    /*timer set up*/
    Cy_SysTick_Init(CY_SYSTICK_CLOCK_SOURCE_CLK_IMO , (8000000/1000)-1);
    Cy_SysTick_SetCallback(0, systick_isr);        // point to SysTick ISR to increment the 1ms count

    /* \x1b[2J\x1b[;H - ANSI ESC sequence for clear screen */
    printf("\x1b[2J\x1b[;H");

    printf("****************** \
    PDM/PCM Siren Example \
    ****************** \r\n\n");

    for(;;)
    {
        /* Check if any microphone has data to process */
        if (pdm_pcm_flag)
        {
            /* Clear the PDM/PCM flag */
            pdm_pcm_flag = 0;

            /* scale for multiply the audio value */
            float scale_factor = 40.0f;

             /* audio data from a frame */
            for (uint32_t index = 0; index < FRAME_SIZE; index++)
            {
            	//convert ints to floats
            	int16_t val_temp = audio_frame[index];
				val = ((float) val_temp) / 32767.0f;

				/*Audio gain*/
				val = val*scale_factor;
				if (val > 1.0)
				{
					val = 1.0f;
				}
				if (val < -1.0)
				{
					val = -1.0f;
				}

	        	/*time variables*/
	        	time_in = (float)(tick*1.0f); //ticks are in 1ms intervals
				int t_before = tick;

				/*Pass audio val for enqueue*/
//				IMAI_enqueue(&val);
				IMAI_enqueue(&val,&time_in); //Use this if TimeStamps API is chosen when model is output

//				if (IMAI_dequeue(out) == IMAI_RET_SUCCESS)
				if (IMAI_dequeue(out,time_out) == IMAI_RET_SUCCESS) //Use this if TimeStamps API is chosen when model is output
				{
					/*Inference time calculation*/
					int t_inf = tick - t_before;
					printf("time inf %d ms \r\n", t_inf);

					/*Window time calculation*/ //NOTE: only works when you generate model with timeapi checked in imagimob studio
					float window_time = time_out[1] - time_out[0];
					printf("window_time %.1f us\r\n", window_time);

					if (out[1] > confidence)
					{
						printf("sirens: %f", out[1]);
		           	    cyhal_gpio_write(CYBSP_USER_LED,0);
						if ( time_lower_limit> window_time && window_time > time_upper_limit)
						{
							printf("prediction invalid\r\n");
						}
						else{
							printf("\r\n");
						}
					}
					else
					{
		           	     cyhal_gpio_write(CYBSP_USER_LED,1);
					}
				}
            }

            /* Setup to read the next frame */
            cyhal_pdm_pcm_read_async(&pdm_pcm, audio_frame, FRAME_SIZE);
        }

    }
}

/*******************************************************************************
* Function Name: button_isr_handler
********************************************************************************
* Summary:
*  Button ISR handler. Set a flag to be processed in the main loop.
*
* Parameters:
*  arg: not used
*  event: event that occurred
*
*******************************************************************************/
void button_isr_handler(void *arg, cyhal_gpio_event_t event)
{
    (void) arg;
    (void) event;

    button_flag = true;
}

/*******************************************************************************
* Function Name: pdm_pcm_isr_handler
********************************************************************************
* Summary:
*  PDM/PCM ISR handler. Set a flag to be processed in the main loop.
*
* Parameters:
*  arg: not used
*  event: event that occurred
*
*******************************************************************************/
void pdm_pcm_isr_handler(void *arg, cyhal_pdm_pcm_event_t event)
{
    (void) arg;
    (void) event;

    pdm_pcm_flag = true;
}

/*******************************************************************************
* Function Name: clock_init
********************************************************************************
* Summary:
*  Initialize the clocks in the system.
*
*******************************************************************************/
void clock_init(void)
{
    /* Initialize the PLL */
    cyhal_clock_reserve(&pll_clock, &CYHAL_CLOCK_PLL[0]);
    cyhal_clock_set_frequency(&pll_clock, AUDIO_SYS_CLOCK_HZ, NULL);
    cyhal_clock_set_enabled(&pll_clock, true, true);

    /* Initialize the audio subsystem clock (CLK_HF[1]) 
     * The CLK_HF[1] is the root clock for the I2S and PDM/PCM blocks */
    cyhal_clock_reserve(&audio_clock, &CYHAL_CLOCK_HF[1]);

    /* Source the audio subsystem clock from PLL */
    cyhal_clock_set_source(&audio_clock, &pll_clock);
    cyhal_clock_set_enabled(&audio_clock, true, true);
}

/* [] END OF FILE */
