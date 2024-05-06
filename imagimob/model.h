/*
* Imagimob Studio 4.5.1153+f2b6b644f10da1e7a7be145bf57f29909d5a1b32
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/08/2024 21:18:04 UTC. Any changes will be lost.
* 
* Model ID  44571126-2772-47d2-a65a-6465419074a7
* 
* Memory    Size                      Efficiency
* Buffers   7248 bytes (RAM)          100 %
* State     9592 bytes (RAM)          100 %
* Readonly  34756 bytes (Flash)       100 %
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
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[2].
* 
* int IMAI_enqueue(const float *restrict data_in)
*    Description: Enqueue features. Returns SUCCESS (0) on success, else RET_NOMEM (-2) when low on memory.
*    Parameter data_in is Input of size float[1].
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

#ifndef _IMAI_CONV1D_M_B_1_H_
#define _IMAI_CONV1D_M_B_1_H_
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
* (ACC) Accuracy 88.936 %
* (F1S) F1 Score 88.916 %
* 
* Name of class                                            (unlabelled)           sirens
* (TP) True Positive or Correct Positive Prediction               46013            30732
* (FN) False Negative or Incorrect Negative Prediction             4329             5218
* (FP) False Positive or Incorrect Positive Prediction             5218             4329
* (TN) True Negative or Correct Negative Prediction               30732            46013
* (TPR) True Positive Rate or Sensitivity, Recall               91.40 %          85.49 %
* (TNR) True Negative Rate or Specificity, Selectivity          85.49 %          91.40 %
* (PPV) Positive Predictive Value or Precision                  89.81 %          87.65 %
* (NPV) Negative Predictive Value                               87.65 %          89.81 %
* (FNR) False Negative Rate or Miss Rate                         8.60 %          14.51 %
* (FPR) False Positive Rate or Fall-Out                         14.51 %           8.60 %
* (FDR) False Discovery Rate                                    10.19 %          12.35 %
* (FOR) False Omission Rate                                     12.35 %          10.19 %
* (F1S) F1 Score                                                90.60 %          86.56 %
*/


#define IMAI_TRAIN_AVG_ACC 0.8893640198396143 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.8891556446460877 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "(unlabelled)", TP: 46013, FN: 4329, FP: 5218, TN: 30732, TPR: 0.9140081840212, TNR: 0.8548539638386, PPV: 0.8981476059417, NPV: 0.8765294771968, FNR: 0.0859918159787, FPR: 0.1451460361613, FDR: 0.1018523940582, FOR: 0.1234705228031, F1S: 0.9060084865072, }, \
 {name: "sirens", TP: 30732, FN: 5218, FP: 4329, TN: 46013, TPR: 0.8548539638386, TNR: 0.9140081840212, PPV: 0.8765294771968, NPV: 0.8981476059417, FNR: 0.1451460361613, FPR: 0.0859918159787, FDR: 0.1234705228031, FOR: 0.1018523940582, F1S: 0.8655560406134, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 84.289 %
* (F1S) F1 Score 84.211 %
* 
* Name of class                                            (unlabelled)           sirens
* (TP) True Positive or Correct Positive Prediction               16238            10179
* (FN) False Negative or Incorrect Negative Prediction             2075             2849
* (FP) False Positive or Incorrect Positive Prediction             2849             2075
* (TN) True Negative or Correct Negative Prediction               10179            16238
* (TPR) True Positive Rate or Sensitivity, Recall               88.67 %          78.13 %
* (TNR) True Negative Rate or Specificity, Selectivity          78.13 %          88.67 %
* (PPV) Positive Predictive Value or Precision                  85.07 %          83.07 %
* (NPV) Negative Predictive Value                               83.07 %          85.07 %
* (FNR) False Negative Rate or Miss Rate                        11.33 %          21.87 %
* (FPR) False Positive Rate or Fall-Out                         21.87 %          11.33 %
* (FDR) False Discovery Rate                                    14.93 %          16.93 %
* (FOR) False Omission Rate                                     16.93 %          14.93 %
* (F1S) F1 Score                                                86.83 %          80.52 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.8428895057592292 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.8421102786040167 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "(unlabelled)", TP: 16238, FN: 2075, FP: 2849, TN: 10179, TPR: 0.8866925135149, TNR: 0.7813171630334, PPV: 0.8507361031068, NPV: 0.8306675371307, FNR: 0.1133074864850, FPR: 0.2186828369665, FDR: 0.1492638968931, FOR: 0.1693324628692, F1S: 0.8683422459893, }, \
 {name: "sirens", TP: 10179, FN: 2849, FP: 2075, TN: 16238, TPR: 0.7813171630334, TNR: 0.8866925135149, PPV: 0.8306675371307, NPV: 0.8507361031068, FNR: 0.2186828369665, FPR: 0.1133074864850, FDR: 0.1693324628692, FOR: 0.1492638968931, F1S: 0.8052369274582, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"unlabelled", "sirens"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x26, 0x11, 0x57, 0x44, 0x72, 0x27, 0xd2, 0x47, 0xa6, 0x5a, 0x64, 0x65, 0x41, 0x90, 0x74, 0xa7}

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

// data_out [2] (8 bytes)
#define IMAI_DATA_OUT_COUNT (2)
#define IMAI_DATA_OUT_TYPE float
#define IMAI_DATA_OUT_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_OUT_SCALE (1)
#define IMAI_DATA_OUT_OFFSET (0)
#define IMAI_DATA_OUT_IS_QUANTIZED (0)

#define IMAI_KEY_MAX (56)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_CONV1D_M_B_1_H_ */
