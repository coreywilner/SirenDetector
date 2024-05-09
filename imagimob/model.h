/*
* Imagimob Studio 4.8.1397+ec7f68f457701b125b40ecb6a3e43a64ab83bbf6
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 05/09/2024 21:44:12 UTC. Any changes will be lost.
* 
* Model ID  eba2fca1-1a79-4555-808a-a2260d43bc84
* 
* Memory    Size                      Efficiency
* Buffers   7248 bytes (RAM)          100 %
* State     14088 bytes (RAM)         100 %
* Readonly  34500 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-1
* 
* Class Index | Symbol Label
* 0           | unlabelled
* 1           | sirens
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [512]           float      dequeue
*    window_shape = [512]
*    stride = 320
*    buffer_multiplier = 1
* Hann smoothing                 [512]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [257,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [257]           float      dequeue
*    axis = 0
* Mel Filterbank                 [30]            float      dequeue
*    num_filters = 30
*    sample_rate = 16000
*    f_low = 200
*    f_high = 7000
*    htk = True
*    librosa = False
* Clip                           [30]            float      dequeue
*    min = 0.000316227766016
*    max = 3.40282347E+38
* Logarithm                      [30]            float      dequeue
*    base = 0
* Sliding Window (data points)   [50,30]         float      dequeue
*    window_shape = [50,30]
*    stride = 180
*    buffer_multiplier = 1
* Input Layer                    [50,30]         float      dequeue
*    shape = [50,30]
* Convolution 1D                 [24,13]         float      dequeue
*    filters = 13
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = valid
*    activation = linear
*    use_bias = True
*    trainable = True
*    weight = float[3,30,13]
*    bias = float[13]
* Convolution 1D                 [12,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,16]
* Batch Normalization            [12,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [12,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [12,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Convolution 1D                 [12,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Batch Normalization            [12,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [12,16]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [6,16]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [6,16]          float      dequeue
*    rate = 0.05
*    trainable = True
* Convolution 1D                 [6,32]          float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Convolution 1D                 [6,32]          float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [6,32]          float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [6,32]          float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [3,32]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [3,32]          float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [32]            float      dequeue
*    trainable = True
* Dense                          [2]             float      dequeue
*    units = 2
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,2]
*    bias = float[2]
* Activation                     [2]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out, float *restrict time_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[2].
*    Parameter time_out is Output of size float[2].
* 
* int IMAI_enqueue(const float *restrict data_in, const float *restrict time_in)
*    Description: Enqueue features. Returns SUCCESS (0) on success, else RET_NOMEM (-2) when low on memory.
*    Parameter data_in is Input of size float[1].
*    Parameter time_in is Input of size float[1].
* 
* void IMAI_init(void)
*    Description: Initializes buffers to initial state. This function also works as a reset function.
* 
* 
* Disclaimer:
*   The generated code relies on the optimizations done by the C compiler.
*   For example many for-loops of length 1 must be removed by the optimizer.
*   This can only be done if the functions are inlined and simplified.
*   Check disassembly if unsure.
*   tl;dr Compile using gcc with -O3 or -Ofast
*/

#ifndef _IMAI_MODEL_H_
#define _IMAI_MODEL_H_
#ifdef _MSC_VER
#pragma once
#endif

#include <stdint.h>

typedef struct {    
    char *name;
    double TP; // True Positive or Correct Positive Prediction
    double FN; // False Negative or Incorrect Negative Prediction
    double FP; // False Positive or Incorrect Positive Prediction
    double TN; // True Negative or Correct Negative Prediction
    double TPR; // True Positive Rate or Sensitivity, Recall
    double TNR; // True Negative Rate or Specificity, Selectivity
    double PPV; // Positive Predictive Value or Precision
    double NPV; // Negative Predictive Value
    double FNR; // False Negative Rate or Miss Rate
    double FPR; // False Positive Rate or Fall-Out
    double FDR; // False Discovery Rate
    double FOR; // False Omission Rate
    double F1S; // F1 Score
} IMAI_stats;

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 89.179 %
* (F1S) F1 Score 89.197 %
* 
* Name of class                                            (unlabelled)           sirens
* (TP) True Positive or Correct Positive Prediction               45186            31677
* (FN) False Negative or Incorrect Negative Prediction             5128             4199
* (FP) False Positive or Incorrect Positive Prediction             4199             5128
* (TN) True Negative or Correct Negative Prediction               31677            45186
* (TPR) True Positive Rate or Sensitivity, Recall               89.81 %          88.30 %
* (TNR) True Negative Rate or Specificity, Selectivity          88.30 %          89.81 %
* (PPV) Positive Predictive Value or Precision                  91.50 %          86.07 %
* (NPV) Negative Predictive Value                               86.07 %          91.50 %
* (FNR) False Negative Rate or Miss Rate                        10.19 %          11.70 %
* (FPR) False Positive Rate or Fall-Out                         11.70 %          10.19 %
* (FDR) False Discovery Rate                                     8.50 %          13.93 %
* (FOR) False Omission Rate                                     13.93 %           8.50 %
* (F1S) F1 Score                                                90.64 %          87.17 %
*/


#define IMAI_TRAIN_AVG_ACC 0.8917855899756352 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.8919730084142399 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "(unlabelled)", TP: 45186, FN: 5128, FP: 4199, TN: 31677, TPR: 0.8980800572405, TNR: 0.8829579663284, PPV: 0.9149741824440, NPV: 0.8606711044695, FNR: 0.1019199427594, FPR: 0.1170420336715, FDR: 0.0850258175559, FOR: 0.1393288955304, F1S: 0.9064484097132, }, \
 {name: "sirens", TP: 31677, FN: 4199, FP: 5128, TN: 45186, TPR: 0.8829579663284, TNR: 0.8980800572405, PPV: 0.8606711044695, NPV: 0.9149741824440, FNR: 0.1170420336715, FPR: 0.1019199427594, FDR: 0.1393288955304, FOR: 0.0850258175559, F1S: 0.8716721013744, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 84.806 %
* (F1S) F1 Score 84.760 %
* 
* Name of class                                            (unlabelled)           sirens
* (TP) True Positive or Correct Positive Prediction               16178            10401
* (FN) False Negative or Incorrect Negative Prediction             2135             2627
* (FP) False Positive or Incorrect Positive Prediction             2627             2135
* (TN) True Negative or Correct Negative Prediction               10401            16178
* (TPR) True Positive Rate or Sensitivity, Recall               88.34 %          79.84 %
* (TNR) True Negative Rate or Specificity, Selectivity          79.84 %          88.34 %
* (PPV) Positive Predictive Value or Precision                  86.03 %          82.97 %
* (NPV) Negative Predictive Value                               82.97 %          86.03 %
* (FNR) False Negative Rate or Miss Rate                        11.66 %          20.16 %
* (FPR) False Positive Rate or Fall-Out                         20.16 %          11.66 %
* (FDR) False Discovery Rate                                    13.97 %          17.03 %
* (FOR) False Omission Rate                                     17.03 %          13.97 %
* (F1S) F1 Score                                                87.17 %          81.37 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.8480584537825852 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.8476033288415806 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "(unlabelled)", TP: 16178, FN: 2135, FP: 2627, TN: 10401, TPR: 0.8834161524600, TNR: 0.7983573840957, PPV: 0.8603031108747, NPV: 0.8296904913848, FNR: 0.1165838475399, FPR: 0.2016426159042, FDR: 0.1396968891252, FOR: 0.1703095086151, F1S: 0.8717064497009, }, \
 {name: "sirens", TP: 10401, FN: 2627, FP: 2135, TN: 16178, TPR: 0.7983573840957, TNR: 0.8834161524600, PPV: 0.8296904913848, NPV: 0.8603031108747, FNR: 0.2016426159042, FPR: 0.1165838475399, FDR: 0.1703095086151, FOR: 0.1396968891252, F1S: 0.8137224221561, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE_TIME

// All symbols in order
#define IMAI_SYMBOL_MAP {"unlabelled", "sirens"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xa1, 0xfc, 0xa2, 0xeb, 0x79, 0x1a, 0x55, 0x45, 0x80, 0x8a, 0xa2, 0x26, 0x0d, 0x43, 0xbc, 0x84}

// First nibble is bit encoding, second nibble is number of bytes
#define IMAGINET_TYPES_NONE	(0x0)
#define IMAGINET_TYPES_FLOAT32	(0x14)
#define IMAGINET_TYPES_FLOAT64	(0x18)
#define IMAGINET_TYPES_INT8	(0x21)
#define IMAGINET_TYPES_INT16	(0x22)
#define IMAGINET_TYPES_INT32	(0x24)
#define IMAGINET_TYPES_INT64	(0x28)
#define IMAGINET_TYPES_QDYN8	(0x31)
#define IMAGINET_TYPES_QDYN16	(0x32)
#define IMAGINET_TYPES_QDYN32	(0x34)

// data_in [1] (4 bytes)
#define IMAI_DATA_IN_COUNT (1)
#define IMAI_DATA_IN_TYPE float
#define IMAI_DATA_IN_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_IN_SCALE (1)
#define IMAI_DATA_IN_OFFSET (0)
#define IMAI_DATA_IN_IS_QUANTIZED (0)

// time_in [1] (4 bytes)
#define IMAI_TIME_IN_COUNT (1)
#define IMAI_TIME_IN_TYPE float
#define IMAI_TIME_IN_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_TIME_IN_SCALE (1)
#define IMAI_TIME_IN_OFFSET (0)
#define IMAI_TIME_IN_IS_QUANTIZED (0)

// data_out [2] (8 bytes)
#define IMAI_DATA_OUT_COUNT (2)
#define IMAI_DATA_OUT_TYPE float
#define IMAI_DATA_OUT_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_OUT_SCALE (1)
#define IMAI_DATA_OUT_OFFSET (0)
#define IMAI_DATA_OUT_IS_QUANTIZED (0)

// time_out [2] (8 bytes)
#define IMAI_TIME_OUT_COUNT (2)
#define IMAI_TIME_OUT_TYPE float
#define IMAI_TIME_OUT_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_TIME_OUT_SCALE (1)
#define IMAI_TIME_OUT_OFFSET (0)
#define IMAI_TIME_OUT_IS_QUANTIZED (0)

#define IMAI_KEY_MAX (59)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out, float *restrict time_out);
int IMAI_enqueue(const float *restrict data_in, const float *restrict time_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
