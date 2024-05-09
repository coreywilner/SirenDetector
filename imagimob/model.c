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

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[7248];
static int8_t _state[14088];

// Parameters
static const uint32_t _K6[] = {
    0x00000000, 0x381e87c4, 0x391e863b, 0x39b25423, 0x3a1e8019, 0x3a77a0f6, 0x3ab2449b, 0x3af29a52, 
    0x3b1e6790, 0x3b487014, 0x3b776514, 0x3b95a260, 0x3bb2068a, 0x3bd0ddef, 0x3bf2275e, 0x3c0af0c6, 
    0x3c1e058c, 0x3c325144, 0x3c47d325, 0x3c5e8a59, 0x3c767600, 0x3c87ca96, 0x3c94f373, 0x3ca2b513, 
    0x3cb10eef, 0x3cc00079, 0x3ccf891c, 0x3cdfa83e, 0x3cf05d41, 0x3d00d3bf, 0x3d09c324, 0x3d12fc79, 
    0x3d1c7f61, 0x3d264b7e, 0x3d306070, 0x3d3abdd2, 0x3d45633d, 0x3d505049, 0x3d5b8488, 0x3d66ff8d, 
    0x3d72c0e4, 0x3d7ec81a, 0x3d858a5c, 0x3d8bd322, 0x3d923e20, 0x3d98cb17, 0x3d9f79c6, 0x3da649eb, 
    0x3dad3b42, 0x3db44d87, 0x3dbb8073, 0x3dc2d3c0, 0x3dca4724, 0x3dd1da56, 0x3dd98d0a, 0x3de15ef5, 
    0x3de94fc9, 0x3df15f37, 0x3df98cef, 0x3e00ec51, 0x3e0520fd, 0x3e096453, 0x3e0db62a, 0x3e121654, 
    0x3e1684a9, 0x3e1b00fb, 0x3e1f8b1e, 0x3e2422e6, 0x3e28c824, 0x3e2d7aab, 0x3e323a4b, 0x3e3706d7, 
    0x3e3be01f, 0x3e40c5f2, 0x3e45b820, 0x3e4ab678, 0x3e4fc0c8, 0x3e54d6df, 0x3e59f88a, 0x3e5f2596, 
    0x3e645dd0, 0x3e69a105, 0x3e6eeeff, 0x3e74478b, 0x3e79aa74, 0x3e7f1784, 0x3e824743, 0x3e8507a1, 
    0x3e87ccc2, 0x3e8a968a, 0x3e8d64dd, 0x3e9037a0, 0x3e930eb6, 0x3e95ea04, 0x3e98c96d, 0x3e9bacd4, 
    0x3e9e941e, 0x3ea17f2c, 0x3ea46de3, 0x3ea76026, 0x3eaa55d6, 0x3ead4ed8, 0x3eb04b0c, 0x3eb34a56, 
    0x3eb64c99, 0x3eb951b5, 0x3ebc598e, 0x3ebf6406, 0x3ec270fd, 0x3ec58056, 0x3ec891f3, 0x3ecba5b5, 
    0x3ecebb7e, 0x3ed1d32f, 0x3ed4ecaa, 0x3ed807cf, 0x3edb2480, 0x3ede429f, 0x3ee1620c, 0x3ee482a8, 
    0x3ee7a455, 0x3eeac6f2, 0x3eedea63, 0x3ef10e86, 0x3ef4333d, 0x3ef7586a, 0x3efa7dec, 0x3efda3a4, 
    0x3f0064ba, 0x3f01f79e, 0x3f038a6f, 0x3f051d1d, 0x3f06af97, 0x3f0841d0, 0x3f09d3b7, 0x3f0b653c, 
    0x3f0cf651, 0x3f0e86e5, 0x3f1016e9, 0x3f11a64e, 0x3f133504, 0x3f14c2fc, 0x3f165025, 0x3f17dc72, 
    0x3f1967d3, 0x3f1af237, 0x3f1c7b91, 0x3f1e03d0, 0x3f1f8ae6, 0x3f2110c4, 0x3f22955a, 0x3f241899, 
    0x3f259a73, 0x3f271ad8, 0x3f2899b9, 0x3f2a1709, 0x3f2b92b7, 0x3f2d0cb6, 0x3f2e84f6, 0x3f2ffb69, 
    0x3f317001, 0x3f32e2af, 0x3f345365, 0x3f35c214, 0x3f372eaf, 0x3f389927, 0x3f3a016e, 0x3f3b6776, 
    0x3f3ccb32, 0x3f3e2c94, 0x3f3f8b8d, 0x3f40e811, 0x3f424212, 0x3f439982, 0x3f44ee55, 0x3f46407c, 
    0x3f478fec, 0x3f48dc96, 0x3f4a266f, 0x3f4b6d69, 0x3f4cb177, 0x3f4df28e, 0x3f4f30a0, 0x3f506ba2, 
    0x3f51a386, 0x3f52d842, 0x3f5409c9, 0x3f553810, 0x3f56630a, 0x3f578aac, 0x3f58aeeb, 0x3f59cfbb, 
    0x3f5aed11, 0x3f5c06e2, 0x3f5d1d24, 0x3f5e2fcb, 0x3f5f3ecc, 0x3f604a1e, 0x3f6151b6, 0x3f62558a, 
    0x3f63558f, 0x3f6451bc, 0x3f654a07, 0x3f663e67, 0x3f672ed2, 0x3f681b3e, 0x3f6903a2, 0x3f69e7f7, 
    0x3f6ac831, 0x3f6ba44a, 0x3f6c7c39, 0x3f6d4ff4, 0x3f6e1f74, 0x3f6eeab2, 0x3f6fb1a4, 0x3f707443, 
    0x3f713289, 0x3f71ec6c, 0x3f72a1e7, 0x3f7352f3, 0x3f73ff87, 0x3f74a79e, 0x3f754b32, 0x3f75ea3b, 
    0x3f7684b4, 0x3f771a97, 0x3f77abdd, 0x3f783882, 0x3f78c080, 0x3f7943d1, 0x3f79c270, 0x3f7a3c5a, 
    0x3f7ab188, 0x3f7b21f6, 0x3f7b8da1, 0x3f7bf483, 0x3f7c5699, 0x3f7cb3df, 0x3f7d0c52, 0x3f7d5fee, 
    0x3f7daeaf, 0x3f7df893, 0x3f7e3d97, 0x3f7e7db8, 0x3f7eb8f4, 0x3f7eef48, 0x3f7f20b3, 0x3f7f4d32, 
    0x3f7f74c3, 0x3f7f9766, 0x3f7fb519, 0x3f7fcdda, 0x3f7fe1a9, 0x3f7ff085, 0x3f7ffa6d, 0x3f7fff61, 
    0x3f7fff61, 0x3f7ffa6d, 0x3f7ff085, 0x3f7fe1a9, 0x3f7fcdda, 0x3f7fb519, 0x3f7f9766, 0x3f7f74c3, 
    0x3f7f4d32, 0x3f7f20b3, 0x3f7eef48, 0x3f7eb8f4, 0x3f7e7db8, 0x3f7e3d97, 0x3f7df893, 0x3f7daeaf, 
    0x3f7d5fee, 0x3f7d0c52, 0x3f7cb3df, 0x3f7c5699, 0x3f7bf483, 0x3f7b8da1, 0x3f7b21f6, 0x3f7ab188, 
    0x3f7a3c5a, 0x3f79c270, 0x3f7943d1, 0x3f78c080, 0x3f783882, 0x3f77abdd, 0x3f771a97, 0x3f7684b4, 
    0x3f75ea3b, 0x3f754b32, 0x3f74a79e, 0x3f73ff87, 0x3f7352f3, 0x3f72a1e7, 0x3f71ec6c, 0x3f713289, 
    0x3f707443, 0x3f6fb1a4, 0x3f6eeab2, 0x3f6e1f74, 0x3f6d4ff4, 0x3f6c7c39, 0x3f6ba44a, 0x3f6ac831, 
    0x3f69e7f7, 0x3f6903a2, 0x3f681b3e, 0x3f672ed2, 0x3f663e67, 0x3f654a07, 0x3f6451bc, 0x3f63558f, 
    0x3f62558a, 0x3f6151b6, 0x3f604a1e, 0x3f5f3ecc, 0x3f5e2fcb, 0x3f5d1d24, 0x3f5c06e2, 0x3f5aed11, 
    0x3f59cfbb, 0x3f58aeeb, 0x3f578aac, 0x3f56630a, 0x3f553810, 0x3f5409c9, 0x3f52d842, 0x3f51a386, 
    0x3f506ba2, 0x3f4f30a0, 0x3f4df28e, 0x3f4cb177, 0x3f4b6d69, 0x3f4a266f, 0x3f48dc96, 0x3f478fec, 
    0x3f46407c, 0x3f44ee55, 0x3f439982, 0x3f424212, 0x3f40e811, 0x3f3f8b8d, 0x3f3e2c94, 0x3f3ccb32, 
    0x3f3b6776, 0x3f3a016e, 0x3f389927, 0x3f372eaf, 0x3f35c214, 0x3f345365, 0x3f32e2af, 0x3f317001, 
    0x3f2ffb69, 0x3f2e84f6, 0x3f2d0cb6, 0x3f2b92b7, 0x3f2a1709, 0x3f2899b9, 0x3f271ad8, 0x3f259a73, 
    0x3f241899, 0x3f22955a, 0x3f2110c4, 0x3f1f8ae6, 0x3f1e03d0, 0x3f1c7b91, 0x3f1af237, 0x3f1967d3, 
    0x3f17dc72, 0x3f165025, 0x3f14c2fc, 0x3f133504, 0x3f11a64e, 0x3f1016e9, 0x3f0e86e5, 0x3f0cf651, 
    0x3f0b653c, 0x3f09d3b7, 0x3f0841d0, 0x3f06af97, 0x3f051d1d, 0x3f038a6f, 0x3f01f79e, 0x3f0064ba, 
    0x3efda3a4, 0x3efa7dec, 0x3ef7586a, 0x3ef4333d, 0x3ef10e86, 0x3eedea63, 0x3eeac6f2, 0x3ee7a455, 
    0x3ee482a8, 0x3ee1620c, 0x3ede429f, 0x3edb2480, 0x3ed807cf, 0x3ed4ecaa, 0x3ed1d32f, 0x3ecebb7e, 
    0x3ecba5b5, 0x3ec891f3, 0x3ec58056, 0x3ec270fd, 0x3ebf6406, 0x3ebc598e, 0x3eb951b5, 0x3eb64c99, 
    0x3eb34a56, 0x3eb04b0c, 0x3ead4ed8, 0x3eaa55d6, 0x3ea76026, 0x3ea46de3, 0x3ea17f2c, 0x3e9e941e, 
    0x3e9bacd4, 0x3e98c96d, 0x3e95ea04, 0x3e930eb6, 0x3e9037a0, 0x3e8d64dd, 0x3e8a968a, 0x3e87ccc2, 
    0x3e8507a1, 0x3e824743, 0x3e7f1784, 0x3e79aa74, 0x3e74478b, 0x3e6eeeff, 0x3e69a105, 0x3e645dd0, 
    0x3e5f2596, 0x3e59f88a, 0x3e54d6df, 0x3e4fc0c8, 0x3e4ab678, 0x3e45b820, 0x3e40c5f2, 0x3e3be01f, 
    0x3e3706d7, 0x3e323a4b, 0x3e2d7aab, 0x3e28c824, 0x3e2422e6, 0x3e1f8b1e, 0x3e1b00fb, 0x3e1684a9, 
    0x3e121654, 0x3e0db62a, 0x3e096453, 0x3e0520fd, 0x3e00ec51, 0x3df98cef, 0x3df15f37, 0x3de94fc9, 
    0x3de15ef5, 0x3dd98d0a, 0x3dd1da56, 0x3dca4724, 0x3dc2d3c0, 0x3dbb8073, 0x3db44d87, 0x3dad3b42, 
    0x3da649eb, 0x3d9f79c6, 0x3d98cb17, 0x3d923e20, 0x3d8bd322, 0x3d858a5c, 0x3d7ec81a, 0x3d72c0e4, 
    0x3d66ff8d, 0x3d5b8488, 0x3d505049, 0x3d45633d, 0x3d3abdd2, 0x3d306070, 0x3d264b7e, 0x3d1c7f61, 
    0x3d12fc79, 0x3d09c324, 0x3d00d3bf, 0x3cf05d41, 0x3cdfa83e, 0x3ccf891c, 0x3cc00079, 0x3cb10eef, 
    0x3ca2b513, 0x3c94f373, 0x3c87ca96, 0x3c767600, 0x3c5e8a59, 0x3c47d325, 0x3c325144, 0x3c1e058c, 
    0x3c0af0c6, 0x3bf2275e, 0x3bd0ddef, 0x3bb2068a, 0x3b95a260, 0x3b776514, 0x3b487014, 0x3b1e6790, 
    0x3af29a52, 0x3ab2449b, 0x3a77a0f6, 0x3a1e8019, 0x39b25423, 0x391e863b, 0x381e87c4, 0x00000000
};

static const uint32_t _K13[] = {
    0x00000006, 0x00000008, 0x0000000a, 0x0000000d, 0x0000000f, 0x00000012, 0x00000015, 0x00000018, 
    0x0000001b, 0x0000001f, 0x00000023, 0x00000027, 0x0000002b, 0x00000030, 0x00000035, 0x0000003b, 
    0x00000040, 0x00000047, 0x0000004d, 0x00000055, 0x0000005c, 0x00000065, 0x0000006d, 0x00000077, 
    0x00000081, 0x0000008c, 0x00000098, 0x000000a4, 0x000000b2, 0x000000c0, 0x000000cf, 0x000000e0
};

static const uint32_t _K21[] = {
    0x3e216bd0, 0x3d3edf71, 0xbe2cce99, 0xbdd25952, 0x3e1d8882, 0x3e4ebda1, 0x3e805f6c, 0x3e5d5e87, 
    0xbc94ac03, 0x3c19d058, 0xbcab5ff2, 0xbe1c4bc7, 0xbdfd83be, 0xbe2ff7a6, 0xbd46b013, 0x3dd93280, 
    0xbe043928, 0x3b9fe853, 0x3e23b971, 0x3d91bfdd, 0xbdba9d54, 0xbe70cc2d, 0x3dc4a09a, 0x3d88dae1, 
    0x3e3416c9, 0xbde03c9b, 0xbe5dd38a, 0xbe250b84, 0x3de1bfb2, 0x3db93322, 0x3de25ed4, 0xbe10a92e, 
    0xbe3b91c3, 0xbe581a34, 0xbb4f4bcf, 0x3e020db0, 0x3dafd68d, 0xbdbbc7f7, 0x3df0a418, 0x3e07dcfd, 
    0xbd992ee6, 0xbe121d22, 0x3e0284a9, 0x3e005df7, 0xbe4f9f23, 0x3e226959, 0x3e0df41d, 0xbe072aa2, 
    0x3e055a19, 0x3c9caf8f, 0x3de9e81b, 0x3dea21b1, 0x3d958f09, 0xbd53b591, 0xbe4bff4f, 0x3e2876db, 
    0x3d989387, 0x3dd7347d, 0xbde440ec, 0xbe0e3eb7, 0x3d0c2917, 0x3e0970a0, 0x3bded81a, 0xbe0c8d7c, 
    0xbdcaad07, 0x3e0d4260, 0x3e6bfb46, 0x3db9c24d, 0xbdd57d53, 0xbd82dc6c, 0xbdad880e, 0xbc48d837, 
    0xbe10298f, 0xbe3736a6, 0xbe163ced, 0xbe10f44f, 0x3e5cc257, 0x3da159b7, 0x3dfb34bc, 0x3e14deeb, 
    0xbd5604c5, 0x3dc49e6a, 0xbe069f90, 0xbe1f7797, 0x3da65a98, 0x3e25dc0b, 0xbdd1e014, 0xbce7ac70, 
    0x3df03cee, 0xbe178290, 0xbdd50bbc, 0xbd8eaae2, 0xbd5a533d, 0x3d040a38, 0xbde0252f, 0xbd6a9cbc, 
    0x3d54fe97, 0xbd5d7c26, 0x3da2c16b, 0x3e00a8ef, 0x3e5d4c65, 0xbe271f9c, 0xbe19dd3e, 0xbdc0384b, 
    0xbd2b15aa, 0xba897394, 0x3c97dc7a, 0xbd972547, 0xbdd647e9, 0x3e0eb2b0, 0x3c493688, 0xbdd9f7be, 
    0x3c273c9a, 0x3e359e4a, 0xbe0b5309, 0x3e629e6b, 0xbc177c3c, 0x3c0b961c, 0xbdb314e7, 0x3d8215da, 
    0x3d45b78b, 0xbde25bf3, 0x3e487d29, 0xbcbae4fb, 0x3df1fd65, 0xbc060c6c, 0xbcfe34e0, 0x3e059287, 
    0x3d327d7e, 0xbdeddf93, 0x3dc31d00, 0xbe1577f8, 0xbe71f287, 0x3ce6be86, 0xbdb93362, 0xbe4aa979, 
    0xbcc78553, 0x3e401179, 0x3de40c5f, 0xbac67e6e, 0xbda3da28, 0xbe482216, 0x3e0cd947, 0x3e2bf163, 
    0x3d97211f, 0x3e343246, 0xbd965d68, 0xbe01b129, 0xbdabeca0, 0x3e073750, 0x3e63e06c, 0xbd95b883, 
    0x3d056a70, 0x3de4de2a, 0x3d0f089d, 0x3d3eae5f, 0xbe34473a, 0x3de64f67, 0x3d265775, 0xbdfbddc5, 
    0xbe2d0d8e, 0xbd956ea1, 0xbe53445b, 0x3c5b0f5c, 0xbe7e3c2c, 0x3d8b89f6, 0xbe0f76ad, 0x3d2cfd97, 
    0xbdc62cc5, 0xbe3ff711, 0xbe50673f, 0xbdff1678, 0x3e35c9e8, 0x3d30f25b, 0x3d1d6a2f, 0xbd434aa3, 
    0xbdfc1f7c, 0x3e477e5f, 0xbc803c56, 0x3e3ed023, 0xbd253af6, 0x3d8db376, 0x3d921246, 0x3dc5f04c, 
    0xbe1b7200, 0xbd427881, 0xbdcb7c4e, 0xbdef4773, 0xbe006229, 0x3e103b6e, 0xbdae3901, 0x3de42680, 
    0x3cd34aaf, 0xbdf2fd8b, 0xbe4f4cf2, 0x3e4c11ed, 0xbd0f5d9a, 0xbe0a4518, 0x3e4c7c40, 0x3e538fbc, 
    0x3e106d30, 0x3e0d2b2c, 0x3ba9d2b7, 0x3e135d34, 0xbd184194, 0xbdf9beff, 0xbd101868, 0xbc8d18f0, 
    0xbe483c08, 0xbd2e763e, 0xbbe1285b, 0xbe0ab8e7, 0x3c76606f, 0x3dab8ba0, 0x3d65f050, 0xbde9d56c, 
    0xbdd6f600, 0x3caa9a02, 0x3dfba14b, 0x3e1a4249, 0xbdc34307, 0x3e362469, 0xbd950ead, 0x3e014064, 
    0xbb9cf764, 0xbda734dd, 0x3e31a7a4, 0xbe490be1, 0x3e105f64, 0x3e3dd3e2, 0x3e175869, 0xbd1aa4da, 
    0xbd878a50, 0x3ce5ff6e, 0xbdad85eb, 0xbdb31e98, 0xbcc7a9ce, 0x3d32eb65, 0xbdc85611, 0x3dd95c91, 
    0x3d9ac4e9, 0x3d49503a, 0x3e0ee686, 0x3e136bbb, 0xbc4bb8fc, 0x3e076ee4, 0xbe84c776, 0x3e368352, 
    0x3d3a8ea7, 0xbdd9ceee, 0xbca3d7eb, 0x3d4559d8, 0xbe6ae099, 0x3e099888, 0xbdcdcca3, 0xbe3c354a, 
    0x3d72d7ee, 0xbe2ec244, 0xbd155cd6, 0x3db74874, 0x3d14446c, 0xbd237b16, 0x3e29d0f2, 0xbd883b40, 
    0x3bedd036, 0x3e070a51, 0xbe0670ba, 0xbe4489a1, 0x3d256be5, 0xbe300eb2, 0xbbb7e4e8, 0x3d1fa06f, 
    0x3e3870c9, 0xbc62cdf5, 0xbcdcf40c, 0x3ce58be0, 0x3d4f9b0a, 0x3d881ec7, 0xbcfd04cc, 0x3d841795, 
    0xbd9327ab, 0xbdf9e8a6, 0x3d8676a0, 0xbe0eca09, 0x3ca89db9, 0x3c67a82e, 0x3ddcd8bb, 0xbdc59a90, 
    0xbdeaa7a4, 0x3c834819, 0xbdeb33f8, 0x3e1cae4f, 0xbe1a97e0, 0xbe2e5f38, 0xbdcb9275, 0xbe281ea7, 
    0x3da4fa8b, 0x3d6f06b0, 0xbcb0b0b9, 0x3e32902a, 0x3e219014, 0xbe3b05a1, 0xbe0b1f76, 0x3d05a710, 
    0x3d27e2d6, 0xbd314568, 0xbda92ab3, 0xbd5f5341, 0xbdc89c7f, 0x3e1594cd, 0xbe32a195, 0xbd113f20, 
    0x3e7c18d3, 0x3c76980b, 0xbdf23bb2, 0x3dec10b9, 0x3e147c52, 0xbc7bd163, 0x3df7ecad, 0xbdd0a01f, 
    0xbdd5164b, 0xbd886fb9, 0x3d54fccc, 0xbe2ca44a, 0xbe39c4fb, 0x3cd7588d, 0x3e28a05e, 0x3d181812, 
    0xbdd5b560, 0xbdc907e7, 0xbe3d537f, 0x3e02bc20, 0xbe05d99d, 0x3dfb4c7b, 0xbe3991d5, 0xbd5a93d5, 
    0x3dda85e2, 0xbe099636, 0xbd3aad5d, 0xbd84aec8, 0x3c7e3eb9, 0xbe59f402, 0x3e4ba2e7, 0xbdab7ffe, 
    0xbdb9d3fa, 0x3e050bf2, 0x3ccc2985, 0x3d883b7a, 0xbe20c9a9, 0x3e64f1a7, 0xbe19aa44, 0x3d665498, 
    0x3d5319fd, 0xbbe576a1, 0x3e063010, 0x3e27d478, 0xbe47f59e, 0xbded7253, 0xbdfbbc9c, 0x3cfba2ef, 
    0x3cf6c1f6, 0xbe3c76d6, 0x3e307bf4, 0x3e297b83, 0x3dff3327, 0x3d8cfb1a, 0xbdbac82d, 0x3dd28e22, 
    0xbd19defb, 0xbd1a4605, 0x3e522dbf, 0x3d115629, 0xbd865d0f, 0xba892443, 0x3e574541, 0xbd310842, 
    0x3d44c40d, 0xbbb52287, 0x3e0653c4, 0x3d080c19, 0xbe5b05c4, 0xbdf312fc, 0x3cb7144a, 0xbd8f081f, 
    0xbe5e81cd, 0x3d8b39b5, 0x3e07ab42, 0xbe246f70, 0x3dc9add1, 0xbdbcdb7c, 0xbdbc9062, 0x3dddda8c, 
    0xbddba981, 0x3e0c7a95, 0x3e1cec88, 0x3e0d81ba, 0x3d7631a1, 0x3e731f3f, 0xbd69f758, 0xbe1a3696, 
    0xbe2caf06, 0xbca0a3c4, 0xbe14d771, 0x3c563860, 0x3e6e222f, 0x3c121fc4, 0x3e451745, 0x3de72105, 
    0x3d4c5f71, 0x3d8d647f, 0xbe0daa2d, 0xbd622a5a, 0xbe292d64, 0x3e024712, 0x3db0881c, 0xbe28df97, 
    0xbc123e0c, 0x3dc867dc, 0x3dd5e054, 0x3deb09e5, 0x3de39c3d, 0xbdbe61c3, 0x3daeeadf, 0x3d8554f7, 
    0x3d9252f4, 0x3e343fdf, 0xbe25dedd, 0x3d9b6d93, 0x3caa9584, 0x3e0a7321, 0xbcb9c081, 0xbd15034e, 
    0x3e3bd22e, 0xbd6c6f53, 0xbb738e78, 0xbdd6505c, 0xbdc12e2c, 0xbc853c0c, 0x3df855e9, 0x3c25d31a, 
    0x3e4f7427, 0xbe30fec5, 0x3c860551, 0x3d371b19, 0x3dbcc926, 0xbe24127a, 0x3e0b14d1, 0xbd08c3bf, 
    0x3d3ca934, 0xbe2f7a18, 0xbdcdbb20, 0x3cfe865f, 0x3c4d30cf, 0x3e579747, 0x3df5ec9d, 0xbd9535da, 
    0xbe36485c, 0x3e32a85a, 0xbe02c0b1, 0x3ba5fa26, 0xbe44ede9, 0x3e20edec, 0x3ded7d8e, 0x3db3a7f1, 
    0xbc40028b, 0xbe433d0f, 0xbdda9495, 0x3e264565, 0xbd4eb1fe, 0xbd39599f, 0x3e2d5997, 0x3e56942b, 
    0x3e4962ac, 0x3e0b58a5, 0x3e10442a, 0x3d40859a, 0xbcdf8cea, 0x3cdaba17, 0x3e12ae79, 0xbe01e924, 
    0x3dd27d59, 0x3d13afb7, 0x3de88f6b, 0x3e4652ba, 0x3d846e4e, 0xbe2e3c61, 0x3deb4833, 0xbda48715, 
    0x3df6355e, 0xbd112fc8, 0x3cc04d60, 0xbd5a671c, 0xbe7d1f8b, 0x3da9ee9c, 0x3df6fff5, 0x3d911ce6, 
    0x3d10ffdd, 0xbd8c8b23, 0x3d2889ff, 0xbd9a04a7, 0xba78a827, 0x3d63a115, 0xbe4639f3, 0xbd45a77f, 
    0xbe045f61, 0x3d968192, 0xbe267a8f, 0x3dee16d2, 0x3de6db62, 0x3e36bdcd, 0x3c3a0d59, 0xbd42928e, 
    0xbe4bc193, 0xbc86d2c2, 0x3de9a70c, 0xbe659332, 0xbd89bb03, 0xbd3ed022, 0xbe304899, 0x3dd69ada, 
    0x3dbd6775, 0x3dd63570, 0xbdafc50c, 0x3d49ae96, 0xbdaa68e5, 0xbda2e400, 0x3d631028, 0xbdaf7e57, 
    0xbde0c8b9, 0x3e15d371, 0xbce51098, 0x3e4a822d, 0x3d9966be, 0xbdba480b, 0xbc02c368, 0x3d12117b, 
    0x3e6309bd, 0xbe3895f0, 0xbc9dc535, 0x3ba7d70f, 0xbe2a731c, 0x3dde10a6, 0x3cee4968, 0x3dde815e, 
    0xbd64f809, 0xbe0a2114, 0x3dd06ea6, 0xbd91724a, 0x3dcc6ab4, 0x3d245cdf, 0x3d9c3968, 0xbe06009d, 
    0x3c1c894e, 0x3e7910e7, 0x3d35b826, 0x3ca83347, 0xbd69f22e, 0x3e46b3c4, 0xbd64b8c9, 0x3dec22a9, 
    0xbe1485c1, 0xbd2ff393, 0xbe128b64, 0xbe4ea20e, 0x3d624224, 0x3e2a1b95, 0xbcf64dd1, 0x3d786b58, 
    0x3dc44017, 0xbd0477e8, 0xbe5d5ce3, 0xbd748c73, 0x3ddbb81a, 0x3dfb74dc, 0xbe1c8691, 0x3debd62a, 
    0x3dc81b04, 0x3e49308c, 0xbcdf46c9, 0xbe460b5d, 0x3d7b0041, 0x3e409ee6, 0xbe37ae4d, 0xbdf598b0, 
    0xbdc4316e, 0x3d7e10fe, 0x3e2ca825, 0x3d24d8ee, 0x3c5097a5, 0xbc360f7e, 0x3e185b8e, 0x3e2ced64, 
    0x3ae53e73, 0x3de93ef5, 0xbe726a13, 0x3d6f0456, 0xbe011b90, 0xbe25cec8, 0x3c7a1025, 0x3df587c3, 
    0x3de79819, 0x3ceabb75, 0xbcbfec2e, 0xbe0238ee, 0xbdc5444d, 0xbda3d5df, 0x3b7195f4, 0x3dcfa4f5, 
    0x3e072710, 0x3dea0fd4, 0xbd4e40c3, 0x3d091bb2, 0x3d1cd9ba, 0x3e0278ce, 0xbe15cd93, 0xbe01d832, 
    0x3e469d59, 0xbd40a6b6, 0x3e34b656, 0x3d687cf6, 0x3d78f782, 0xbcc5be5a, 0x3d76a897, 0x3c299848, 
    0xbe214512, 0xbc2767cf, 0x3c673cc7, 0xbdafdca8, 0xbdd8802c, 0x3c5ef86b, 0x3cb5ff01, 0x3e2ebdf4, 
    0x3e498824, 0x3d64ae85, 0xbc5ff3d2, 0x3d95952d, 0x3e1642e1, 0x3d7a18e7, 0x3c555c5f, 0xbe4a83ed, 
    0xbe36ee0f, 0xbda84a3b, 0xbe1c75ca, 0x3d6a53a8, 0x3e228c47, 0x3e2400ea, 0xbc911986, 0x3c14117e, 
    0xbd15804d, 0x3c09f099, 0xbdda9368, 0xbdf45cba, 0xbdb0b44b, 0xbda93243, 0x3dc338dd, 0x3e3bfdf7, 
    0x3e2c041b, 0xbdeab4c3, 0x3df8041f, 0xbe16f67d, 0xbe6deb32, 0xbe2acdb2, 0x3e0134b5, 0x3d9f1ce0, 
    0xbd0c6685, 0x3e67d2e7, 0x3df9dd01, 0xbdf73a7a, 0xbe29b73a, 0xbe00a27b, 0xbe644910, 0x3de0505f, 
    0xbe0c0086, 0xbc41b33a, 0x3e50e21f, 0xbdb92a11, 0x3e2cdf48, 0xbdfe79c1, 0x3e364964, 0x3d63d2fa, 
    0xbe643616, 0xbd67add5, 0xbe2b1e99, 0x3d5ba7ee, 0x3dd32ed1, 0xbe40237e, 0xbe2e8096, 0xbe2e30ca, 
    0xbe3c5f6f, 0xbd6972fe, 0xbd13d7a8, 0xbe28bf33, 0xbe54587e, 0xbe22113e, 0xbe02da6e, 0x3cf81d87, 
    0x3bbe23c5, 0xbdbd0bcd, 0x3daddf1a, 0x3de68800, 0xbe64e610, 0xbda346ce, 0xbe5f328b, 0xbb3ecfca, 
    0x3e51e20f, 0xbd20fc98, 0xbcf2bdce, 0x3d09a4d5, 0xbcd870d5, 0x3e20966f, 0x3daf4f57, 0x3e06b1a4, 
    0x3d53f210, 0xbdf5bbf4, 0x3d9e2551, 0xbe480608, 0x3d0c06e1, 0x3e57b376, 0x3d33ba40, 0xbdaa86a2, 
    0xbddcda7e, 0x3d391c16, 0xbb6a898e, 0xbe5ca872, 0x3db16371, 0xbda59875, 0x3e1ea2df, 0x3d8b7c1d, 
    0x3c7cfb49, 0x3e6feaad, 0x3db4395a, 0xbe2d3dc9, 0xbc7fc471, 0x3e8434f9, 0xbe3fd6ab, 0xbe099dc1, 
    0xbe0b4065, 0x3c8af5d7, 0xbcf21eb4, 0x3c466a10, 0xbe0bc353, 0x3e0b64ba, 0xbdead548, 0xbe5ffa74, 
    0x3d14fcb6, 0x3d35a518, 0xbd9f5915, 0x3e15e84f, 0x3cf57575, 0xbd2bcd82, 0x3e15b8a7, 0xbc58d84a, 
    0xbd9d5442, 0xbe00dd68, 0xbe3bdfde, 0x3b82aced, 0xbe6d7669, 0x3e586159, 0x3e4dde2a, 0x3e6366c9, 
    0xbda893c4, 0x3e14247c, 0xbe8b02dc, 0x3d92ec55, 0x3cc8ccc4, 0x3d8ea5a1, 0x3e28e4be, 0x3e0d880e, 
    0x3e0eb631, 0x3d54de1d, 0xbe2d4c52, 0xbcc5b06e, 0x3e01b02e, 0xbdf79739, 0x3e3cad74, 0x3e14fd1f, 
    0x3e61bce2, 0xbde7969e, 0xbdefe804, 0x3e542416, 0xbd01cab4, 0x3dfddec1, 0xbd5a3d1d, 0xbda50c2e, 
    0xbd05692f, 0xbdb87817, 0xbddba99d, 0x3d44ffef, 0xbdbb3f4f, 0x3cf22ba1, 0x3d17af5e, 0xbd17fb93, 
    0xbe8ab078, 0x3d13e33b, 0x3e4eaece, 0xbe120e69, 0xbe24fbee, 0xbe184844, 0xbdc167f9, 0xbde14041, 
    0x3e2dfefc, 0xbe262efa, 0x3d425ba9, 0xbd0d8a9f, 0xbd7b22c0, 0x3ddb1db2, 0x3dc2d72f, 0xbe305b9b, 
    0x3e364819, 0xbe04b6af, 0xbd4e70f0, 0x3c78c0c4, 0xbdc4b011, 0xbe17ba92, 0xbd47b8d5, 0x3e20bf3c, 
    0xbde9d75a, 0xbe438331, 0xbd970049, 0xbd09cbab, 0xbe261c63, 0x3df7aa9e, 0x3cc965d1, 0xbbe650ec, 
    0x3d62c8c1, 0x3be62b23, 0x3c427642, 0xbd93af65, 0xbe4ae05b, 0x3d1e6d3a, 0xbe6bbef0, 0xbe29b0d3, 
    0xbe441db0, 0xbbc7eaea, 0x3dd2d2fb, 0xbd7dc4fc, 0xbd80f4a3, 0xbdae1f8c, 0x3bb819bd, 0xbd812157, 
    0xbcb8d1f5, 0x3e6b6340, 0x3e0385d1, 0x3e38b24b, 0x3e49cf22, 0x3d85adc2, 0x3d07b915, 0x3cfdba6d, 
    0x3dd7cdd1, 0x3d814285, 0xbd01882f, 0x3de6a684, 0x3d1c394b, 0x3daf5d9a, 0xbda1b691, 0x3d5fe48d, 
    0xbe5617b5, 0x3dd42c4b, 0xbe035c3f, 0xbdc0ff66, 0x3e030ac7, 0x3d6329e1, 0x3b0acefb, 0x3dce5892, 
    0x3dc11068, 0xbc34dab6, 0xbd9cdc35, 0xbe073990, 0x3d62fe75, 0x3da2c22f, 0x3e29e629, 0x3e584821, 
    0x3e065b72, 0x3d701ac3, 0x3d63baa9, 0x3d82bc42, 0xbcb01b35, 0x3d1c0e02, 0xbe3c9ee1, 0xbde72065, 
    0xbdc3807e, 0xbd8c5ebc, 0x3e721b3a, 0x3c229ddb, 0xbdd79fa7, 0x3d790a4e, 0xbd7d7cab, 0x3e33f2b5, 
    0x3e38cd7c, 0x3d39e0c9, 0x3e1f8662, 0xbd98061a, 0x3de8c675, 0x3d575083, 0x3e086b85, 0x3e1eeca7, 
    0x3e59ea33, 0x3e26e9e2, 0x3dff9111, 0xbde0b1e5, 0x3e04914b, 0xbb14a7d6, 0x3cdff380, 0xbde18eea, 
    0x3e1996f6, 0xbe0708c5, 0xbe1847a3, 0xbda0e79b, 0x3c66bce4, 0x3dd4183f, 0xbe1b0979, 0x3df1293e, 
    0xbe421de7, 0xbe38d39b, 0xbd58cb09, 0xbcc92295, 0xbe3a2c3e, 0x3db5f04d, 0x3e09efab, 0x3cce34fa, 
    0xbd6aa70f, 0xbe391e6e, 0x3e2da28d, 0xbdf15762, 0x3c654ba0, 0x3db890f9, 0xbdece78e, 0x3d690299, 
    0x3ce90a42, 0x3e2e1548, 0x3d51ecc6, 0xbe0b7a05, 0x3d93ff83, 0xbddf7c9b, 0xbdee634f, 0xbe037b15, 
    0xbe3a988d, 0x3e3702f3, 0x3dae754b, 0xbdd33e52, 0xbd9d901c, 0x3c76f697, 0x3b5bd948, 0xbe7a2e89, 
    0xbda08329, 0x3e19e184, 0x3dff1b2f, 0xbe2f7105, 0xbd70b10b, 0xbd464cc6, 0xbdb50bab, 0xbe69a319, 
    0xbe24d09b, 0x3df81320, 0xbd5a1e55, 0x3e27d599, 0x3e2cf41d, 0xbe01b197, 0xbd862c1f, 0x3e5bb65e, 
    0xbe4d6b7c, 0x3dbf2a2a, 0x3d90fe98, 0x3e205523, 0xbc840674, 0x3d7154d1, 0xbe1e6cfd, 0xbdb7cb91, 
    0x3d47783f, 0xbe610941, 0xbda7028a, 0xbe0ad893, 0x3e347d5b, 0x3ded02be, 0xbcb35517, 0xbd3c4c7c, 
    0xbe0566a9, 0x3d3235e1, 0xbcfc097a, 0x3e401f86, 0xbe0bbb4a, 0x3e0f19f9, 0xbe4f26bf, 0xbd29b9f2, 
    0xbe50c6ea, 0x3e52b7f2, 0xbd33d4ad, 0x3cf8652f, 0x3e18156c, 0x3e64580a, 0x3d8f5aa7, 0xbd1c2660, 
    0x3e609f10, 0xbe1fd982, 0xbe2e0bd6, 0x3e1080a1, 0x3cb14b13, 0xbe02fd47, 0x3e62083e, 0xbd0f982b, 
    0x3bc3bcad, 0x3d7a8dee, 0xbe360216, 0x3c286792, 0x3dd4ec93, 0x3e33a2ba, 0x3dddb9b6, 0xbdc3146a, 
    0xbdaba770, 0x3de1a4c5, 0xbdf9b895, 0x3e46f392, 0x3cb2f183, 0x3d8b78f8, 0xbe197e40, 0xbdf4bf5f, 
    0x3d4afc44, 0xbe0fd6d7, 0xbe237f25, 0x3e180c61, 0x3cceaa84, 0xbde049eb, 0xbdedaee7, 0xbc677d69, 
    0x3e005bcd, 0xbe0b2a5f, 0x3d2d1116, 0xbd163140, 0xbdea4f11, 0x3e2dce73, 0x3e73cfec, 0xbde89a48, 
    0xbe9d8897, 0xbe221e74, 0x3dd264e2, 0x3e159c85, 0x3e10ac25, 0xbda9970f, 0x3d9fab12, 0x3d4c1510, 
    0xbd2af45e, 0xbda3da48, 0x3e1ab506, 0x3c9cd966, 0xbe6c1f98, 0xbc4b16b7, 0x3e4a96a3, 0xbdc867b1, 
    0xbe195f50, 0x3e34a040, 0x3dcd45f4, 0x3d3cbca4, 0xbd9a13b1, 0x3e2745b9, 0x3e09f265, 0xbdc97679, 
    0xbdc17874, 0x3d3e0776, 0xbd47dd49, 0x3dcc8d07, 0x3d722e60, 0xbde54e98, 0xbe71e810, 0x3e3d68d8, 
    0x3e16b435, 0x3a152b85, 0xbd78f0ee, 0x3c7e7090, 0xbe24618c, 0xbdac1509, 0x3d67b7f0, 0x3d08c507, 
    0xbdf2a2be, 0x3e310432, 0x3cbb6dcd, 0x3d96ec91, 0xbe30e913, 0xbdf5bfbd, 0x3c1af0e7, 0x3de1223b, 
    0xbd91f67b, 0x3d4d2a6b, 0x3e49b3f8, 0x3e4acb78, 0x3e54d535, 0x3dc092cc, 0x3dad2877, 0x3e448188, 
    0xbcaa2170, 0xbe218b55, 0x3e391ac6, 0x3e3a15a3, 0xbd7a35b0, 0x3d69163c, 0x3bd2ee24, 0xbd27c36d, 
    0xbd9c0893, 0xbd2734b7, 0x3d88f54b, 0xbd092c23, 0x3e33a941, 0x3b28b850, 0x3da76520, 0x3df4cb97, 
    0xbe2243c1, 0xbe544a92, 0xbdc604ba, 0xbd3eecd7, 0xbdfa598f, 0x3e52f367, 0x3e1726e1, 0x3e09df66, 
    0x3d04f480, 0x3e34d7aa, 0x3dab312b, 0xbc19aa0a, 0x3e369d27, 0x3df49b4f, 0x3d80083e, 0x3dcee662, 
    0x3daa1041, 0x3e23e9d2, 0x3d78ddfa, 0x3e5e14d4, 0x3b1afa8d, 0xbe070a20, 0xbdd93d81, 0xbe473077, 
    0x3d859464, 0xbe007260, 0xbde9f385, 0xbdd0e9ca, 0xbe45f9c6, 0x3d8f1a40, 0xbd076d99, 0x3df19682, 
    0xbde19960, 0x3d78d876, 0x3e4df885, 0x3d7b5866, 0xbe3a9a29, 0xbdc5c359, 0x3bfb176f, 0x3c6c8731, 
    0x3db42404, 0xbbb55be6, 0xbde119e5, 0x3d1bad56, 0xbdb4093c, 0x3cd08242, 0xbdec532c, 0xbc855f21, 
    0xbe6c37b6, 0x3d185907, 0x3d7a1d44, 0xbe617c89, 0x3dee79f4, 0x3c8c461f, 0xbd3779aa, 0xbe7511e5, 
    0x3be7adbb, 0xbe632a83, 0xbdb99adc, 0xbe254339, 0xbc87dfa2, 0x3cba3cab, 0x3e2eddaa, 0x3d833876, 
    0xbc92293a, 0x3b767695
};

static const uint32_t _K22[] = {
    0xbd0fed6e, 0xbd3a4bd3, 0x3e141ead, 0x3de5a44d, 0x3e043ae6, 0xbceb664b, 0x3db0b16c, 0x3daedc32, 
    0xbd2ce9b5, 0xbd82f9b6, 0x3d49b315, 0xbda85f8e, 0x3cd32062
};

static const uint32_t _K25[] = {
    0x3e0ba44e, 0x3d0092d8, 0xbe16c61e, 0xbc33d967, 0xbdd08d2d, 0xbd82a072, 0x3d94c29c, 0xbdfd6ba3, 
    0xbe04979d, 0x3d4ec1f0, 0x3de69418, 0xbdc6efed, 0xbde34254, 0xbda5f2fd, 0xbc983247, 0xbd89e246, 
    0xbe11133f, 0xbde67050, 0x3cb43c83, 0x3dc23b35, 0xbddbfc22, 0x3dbd7f6f, 0x3ad92b0d, 0x3e06745f, 
    0xbc54827c, 0xbdf41b9f, 0xbe3566ed, 0x3c9c8d13, 0xbda9a1e3, 0x3e08f612, 0x3d943787, 0x3dfcba61, 
    0x3e03aa43, 0xbdf62a2c, 0xbdb1ace6, 0xbde57089, 0xbe2c2323, 0x3e24c293, 0xbd314ae6, 0x3d20914c, 
    0x3de7684f, 0xbcb17022, 0xbd5a1caf, 0xbd7537c1, 0x3cef9a1d, 0xbc86bc30, 0x3dc3cef0, 0xbd786657, 
    0x3d44f080, 0x3dfdbb15, 0x3d2caca1, 0xbcd43cba, 0xbd47ea36, 0xbcbd85bb, 0x3e139a96, 0xbdb85171, 
    0x3d9f383c, 0x3d99b7b9, 0xbdc5aac1, 0xbde5f0da, 0xbce9e76b, 0x3d8b06ff, 0xbbe6d457, 0x3dcf4459, 
    0xbdab6312, 0x3d973740, 0x3c90d738, 0x3e0a154b, 0xbdd942d9, 0xbdaa87b7, 0x3d34b8b7, 0x3d6c4e1b, 
    0xbd342571, 0xbcab498f, 0x3d197647, 0xbdd689cb, 0x3e09185d, 0x3d6e5f4b, 0xbd70fa0f, 0x3e699933, 
    0x3a57bd3c, 0xbe734d67, 0xbe60329f, 0x3d8ed2ad, 0x3e21d066, 0x3c8910fd, 0xbca495d1, 0x3e4b5397, 
    0x3d0e528e, 0x3d823fc3, 0x3e87b5c6, 0xbd67592d, 0xbe4be9d8, 0x3df6c77a, 0xbe84a82f, 0xbcce7bd0, 
    0x3e05e477, 0xbe3558df, 0xbe142a8d, 0xbc173c75, 0xbe3b1715, 0x3e89a316, 0xbe508904, 0x3e3e2134, 
    0xbe760cb4, 0xbe5aefa9, 0xbe74a87c, 0x3e522e9c, 0xbc9a4db2, 0xbe5d4bab, 0x3e437f65, 0x3e5966c5, 
    0x3e928e42, 0x3d12eb1d, 0xbe327054, 0xbce863bf, 0xbe3360aa, 0xbc9d327c, 0xbc83327a, 0xbcce7d3f, 
    0xbd8c7b39, 0x3d5d9cda, 0x3cac512b, 0xbcc2779a, 0x3d8d98b8, 0xbde5e020, 0x3d826e9d, 0xbdc3abc7, 
    0x3d85b29d, 0x3bbac0f7, 0xbd55d60a, 0xbdb0af9a, 0xbd632a56, 0xbce4d85d, 0xbd171dd7, 0x3d802864, 
    0x3d2e329e, 0xbced13df, 0xbda626c6, 0x3d7d41e2, 0xbd1338db, 0x3bee2e59, 0x3d2753fb, 0x3bdb485a, 
    0xbcf49164, 0xbda0c538, 0x3cb7bd8a, 0x3ceddc98, 0xbcf6a640, 0x3dd645f5, 0x3dabcfd4, 0x3cbc2945, 
    0xbc080d82, 0x3da1d84c, 0xbc862cff, 0x3e02fd10, 0xbde1bfbc, 0x3cc35328, 0x3dc3eda8, 0x3d92832d, 
    0xbd0578fb, 0x3e08e88e, 0x3db1b55c, 0x3cbda1c9, 0xbcfffee8, 0x39b7a9ec, 0x3e14f718, 0x3e17fb4f, 
    0x3c2dd212, 0x3e0da6dd, 0x3dbf9440, 0xbd7e305e, 0x3d042d47, 0xbd7dd663, 0x3e19f213, 0xbda37539, 
    0xbc971df3, 0xbdf5fc36, 0x3e2848af, 0x3e16158f, 0x3da90ed3, 0x3d9bf1ca, 0xbb57429e, 0x3e019e04, 
    0xbdcfad2a, 0xbde020eb, 0xbc5f8639, 0xbdb65259, 0xbdc3b948, 0xbd71f4fa, 0xbd5cd3a3, 0xbd5b0505, 
    0x3da612ef, 0x3da16149, 0x3cfccc35, 0x3e6e6b9e, 0x3e1b3234, 0xbd975b98, 0xbd958902, 0xbe630ea3, 
    0xbe76d46c, 0x3d73ffe1, 0x3e7f2184, 0xbe040400, 0xb97f3aef, 0xbe0cff59, 0xbdf0b354, 0x3da2b39d, 
    0x3ddcb7b3, 0x3dd11b78, 0xbe173a5a, 0x3d68410f, 0x3e313737, 0x3d2758fa, 0xbe45c46f, 0xbdb77783, 
    0xbe36b33e, 0xbd95c920, 0x3e4288e6, 0xbc614cb5, 0x3956dda1, 0xbd429527, 0xbe6e055f, 0xbddb0592, 
    0xbdb86910, 0x3da6b563, 0x3d623a9f, 0x3d74019a, 0x3ca09caa, 0xbe1eb048, 0x3da2ff25, 0xbe3bef62, 
    0xbe7fd15e, 0xbdd928a5, 0x3cb907c3, 0x3dfc8df5, 0x3cf6d220, 0x3e7eae84, 0xbe806a71, 0x3df1935f, 
    0xbde49809, 0xbe7dc487, 0x3def8da1, 0x3e3822ba, 0x3c1baefd, 0x3e1706fc, 0xbceb0cc5, 0xbca07ea3, 
    0xbcf19eba, 0x3e84c3a6, 0x3e1dfb5b, 0x3dd6b65f, 0xbe1b4b6d, 0x3dbd2f03, 0xbe7e27f3, 0xbe3e4d12, 
    0x3d97d484, 0x3e223761, 0xbe8f5e59, 0xbca73715, 0x3e8212eb, 0x3e07719a, 0xbe252c58, 0xbd90692e, 
    0xbe2976e8, 0xbdf2abb5, 0x3d323505, 0xbdd5844f, 0xbe3f713d, 0xbdb09052, 0x3d3b8bd6, 0xbda9dcd2, 
    0x3dd6b73f, 0xbe0f935c, 0xbe0985ef, 0xbdff8609, 0x3cfbf94f, 0xbd8dfe7a, 0x3d8792d0, 0xbe1c2c81, 
    0x3df977b3, 0xbe1be234, 0xbc4ada54, 0xbe0bbf64, 0x3c938edf, 0xbe3ca550, 0xbccb2351, 0xbdd57485, 
    0xbe4369e2, 0x3df55d61, 0xbd23955e, 0xbe545f8c, 0xbd22b6ff, 0xbe19db52, 0x3c9d2c2e, 0xbde010ed, 
    0xbe53bf2d, 0xbdb91bbb, 0xbd279942, 0x3cae7240, 0x3db8f7da, 0xbe42adc4, 0xbdfbbbba, 0xbe526be9, 
    0xbe169c2c, 0xbdf3f803, 0xbe49da31, 0xbd86f135, 0x3e2e9c50, 0xbdbd186f, 0xbd9e8ee9, 0x3dd24503, 
    0xbe359e85, 0xbdc93cd1, 0x3d403583, 0x3e4e03d8, 0x3b6c6c93, 0x3e33d641, 0xbc981b54, 0x3e31d326, 
    0x3e325c55, 0x39177fa6, 0xbd1a5e73, 0xbd0329a5, 0xbe0b517e, 0x3d179154, 0x3b95532b, 0xbb3838a9, 
    0xbe107faf, 0xbd537fef, 0xbdc7d38c, 0xbdd1140c, 0x3d93bc35, 0xbd9af614, 0xbc6b9317, 0xbe1464f3, 
    0xbe3204c7, 0xbde43e3d, 0xbd3f9c8b, 0xbde358a0, 0x3d99c4c7, 0xbe43f43d, 0xbe49c583, 0x3e2cf5e4, 
    0xbd0468b7, 0x3da3591b, 0x3dec7901, 0x3e3773f7, 0x3d8ea02d, 0x3d897293, 0xbcc507ee, 0xbd692f8a, 
    0x3d09c149, 0x3c6dc2ae, 0xbd24397c, 0x3d22a3e4, 0x3e361e02, 0x3e174f77, 0xbe031cdd, 0x3d855644, 
    0x3c91032e, 0x3d8520e0, 0x3dd11393, 0xbd952da6, 0xbe3ae6c0, 0x3e331db3, 0xbe0c2c20, 0x3deb7f2d, 
    0xbe0f130f, 0xbdb46ae4, 0x3c867bca, 0xbdd7246d, 0x3dfd2f54, 0xbe375aaa, 0xbe07fbef, 0x3e24d52b, 
    0xbcad657c, 0x3d3ec983, 0x3de7b35b, 0x3e2bfbe3, 0xbdc08c11, 0x3dc43ef0, 0x3e0d6e7a, 0xbd74656a, 
    0x3d6f6b47, 0xbce28f8c, 0xbe487248, 0xbd791d79, 0x3e335e4d, 0x3e0db5a8, 0xbdaa70df, 0xbe4d8e34, 
    0xbd50b087, 0x3e4f3094, 0xbe5c387d, 0xbddeb622, 0x3e45243f, 0xbe40f999, 0x3dbdf517, 0xbdc4147a, 
    0x3cda94da, 0x3d905696, 0x3db8fa1b, 0x3d5f51b3, 0x3d59bb19, 0x3e09ae8e, 0x3e2de1a1, 0xbe480e11, 
    0xbd288735, 0x3da178f3, 0x3c494f7d, 0xbd1fce2e, 0x3e4f0242, 0xbd0b9242, 0xbdd73a60, 0xbe6cade9, 
    0x3db74415, 0xbd98b54c, 0xbc82425c, 0xbc1001ee, 0x3e21d61a, 0xbdda497c, 0x3e5c29a9, 0xbe0da813, 
    0x3db1aa46, 0x3de2e48f, 0x3dd8c552, 0xbde3def2, 0x3cce763f, 0xbe4de348, 0xbe271d6a, 0x3c36cffc, 
    0x3d32811c, 0x3e114be5, 0xbe07de30, 0x3da685c0, 0xbddad01f, 0xbe293a0d, 0xbdf0995e, 0x3df19107, 
    0xbe5dae2f, 0xbc16f241, 0xbd816efa, 0x3d453631, 0x3e407e76, 0x3d937407, 0x3d739511, 0xbda7d00d, 
    0xbdd2dce4, 0xbe006bd1, 0xbe6d673d, 0xbd4d4eab, 0x3bb944d6, 0x3d8078e1, 0x3d02b52e, 0x3c908eeb, 
    0x3deb5764, 0x3af4ddcf, 0xbc8a74ec, 0x3b4b65e2, 0x3d7b499f, 0x3ddd1189, 0xbdcca808, 0xbe672f8a, 
    0x3d8b514c, 0x3dfd7e64, 0xbdf6f4af, 0xbdd74dd2, 0x3dc35c65, 0x3d50d403, 0xbd9b1597, 0xbe43a8e5, 
    0xbdd8e5e3, 0xbdbefa2b, 0x3d3714b3, 0x3d9dda0a, 0xbd8bafb1, 0xbd852b0d, 0x3ccdc219, 0xbda04436, 
    0x3dbd6791, 0x3ceb4a67, 0x3c8bf83e, 0x3e275c69, 0xbc3f954b, 0xbda5472e, 0x3e590465, 0xbdbc8f55, 
    0x3e14240d, 0xbe2127cf, 0xbe437e8b, 0x3e45aa93, 0x3e115f1d, 0x3daf40e6, 0x3d17452b, 0x3d3a9b89, 
    0x3db5f0f8, 0x3df3f942, 0x3e3ac23b, 0xbd96cfca, 0x3c640f61, 0x3d4f551f, 0xbe64c08a, 0x3daa6ebe, 
    0xbe525220, 0x3e8f9d6b, 0x3d600d25, 0x3d5b9ec6, 0x3c5a797e, 0xbe332716, 0x3df40d72, 0xbdbd78c6, 
    0x3dad784d, 0xbe0ed359, 0x3d8dd215, 0x3e0846bb, 0x3e221287, 0x3dd13348, 0xbdbf123c, 0xbd7d0a55, 
    0x3d8ec934, 0xbc287ea5, 0x3d73dfeb, 0xbdfb6176, 0x3de4454b, 0x3dbfc7bc, 0xbe2e56d5, 0xbc351c28, 
    0x3e081c07, 0x3e266fb5, 0xbcf6cc91, 0x3dfbef6d, 0xbe143919, 0x3cd72478, 0x3d9d5062, 0xbd514b04, 
    0xbe015b8f, 0xbe219330, 0xbe0f4a79, 0xbd0b4fcd, 0xbdc257dc, 0xbdc41328, 0x3e1def40, 0xbd60833e, 
    0x3c57867d, 0xbdcb92a2, 0xbe38d230, 0x3c333ed4, 0x3dd27b79, 0xbe38f127, 0xbe44bccf, 0xbe57a29a, 
    0xbdd44652, 0x3e135582, 0x3e25dd33, 0xbd892920, 0x3e0fd570, 0x3e25a632, 0x3d8d09d8, 0x3de8be78, 
    0x3d8511b0, 0xbd853c23, 0xbe79774e, 0x3e3fc97c, 0x3dc4f652, 0x3dfcfa28, 0x3e40c0f9, 0x3e463136, 
    0xbe2326cc, 0xbe164752, 0x3cf5ae02, 0x3d9389c0, 0x3d021d43, 0x3dd67a93, 0xbd92e396, 0x3dba3088, 
    0x3e309a4e, 0x3dc70b2a, 0x3e0a0848, 0x3d81d85b, 0x3d9a59cd, 0x3e2e5398, 0xbdaf4633, 0x3dd36f99, 
    0xbd1ffb2c, 0xbcaf3b63, 0xbe403975, 0x3e6723fd, 0x3dc9488d, 0x3d18dad5, 0xbe303d22, 0x3e188f0d, 
    0xbe278e62, 0x3d8dc98d, 0x3d8cf687, 0x3e8f4b1a, 0x3e9f220d, 0x3e3a9c29, 0x3e4e0064, 0xbdf8ff04, 
    0x3df67101, 0xbc07fac4, 0xbe5c417a, 0xbe1ec4dd, 0x3dacc046, 0xbe267210, 0x3e35652a, 0x3cc4640a, 
    0x3db77f4a, 0x3e9e6890, 0xbdb16209, 0x3e615675, 0xbc19d102, 0xbe7a4219, 0xbd13af7f, 0xbe0f1e4f, 
    0x3d944c6d, 0xbe52135b, 0xbe4338b1, 0x3e55a65d, 0x3c0a8e5c, 0xbe24a19f, 0x3cd8972e, 0x3c9967f1
};

static const uint32_t _K28[] = {
    0x3f16a766, 0x3f47912c, 0x3d723530, 0x3e917fab, 0x3f10b14f, 0xbe267855, 0x3cefe33b, 0xbe3fd7ef, 
    0x3e0ccca1, 0x3e17d804, 0xbec97487, 0xbe278b3a, 0xbecf355a, 0x3f756c5d, 0xbda266a2, 0xbc206c38
};

static const uint32_t _K32[] = {
    0x3cbafa8e, 0xbce90665, 0x3d22e8c6, 0x3e43864d, 0x3e275bd9, 0x3d71487c, 0xbe6d9472, 0x3cc29e6e, 
    0x3e0ac620, 0xbccbd310, 0xbe4f3a35, 0x3e39308a, 0xbd7e2e1a, 0x3c6c637c, 0xbe58843b, 0xbcab1242, 
    0xbd3acaba, 0xbce8a1da, 0xbddd23b0, 0x3d8d8fbd, 0x3dc41cdb, 0xbd77b4b9, 0xbc95bda3, 0x3e22aec0, 
    0x3e5ff050, 0xbe85282e, 0xbe74ce77, 0x3c0fddbd, 0xbaaa1162, 0x3e7698e0, 0x3e2085cd, 0x3e14c5a9, 
    0xbdd58ab4, 0xbe5506cc, 0xbd441420, 0x3e21feca, 0xbd8bbf54, 0xbe033a71, 0x3e089013, 0x3d0a0c7e, 
    0x3e137795, 0x3e43b239, 0xbe596c95, 0xbe1673f9, 0xbcdd4534, 0xbdc7b79a, 0x3e20a5da, 0xbd86866d, 
    0x3e38cdef, 0x3e70c942, 0xbd028ee9, 0xbd28a756, 0x3d972299, 0xbe6c922d, 0xbe320364, 0x3e4f8b33, 
    0x3e325be5, 0x3d7556f4, 0xbe01d0c4, 0x3d665df1, 0xbe54490f, 0xbc70a3a1, 0x3db5a1f8, 0x3db3b244, 
    0xbe817f65, 0x3e483216, 0x3e4cc759, 0x3c527e5d, 0xbdd66236, 0x3e2f8ea2, 0xbd9a9d3d, 0xbd6f624e, 
    0x3e759ce8, 0x3e84daf2, 0x3e14938b, 0x3dd7be3d, 0x3e570526, 0x3e071dc8, 0xbd5c5511, 0xbdb0150b, 
    0x3c73cee5, 0x3e1bc983, 0xbd1e8104, 0x3e3d7d0c, 0x3b986184, 0xbcae85a3, 0x3d159665, 0x3e1bfc08, 
    0xbd0bf487, 0xbda22c2c, 0xbe3a5e6c, 0x3dc702be, 0x3e712d34, 0xbb0b7a95, 0x3dc80c94, 0x3e77c823, 
    0xbce610a9, 0x3e4b104d, 0xbe36a49a, 0xbe4fc3a7, 0x3e0b62ac, 0xbdac4978, 0x3d605c47, 0xbe57c540, 
    0xbd5ee361, 0xbd5b33b2, 0x3db009e1, 0xbc3f095d, 0x3d5e58c4, 0xbd8202d3, 0x3db3f873, 0x3c6a3d74, 
    0xbe6a8448, 0x3e5d63fb, 0x3cb8c295, 0xbe67a684, 0x3e619cfd, 0x3db9abe7, 0x3c72bd27, 0xbdab3b71, 
    0x3dccdeae, 0xbd031555, 0x3d9bed14, 0xbdad3e7e, 0x3e2ffc6a, 0x3d8573bc, 0xbdd8d5e4, 0xbdc41455, 
    0xbd85311b, 0xbdc42654, 0x3e66859e, 0x3dcfae5f, 0x3d140edf, 0x3e05cc6a, 0xbd46fe5e, 0x3da178db, 
    0x3dbf9b96, 0xbe3d286a, 0x3e0198ca, 0xbe26ea87, 0x3e0f760f, 0xba550ab1, 0x3e1d8412, 0x3c7d8821, 
    0x3e5bb018, 0x3d281cb9, 0xbc52bee1, 0x3db6d62a, 0xbe149242, 0x3ddfbfbd, 0x3e43d7dd, 0x3e01eed5, 
    0x3c671e93, 0x3cc2e5a1, 0x3cc1c89d, 0x3ddbbee5, 0xbe1a4379, 0x3d5fd5a8, 0xbbfc251d, 0x3dd83e39, 
    0x3df2d1fd, 0x3c6fc832, 0x3d5253d0, 0xbcf96e78, 0xbe5d7edb, 0xbc963cd5, 0xbdffd781, 0xbdf1d135, 
    0xbe393929, 0x3e7095a1, 0xbea76aea, 0xbe4f37de, 0x3dfdf9b7, 0xbe0d4f35, 0x3e39a3e2, 0x3e6aa58d, 
    0xbd24a300, 0xbe40fbcb, 0xbe050b98, 0xbe07882e, 0xbe48b200, 0xbc97693f, 0x3e5e0603, 0xbe66390b, 
    0x3e9e4f01, 0x3da81c91, 0x3df89e18, 0x3e0dcbaf, 0x3e07ec3d, 0x3e512cfd, 0xbde4539b, 0xbdadf5e8, 
    0xbe00869e, 0xbdf753d9, 0xbe33b268, 0x3e00431a, 0x3dbf80b4, 0xbe9c6ade, 0x3e226780, 0x3d4c7f98, 
    0xbdc916b4, 0xbe27463e, 0xbe122346, 0xbdf4ec4c, 0xbdfbd570, 0xbe162bb7, 0xbe3d5e51, 0xbc3fcb2c, 
    0xbd222ced, 0xbe4de0ae, 0x3e18a377, 0x3dd95834, 0xbe217cf6, 0x3e18d93c, 0xb9ee9d60, 0x3e48989f, 
    0x3ca7cbc3, 0xbca3c18a, 0xbe64a0a5, 0x3da018f6, 0xbe757fb6, 0x3d397fd0, 0xbe40782f, 0xbd2d02f7, 
    0xbe3bd110, 0xbe2fdc9d, 0x3de80cef, 0x3de97ce0, 0x3df8e781, 0xbe3efe4b, 0x3dfc3d35, 0xbe33203a, 
    0x3e292662, 0xbe39d123, 0xbd5d3a91, 0xbe5eb5aa, 0x3e18aef6, 0xbd44dea8, 0xbe1ae3f2, 0xbd22edfe, 
    0xbe2b81ab, 0xbe7f21fa, 0xbe5991fa, 0xbe5a15c9, 0xbcd34901, 0xbeaac502, 0x3e3563c5, 0xbe45eb47, 
    0xbcd910e2, 0x3d486f9e, 0x3dda2973, 0x3e0065dc, 0x3dc9c096, 0xbdb969a9, 0xbe802b27, 0xbe8f62f1, 
    0x3df17713, 0xbdb4ad45, 0x3ddd6ba2, 0xbe6ba3a1, 0xbd910713, 0xbde11857, 0x3d8d92fe, 0x3e4dffca, 
    0xbd8107f3, 0x3d821b8c, 0x3e93c4e4, 0xbe558499, 0xbdc52617, 0x3d2579e2, 0xbe248854, 0xbe82bb35, 
    0x3da49ad0, 0x3e3ec91b, 0xbda69695, 0x3da1b5bb, 0x3d2ad9e8, 0x3d6e2f22, 0xbe14f9c4, 0x3b212697, 
    0x3e20c456, 0xbe24389b, 0xbe0926eb, 0xbcba97ef, 0xbe3755ca, 0x3e4d6269, 0xbe2d09e4, 0x3dc27408, 
    0xbe060100, 0xbdc062c0, 0x3e526329, 0xbe647cf5, 0x3dc83487, 0xbd14a238, 0xbe136e69, 0xbe8c0ba7, 
    0xbdf62332, 0xbd8e4e25, 0x3cc983f5, 0xbdb0fee3, 0x3e3b9833, 0x3dacacf3, 0xbc92e17d, 0x3c07adcf, 
    0xbe340a41, 0xbe0ea448, 0xbd410b5e, 0xbd0a7fa8, 0xbd8b408a, 0x3e4dcf6a, 0x3e791f61, 0xbcf8ec3a, 
    0x3df10252, 0xbdc5ce0c, 0x3e114925, 0xbe35abb4, 0xbde10ac1, 0x3e4f14df, 0x3e3ef387, 0x3e088d8d, 
    0xbd160f12, 0x3e30ed61, 0x3e434104, 0xbdc06dca, 0xbe6527be, 0xbe3cd7fa, 0x3cbf37ec, 0x3e28d2de, 
    0xbe39dccf, 0xbdca6b91, 0x3e348fdb, 0xbe3a8896, 0x3d96184a, 0xbe37fb85, 0x3de074ca, 0x3e21fc46, 
    0x3e669d54, 0x3e6e29a3, 0xbd58d423, 0xbdba28a4, 0xbe1fca7b, 0x3d34040e, 0x3bdf6f48, 0x3e23a659, 
    0xbe2cab09, 0xbe1765c2, 0x3df7a8a8, 0xbc7faf69, 0xbe3b3811, 0x3cb3d33a, 0xbe0a56fa, 0xbb3f1ac9, 
    0xbe7bd82c, 0xbde31489, 0xbc70f106, 0x3d848e2c, 0xbcc4605a, 0xbd74c32e, 0x3c9edc70, 0x3d32f8d5, 
    0xbe52347d, 0x3e2a36d1, 0xbe4d1041, 0xbe55e43a, 0x3d82f351, 0xbe2a7a6d, 0xbd31dfcd, 0x3db5f5cf, 
    0x3dad9219, 0x3c8ec054, 0x3d96b41e, 0xbde345ad, 0x3e22f3f7, 0x3e3e2dcc, 0x3dc4cf02, 0x3d916a84, 
    0xb9b8042d, 0x3e185e5d, 0xbe044a2c, 0x3d1eaaa6, 0x3d474b57, 0x3df370ca, 0xbe635164, 0x3c13c5e7, 
    0x3e509bfa, 0x3e593529, 0x3ddf93de, 0x3e0ea8ff, 0xbd647499, 0x3df6445c, 0xbdf8bb8d, 0xbdcd45aa, 
    0x3e67f8de, 0x3e0fda43, 0xbd7e7f4e, 0x3e6168dd, 0x3d10f5e6, 0x3d28d7a7, 0xbd3a76f6, 0xbd98d709, 
    0x3cfc9567, 0x3c45d05e, 0x3c5955a4, 0xbe7ac84a, 0x3dc1647d, 0xbe622804, 0x3d55780a, 0xbd6d9113, 
    0xbe54d614, 0xbe2bbb8d, 0x3d8ff6dd, 0xbe60d5ff, 0x3e3df835, 0xbc8487f0, 0xbe0da6a5, 0x3d860626, 
    0x3e13be97, 0x3e686435, 0xbdacbcbc, 0xbd4c7a31, 0x3e4518ef, 0xbe236080, 0xbd6d2de8, 0xbe5ce9a5, 
    0xbdc5967f, 0x3e47a685, 0x3db5eaf1, 0xbde1eba1, 0xbde3ea5d, 0xb9c42499, 0x3d6e5a30, 0xbd476cd7, 
    0x3e22e1be, 0x3e59555a, 0xbd85e3e6, 0x3e5aa3a9, 0xbe2a0b4b, 0xbc76575a, 0x3d0276e3, 0x3e8e2087, 
    0x3e332f43, 0x3dcec133, 0xbe2345dc, 0xbe16e1ea, 0x3d775e27, 0x3c93af9e, 0x3e8f2859, 0x3e1f722b, 
    0xbcc6d830, 0xbd94d4e3, 0x3d898c2d, 0xbdeceb0a, 0x3de0c1f0, 0xbe15784f, 0xbe8ed9a0, 0x3e7b58d4, 
    0x3cc97e95, 0x3e4d12e1, 0x3da781d6, 0x3dff9d34, 0x3df0d889, 0xbe405335, 0x3e1a4ff9, 0xbe584acf, 
    0xbe551247, 0x3e0fa778, 0x3d04c5e6, 0x3e305122, 0xbcf7f0dc, 0x3d28d24c, 0x3d42f281, 0xbe688797, 
    0x3da99c51, 0xbd942524, 0x3db6ccf6, 0x3def3acf, 0x3dc73d28, 0xbdcbc4cc, 0x3e68c66e, 0x3d0fa514, 
    0x3df6ad49, 0x3e0944e1, 0xbcb3d85e, 0xbd1c0141, 0x3bc75071, 0x3e016e9e, 0x3d5f86ae, 0x3e44dd62, 
    0xbe846ea7, 0x3e101e20, 0xbe700654, 0xbe264ce9, 0xbe08aa6e, 0xbe27053e, 0xbde1de2e, 0x3e69dd63, 
    0x3de9f55e, 0xbd0bf24b, 0xbdf9b3c9, 0xbe30dd86, 0xbe1764bb, 0x3e1d5a5e, 0xbe5ed6f7, 0x3d28ca25, 
    0x3dd18eb1, 0xbda8aeb1, 0xbd32e8fa, 0xbcdefdf7, 0xbd81473b, 0x3e69019b, 0x3e64212d, 0xbe42184a, 
    0xbe64d3b9, 0x3e1be3b4, 0x3c2255a9, 0x3ce2b8b7, 0xbde211c1, 0x3da90752, 0x3dd9e1ee, 0x3e0886a3, 
    0x3d3ab054, 0xbe0eff11, 0x3cf43f83, 0x3d8c7af0, 0x3dc9d637, 0xbb5bccaa, 0xbd9002bf, 0x3e72ab6a, 
    0xbe62fbeb, 0xbe37dde7, 0xbd797077, 0x3db9e82d, 0x3e4a8f82, 0x3e0b8815, 0x3c39e15d, 0xbd403d94, 
    0xbd70f438, 0xbd103be6, 0x3da4c4ed, 0x3e486de9, 0xbb4740d7, 0x3ddc12ba, 0x3cc83cd1, 0x3e50f54a, 
    0x3d9bbff4, 0x3e82628c, 0xbdecd0f4, 0xbe7232b8, 0xbdea461c, 0xbe03fb4d, 0xbe0c439d, 0x3e2548b7, 
    0x3c21c6ee, 0x3dc341aa, 0x3cf3e266, 0x3e5df159, 0x3e2c2a8a, 0x3dfa83d8, 0x3e6b4e65, 0x3e39b8ed, 
    0x3e6fe7d0, 0xbcd78116, 0xbe515fcd, 0xbd74f7a6, 0x3d8772f0, 0x3cdd2771, 0x3e0d25f6, 0xbe1f5927, 
    0x3e0b2cc1, 0x3e4aa8c4, 0xbe015039, 0x3caf23bb, 0xbdd67c18, 0xbe303d89, 0x3b73547d, 0x3db05e46, 
    0x3ccde183, 0x3c94b82f, 0xbe2b4f1c, 0xbe4f0aea, 0xbe56303a, 0x3e2c7ae1, 0x3e1feaaa, 0x3d857ae8, 
    0xbe642e0d, 0x3ddda667, 0x3e026821, 0x3e61a0bb, 0x3e052906, 0xbd608f3d, 0xbc440c48, 0xbe0f1774, 
    0x3e0ebb75, 0xbe39d5c0, 0xbcaa7ea6, 0xbbdbb14a, 0x3bcda013, 0x3e5b0f97, 0x3de45946, 0xbe0cd281, 
    0xbc0d2a3a, 0xbdfad572, 0x3d3f58e7, 0xbb00f8ba, 0xbc00b008, 0xbd538960, 0xbdd96235, 0xbcec6050, 
    0xbd3d7dbd, 0xbd189823, 0x3dd24aba, 0x3e89861b, 0x3b9ac8da, 0xbe3d21c4, 0x3e5d0421, 0x3e4d510d, 
    0x3e1c0aa7, 0xbdc93769, 0x3dad9e74, 0x3dae3662, 0x3d6edd3e, 0xbe5cb930, 0xbd918823, 0x3cbd2798, 
    0x3e296487, 0xbe251e4b, 0x3dac9592, 0xbd87015c, 0x3dcdaac1, 0x3e74112c, 0x3d883646, 0x3db7f505, 
    0x3e5d7ab0, 0x3d989abb, 0x3e792717, 0x3e00ed43, 0x3d488dc7, 0xbe6397e8, 0xbd3365bb, 0xbdf1fd04, 
    0xbe6934e8, 0xbe1d1b1c, 0x3e8391d3, 0x3e7184ed, 0x3de5ae86, 0x3e73035c, 0x3e8450f7, 0x3e04d3d8, 
    0xbd330a35, 0x3ea01d12, 0xbd4b99d1, 0x3e307d29, 0x3e0861cc, 0x3cbbbc68, 0x3e4fee08, 0x3d4b88af, 
    0x3e1afc84, 0x3d638ad2, 0x3d1db299, 0xbdd0d689, 0x3d3e7d3f, 0x3bf3746d, 0xbd46caf8, 0x3cecf6a4, 
    0xbd7e90f9, 0x3e8f2259, 0xbe5cc72f, 0xbe44158a, 0xbe322f31, 0x3dad9e67, 0x3c996152, 0xbe125d1d, 
    0xbdee486c, 0x3e22bc0e, 0x3e0c8dc4, 0xbd0cb332, 0xbe1f93a4, 0xbe69a52b, 0xbe07aea6, 0xbe320b9a, 
    0x3e4813ea, 0xbe30eeb5, 0xbc429aa6, 0xbe04f94f, 0x3dd20483, 0xbb8bc24d, 0xbe636345, 0xbd8d87a0, 
    0xbe4af641, 0xbe0da3c5, 0x3e049222, 0xbe37f560, 0x3d06a139, 0x3de5fa34, 0xbe5c0041, 0xbde526a0, 
    0xbe43709a, 0xbe6b3c7c, 0xbe4d88b9, 0xbe3e7122, 0xbe368a6d, 0xbe649fcc, 0xbd5aa2ae, 0xbd4c0f23, 
    0xbdc177f9, 0x3e2717f8, 0x3dcf179d, 0xbe2ad1e8, 0x3de775e9, 0xbe052034, 0xbdfb177c, 0x3d219786, 
    0x3e38107a, 0xbdef7338, 0xbe03ed47, 0x3c76c503, 0x3e1fafe0, 0xbe719eea, 0x3db3765e, 0xbe2537a3, 
    0x3cd7a13c, 0x3d209189, 0x3da1334c, 0xbe1dafe1, 0xbe566c56, 0xbd56eaed, 0x3c6cf817, 0xbde30096, 
    0x3e58bf8c, 0x3e8557ef, 0x3d293aa1, 0x3e4d651b, 0xbe047295, 0x3de59aa7, 0x3e33e11a, 0xbde236f0, 
    0xbe59f231, 0xbd2cce14, 0x3e1ce749, 0xbe4ddf53, 0xbd113bdd, 0x3dad2fe9, 0xbd8f6a02, 0x3e1cf90e, 
    0xbe25862f, 0xbe2763e7, 0xbe015df7, 0xbe0b4069, 0xbe70d9ae, 0xbe7150f6, 0xbdf7680a, 0x3e3898d2, 
    0x3d26ce4a, 0x3d9ef767, 0xbd99a39a, 0x3e83b1b2, 0xbe1a0e36, 0xbe0db847, 0x3e50bd95, 0x3d8704fa, 
    0xbdb590b5, 0x3e516e3d, 0xbdd78a3b, 0x3e0dc2a0, 0xbe069664, 0x3e40c44d, 0x3c20a0ec, 0xbdda0c55
};

static const uint32_t _K34[] = {
    0x3db82316, 0x3d5239b5, 0x3df1a030, 0xbdea3526, 0x3e6d1154, 0xbc882c11, 0x3da71667, 0x3ddb5b9d, 
    0xbe56b51c, 0x3e3765d3, 0x3e266c7d, 0x3e139435, 0xbe5debba, 0xbdc16627, 0xbe0798d4, 0xbe3784d6, 
    0x3e5f1f9e, 0x3e4dfaa3, 0xbe179f0c, 0xbd42257a, 0xbde4a8fd, 0xbdec6683, 0xbcbf877d, 0x3d8abed2, 
    0xbe8a2d6e, 0xbe73fb14, 0xbe98ed57, 0xbe5cf69b, 0xbda0b7aa, 0xbe8d456f, 0x3e8a88d5, 0x3e1bd16b, 
    0x3d8766f7, 0x3e037d48, 0xbbf9007c, 0xbdc76831, 0x3e827970, 0xbe3f30c9, 0x3e12b2b0, 0xbe9f8457, 
    0xbeae4da2, 0xbe1339fa, 0xbe5de82b, 0x3d8e4c5d, 0x3db97f89, 0xbe6a071d, 0x3e682840, 0x3e80f676, 
    0xbeb8bbfc, 0xbe25d97a, 0x3e3d1443, 0x3eaf23ad, 0xbea7486e, 0x3e2206fc, 0x3c800113, 0xbeb932dc, 
    0x3e173ebd, 0xbe82dc6a, 0xbe46d849, 0xbe0a64ad, 0x3e5fb390, 0x3bc684fc, 0xbd8c4df9, 0xbe629538, 
    0xbdad76a5, 0xbe12fab1, 0x3d45e926, 0xbe4c163b, 0x3e16ef8c, 0xbd533024, 0xbec95adc, 0xbe3b9d02, 
    0x3eca62f6, 0x3d9d7ace, 0xbeebb138, 0xbe358623, 0x3ddd4534, 0xbe30d33b, 0x3e0166d4, 0xbeb92d15, 
    0xbeeca369, 0xbe34d240, 0x3ec883d8, 0xbe978077, 0xbebb6f50, 0x3e0ff8ac, 0xbce12580, 0x3eb97f55, 
    0x3e92affb, 0x3e52b150, 0x3dfd3141, 0x3e91d9b5, 0x3e8562f8, 0xbe06898a, 0x3ebc9c3b, 0xbdb2eb61, 
    0x3e48e887, 0x3e0fa010, 0x3e9a0118, 0xbdfd49f3, 0x3e07052f, 0x3e09b618, 0x3d55dcb6, 0xbd743427, 
    0x3e4d5b82, 0x3dc57dd8, 0xbab557f5, 0xbdd67f84, 0xbe3c4665, 0xbde19f13, 0x3e88818f, 0x3dd82984, 
    0xbe86e1ca, 0xbdbba6df, 0xbe1115b0, 0xbe0e1850, 0x3d3da2ec, 0xbd06aca7, 0xbd5dae15, 0xbe3c0fab, 
    0x3d55e56d, 0x3d309577, 0xbdc0eaf6, 0xbe41adce, 0x3d4c5dcb, 0xbe98028d, 0x3e845be5, 0xbdeaaa37, 
    0x3d411a93, 0xbd629da2, 0xb9b4e0a3, 0x3dd47705, 0x3ca8bb75, 0x3e6bfd13, 0xbe3ac955, 0x3e28852e, 
    0xbd85f5a3, 0x3ea14d38, 0x3e020a97, 0xbe0f9410, 0xbc9d9b0e, 0xbe832199, 0xbd656eb4, 0x3d97446b, 
    0x3e73c39d, 0x3dbdf39c, 0xbe08fde3, 0x3ea71911, 0x3e3839a8, 0xbec12b25, 0xbe9351fd, 0xba00d0b4, 
    0xbea366f2, 0x3dc04796, 0x3e467f53, 0x3e69352d, 0x3e4477f1, 0xbe8c432e, 0x3e43d7d4, 0x3e6065c6, 
    0x3e45bf6b, 0xbdd5de82, 0xbd35e99a, 0x3e1dee48, 0x3e8047eb, 0xbe82785a, 0x3e562eb5, 0x3cafe376, 
    0xbe5ab216, 0xbda68881, 0x3d877f02, 0x3e2c406d, 0xbd833d85, 0xbe4a29ac, 0x3e93c695, 0xbe48173a, 
    0xbd9a3f23, 0x3e9169bf, 0xbe01acad, 0x3da1d3b6, 0xbe949d91, 0xbde7ceda, 0x3ea42c70, 0xbea8c0e3, 
    0x3e85b1fe, 0x3e71ec13, 0xbe88dcbb, 0x3e68aa3e, 0xbe87baf8, 0xbe883a07, 0xbd0a26e6, 0x3d1ce787, 
    0x3ec62ad0, 0x3e655c4c, 0xbe7f7c61, 0x3e87ca3f, 0xbe6d39c5, 0xbe30bd2f, 0x3e62060e, 0xbe664288, 
    0xbdf936f8, 0xbebc93e4, 0x3e10ee99, 0x3e148c50, 0x3e9f4a18, 0xbd5fa8c9, 0x3e66399a, 0x3e80ed2a, 
    0x3eab4b68, 0xbdaf6d53, 0x3eb3691d, 0x3dd897dd, 0x3ea0a483, 0x3e059007, 0xbebce32b, 0x3ea1d607, 
    0x3e81639c, 0x3e9557b4, 0xbea0e205, 0xbeb75f92, 0xbdf3ed7b, 0x3e43c82b, 0x3e276eea, 0xbe9ef79d, 
    0x3ec35840, 0x3e529ca2, 0x3e9a5e51, 0x3e0bc9d4, 0x3e64ebc7, 0x3d0922fc, 0xbeaf5127, 0x3bd14b94, 
    0x3e3064a0, 0x3d42ae45, 0x3d76865a, 0xbeb9b07c, 0xbec3a2d9, 0xbdcf042a, 0xbeb32833, 0xbc859385, 
    0x3e92c24b, 0x3cb086b2, 0xbc2ab9bc, 0x3d9059af, 0xbdac80e5, 0xbe15df00, 0xbe015f48, 0xbdd24ab8, 
    0x3dbdeb4c, 0xbe2076d8, 0xbe4256a5, 0x3ce24923, 0x3e15d9a6, 0xbda35121, 0x3e13b9b2, 0xbe9c5efd, 
    0x3e54060f, 0xbe55c47f, 0x3e540b77, 0xbe2fe115, 0x3e074dd8, 0xbe45d3da, 0x3e62426d, 0xbe9cbf33, 
    0x3e7e2816, 0x3e802709, 0x3c1f9f19, 0xbdfc5ce5, 0xbe73708e, 0x3e4a1df0, 0x3e4f20a5, 0xbc85c440, 
    0x3dd6a962, 0x3df0aa75, 0x3e653729, 0xbdb6c792, 0xbe379df7, 0x3df119d5, 0xbe9fdf13, 0xbe64e4f2, 
    0x3dd733cf, 0x3e7b7a91, 0x3ddc9834, 0xbe23560b, 0x3dc35b26, 0xbe695ce6, 0x3e38fa91, 0xbd044fbf, 
    0x3e8f80a3, 0xbe265480, 0xbe5b0a0f, 0x3da7fbb6, 0xbe2a0fe7, 0xbdcb8f91, 0xbc2ddaa6, 0x3d56c620, 
    0xbe5c05b5, 0xbe2486f8, 0xbe100855, 0xbd88b5e9, 0xbdad0bc6, 0x3e0d2fa8, 0x3e782bee, 0x3e177c0b, 
    0xbd786a36, 0xbe6491dc, 0xbdf7448b, 0x3d440586, 0x3e318771, 0xbcf0f17f, 0xbdfa34cb, 0xbdb78245, 
    0x3e4fa6ca, 0x3e693f7c, 0xbe019e6f, 0xbe1ef104, 0xbdbe45de, 0xbe753a8a, 0x3e4667e3, 0x3da0fbe0, 
    0xbcf7841e, 0xbde31de9, 0xbbaddda0, 0xbde896b3, 0x3e3adf70, 0xbe004de3, 0xbd8a737e, 0xbdb6d238, 
    0xbe59e91c, 0x3b1333f3, 0x3e01afcb, 0xbe5a6f46, 0xbe946d82, 0xbe508500, 0x3d608380, 0xbe672dee, 
    0x3e12fbb7, 0x3e2b06c9, 0x3e628db9, 0x3d1dd473, 0x3ec768ca, 0xbd7f512e, 0xbe5150bc, 0xbe94f15d, 
    0xbe95a35e, 0xbe32403a, 0xbe94b1bf, 0x3e3401eb, 0x3e79e197, 0x3e2b54d0, 0x3deac26c, 0x3e4efee8, 
    0x3d2499e0, 0x3e831599, 0xbd729efa, 0x3e1a68e1, 0x3e07944a, 0x3e912d2e, 0x3e71bf53, 0xbe81e4f4, 
    0x3e2e8dfb, 0xbe1e311d, 0xbeca6024, 0x3c825386, 0x3e73a156, 0xbd2f8527, 0xbda1b8c0, 0x3e9e5658, 
    0x3dd68172, 0x3e3e53dc, 0xbe6172e3, 0xbe6a0429, 0xbdd2f1b5, 0x3ece798a, 0xbd96815b, 0x3e4f1109, 
    0xbd21b5ff, 0xbe155e0d, 0xbeb385e2, 0xbe1c4250, 0x3e2af0d3, 0x3ea66c5e, 0x3ce4443f, 0xbdad98ed, 
    0x3c8f90c8, 0x3e83c6dc, 0x3ee09992, 0xbe3af5ff, 0xbec43172, 0x3ee86d84, 0x3ebd8b72, 0xbda6e4a8, 
    0x3e00ced5, 0xbe36bc6a, 0x3e6fb5d5, 0x3db310ca, 0x3d0e6589, 0xbeacd4f6, 0x3eb5f40c, 0x3d952402, 
    0x3d7649ae, 0xbea9e39b, 0x3ede1006, 0xbdddb9ea, 0x3ec20613, 0xbe622eeb, 0x3da03e90, 0xbe2681d8, 
    0x3e958a25, 0xbed6586b, 0x3db2d813, 0x3ec77bba, 0xbe293371, 0xbd257fbf, 0xbe5eb2f4, 0xbec66fdf, 
    0xbca3aa57, 0xbcfee171, 0xbecc34ed, 0xbea9ef2f, 0x3e8f2411, 0xbe1f3ac1, 0xbedf6f78, 0x3e4604c3, 
    0x3e870e3e, 0x3e5ab308, 0x3d0d3ffd, 0xbe8094d8, 0x3df6f35c, 0xbe076039, 0xbead6006, 0x3d8c34b2, 
    0x3d88b375, 0x3ecb108b, 0x3e26e608, 0x3eef9012, 0xbdf11e88, 0xbef1c378, 0x3ec51b33, 0xbdbbd822, 
    0x3e998a4a, 0xbe8817e2, 0xbeda4d93, 0x3d2f0b27, 0xbea97af8, 0xbdd8b345, 0xbe478c64, 0xbe78ce9f, 
    0x3e5a9a02, 0xbf02fc17, 0xbf0218c3, 0xbeb0800e, 0x3e1e6c2a, 0xbe58e4e3, 0x3dbe5ac8, 0x3ea12901, 
    0xbecb5475, 0x3e8fbe70, 0xbeb02b50, 0x3ed151d7, 0x3eda4397, 0x3ed86784, 0x3ddb5274, 0xbdc1c826, 
    0x3e95bbeb, 0xbdd8efd6, 0xbe3881bf, 0x3e40b1c4, 0x3dca4473, 0xbca9d243, 0xbe95f884, 0x3eaeaf5c, 
    0xbe83bbd7, 0xbe882851, 0x3da0f118, 0xbf012824, 0x3e9708d2, 0x3eab9786, 0x3e5a3958, 0xbe4ce18e, 
    0x3eb975cc, 0x3d58b731, 0x3cad4d8c, 0x3cd80d30, 0x3e851611, 0xbd437298, 0xbd148f2b, 0x3e108754, 
    0xbea6b9c6, 0xbdae37be, 0x3e3e603c, 0xbe8dc456, 0xbe1c075b, 0x3dbb5c8e, 0xbe97fb83, 0x3ecc672f, 
    0x3e1c07bc, 0x3e0a001d, 0x3e891f49, 0x3e786a85, 0x3d614862, 0x3d11a783, 0x3e9dd748, 0xbe3b6d46, 
    0x3eb40092, 0x3eb9a82e, 0x3ecbcc67, 0x3ea02477, 0xbee53870, 0xbedac212, 0x3e54bd52, 0xbe8d819b, 
    0xbe1bec46, 0xbeadd9e0, 0xbe332cb1, 0xbe823842, 0x3ebf7dc7, 0x3ef037bf, 0xbd08cd91, 0xbea6a365, 
    0x3e8c5ce0, 0xbe626491, 0xbe03ba30, 0x3e333adb, 0x3ddf7ac5, 0xbdc5947d, 0x3d246eeb, 0xbe70b544, 
    0x3eb24357, 0x3df70382, 0x3e8a113d, 0x3dce66ea, 0x3e93889e, 0x3eea4e7f, 0x3ebcc6de, 0xbe75cb4e, 
    0x3a8cebf2, 0xbeb62697, 0xbdbcacde, 0x3e5b0577, 0xbece51c3, 0xbe8d446d, 0x3ec20b9c, 0x3e9452d4, 
    0x3e8297b1, 0xbeb43572, 0x3ed4bf91, 0x3eaef2fa, 0xbe126e02, 0xbd93ac2c, 0xbd5d4f70, 0x3e830411, 
    0xbd6ff3f5, 0x3e2e50fc, 0xbea6a061, 0xbf109feb, 0x3e28eeb4, 0x3da34345, 0xbea8dffd, 0xbeaece60, 
    0x3e9b0a60, 0x3f0a9dcb, 0xbeb7aaab, 0x3d138aad, 0xbe4eb2da, 0x3ec352d7, 0xbe92be4d, 0x3e1e33d3, 
    0x3e87d251, 0x3e339472, 0x3e7ef5d8, 0xbd703105, 0x3ed1cb8f, 0xbede81fa, 0xbeb83e0a, 0xbe4f4894, 
    0xbe82281b, 0xbe187b69, 0xbe6f2019, 0xbe85fbff, 0x3e85f249, 0x3dd7c430, 0xbdc40cbb, 0x3eaffc6c, 
    0xbe33da96, 0xbe8daee7, 0x3e311a4a, 0x3e81271b, 0x3e500d2c, 0x3d6d657c, 0xbeb578ce, 0xbeb87683, 
    0x3ea556fa, 0x3e4a8a3b, 0x3e198ee0, 0xbe887b02, 0x3e203f41, 0x3d20bd43, 0xbe0a2240, 0x3da39f47, 
    0xbe90b0ba, 0xbe252f00, 0x3c5b4dbd, 0x3db73f5b, 0xbe7ba5da, 0xbc8b6904, 0x3e706e8d, 0xbebf640b, 
    0xbe9a368f, 0xbe6184bb, 0x3bdc4088, 0xbd9de50f, 0x3e54e8af, 0xbd179611, 0xbe531f3e, 0x3df663c2, 
    0x3e2af6c1, 0xbe38ba48, 0xbe1c6ee4, 0x3e533969, 0xbe5cc334, 0xbe875b11, 0x3e4e5750, 0x3d07e30a, 
    0xbe21db68, 0x3d9fff77, 0xbe8ee788, 0xbea0179d, 0x3e94918c, 0xbed9e27a, 0xbefcddff, 0x3ea7c7c6, 
    0x3ebbf02c, 0x3e0ca477, 0x3ed8331e, 0x3e882cf8, 0x3d135615, 0xbea9f57f, 0x3ee9467e, 0x3d4d7bd5, 
    0x3e859a17, 0x3e81dbc2, 0x3eafbb37, 0x3d3497c8, 0xbe932ee1, 0x3e1fa119, 0xbf039bcc, 0xbd0bc63d, 
    0x3d888b1e, 0xbd2c9e0f, 0xbe7328e9, 0xbe069e31, 0x3eb4b773, 0x3ebb5fa4, 0x3e2a8816, 0xbe0cdeff, 
    0x3eb02e18, 0x3e5e1bd1, 0xbeb9d282, 0x3c0f731c, 0xbee2559f, 0x3e46bc63, 0x3e0c1547, 0x3ec3b75d, 
    0x3e317d23, 0xbec27f39, 0xbe4d16a4, 0xbe1f96cc, 0xbe5f663b, 0x3e40cd4c, 0x3ea6dffc, 0xbed3cdb7, 
    0x3edd1368, 0x3ebc7883, 0x3f02023b, 0x3c2219a1, 0xbea998e5, 0x3e8bff01, 0x3ef0453f, 0xbbd860fe, 
    0x3d2590e5, 0xbe05e0e1, 0xbd3f35a7, 0xbc646fc3, 0x3cecbdd7, 0xbedb97ea, 0x3e47249b, 0xbe679b75, 
    0x3e141d40, 0x3edccaac, 0x3bf2548b, 0x3dc806f2, 0xbe27f194, 0x3e5c5c5a, 0x3da785f3, 0xbe563cdf, 
    0x3cca7e71, 0x3dcb33ae, 0x3ef0cafe, 0xbd6c35f6, 0x3c1b4008, 0x3efa87bb, 0xbe6c8d62, 0x3eaea49c, 
    0xbbd64937, 0xbdc26b3b, 0x3ea12ddf, 0x3e66e8e7, 0x3d80540e, 0xbef109bf, 0x3e1ebe3e, 0xbe999097, 
    0x3e9ae8b5, 0xbeb484bc, 0xbdcef56a, 0x3d754c97, 0x3eb9c23d, 0x3ed31c19, 0x3e13938f, 0x3eb8755e, 
    0x3d8af18e, 0x3e0cfcb4, 0x3dc1f0fe, 0x3ead651f, 0xbe80bf06, 0x3e52983e, 0x3eaeac3e, 0x3e8b9ab1, 
    0xbf005074, 0x3e4befbd, 0x3e837f1c, 0x3d192fb3, 0x3e9db78c, 0xbdbc085a, 0x3cea1cc3, 0x3edcce01, 
    0xbe88a338, 0x3e47aee5, 0xbe9d57c5, 0xbef843b2, 0x3e072a70, 0xbe45b7f8, 0x3e9d191c, 0x3ed24910, 
    0xbe477a46, 0xbd21aa87, 0x3e033c02, 0xbe7e757b, 0xbd92f97f, 0x3dc9b26d, 0xbe7d8236, 0x3e6466eb, 
    0x3e7dad22, 0x3d55d617, 0xbafceada, 0xbea4c5ef, 0x3ecb8bfc, 0x3ec6619a, 0x3e4fb054, 0x3e422c4c, 
    0x3e9ac267, 0x3ed86dba, 0xbe6e43d6, 0x3e45a992, 0xbea6f4d7, 0x3ea6bf38, 0xbeea38e9, 0xbe5b2044
};

static const uint32_t _K37[] = {
    0x3f5e8bfe, 0x3eb6fc8f, 0x3f96c974, 0x3d2ac0c7, 0xbd09310c, 0x3dde4d99, 0x3f9dfb4f, 0x3e7aba6d, 
    0x3ec4c9e9, 0xbe9c69c2, 0x3f624f01, 0x3e5e0072, 0x3f73f70c, 0x3d46a7e4, 0xbf91f902, 0xbf289cd2
};

static const uint32_t _K43[] = {
    0xbd581af8, 0xbc06bb6c, 0x3d9111b0, 0xbdfe1576, 0xbe0cc68f, 0x3e1b57ef, 0xbe0b713a, 0x3d08df6d, 
    0xbe1237c2, 0x3e0b41dc, 0xbdae8a5e, 0x3e538c5b, 0xbdef82ca, 0xbc8f0389, 0x3e2b3e89, 0x39e91ecf, 
    0x3e14a794, 0xbda64d78, 0x3e07d26f, 0x3e1ad7c9, 0xbd049b47, 0xbbd0f538, 0x3d6623c2, 0xbcb457f7, 
    0x3d81a31c, 0x3dfd8cf5, 0xbd5a2582, 0xbcfbef02, 0x3e0d7d66, 0x3da2535c, 0x3e1ac27c, 0xbe092b66, 
    0x3d2151ec, 0xbd68e44f, 0x3c9e71af, 0xbdef75d4, 0xbccc5680, 0xbe5617d8, 0x3e7418a1, 0xbe08ac35, 
    0xbe0a3761, 0x3e4d4244, 0x3bf045ef, 0x3dbd8137, 0xbcc35bcf, 0xbe2eb777, 0xbe0d6945, 0x3e143092, 
    0xbd801e18, 0x3d837ace, 0x3da0e32a, 0xbe33cced, 0x3d569307, 0x3e09372d, 0x3e3ac9c3, 0x3d925686, 
    0xbe15c81a, 0x3e4fb981, 0xbca361d1, 0x3e170f97, 0x3d207386, 0x3db488ac, 0x3cafea2f, 0xbcd704cc, 
    0x3df5a553, 0x3e3293b3, 0xbda0488b, 0xbdbaf20f, 0xb9c34fee, 0x3deb152a, 0x3ddd7010, 0x3e0b0e10, 
    0xbddb10f2, 0x3bc70bae, 0xbe2a46f2, 0xbdcbd81d, 0x3e52fa54, 0xbdf41813, 0xbe20929e, 0xbe1a2dd1, 
    0x3e47d5e6, 0xbd55dc30, 0x3cbc1c8a, 0x3e08287c, 0x3e37185a, 0x3e4fe556, 0xbda1c4bd, 0xbe0d4a83, 
    0xbd0d412e, 0xbda81811, 0xbd841055, 0x3e3108dc, 0xbd910fc1, 0x3ce9bd51, 0x3e00ef98, 0x3afb6302, 
    0x3de91b4f, 0xbe38b514, 0x3e310f30, 0xbcd01ab6, 0x3e40181e, 0xbe506185, 0x3d6c0975, 0xbe029f9c, 
    0xbe0ff525, 0x3d6c315a, 0x3d6ceff1, 0x3e023915, 0xbe67d9c7, 0x3e15b48f, 0x3da959d7, 0x3da3e708, 
    0x3cb277cd, 0x3e1564c9, 0xbdd45c8a, 0x3de9c12e, 0x3e5b6467, 0xbdf6635a, 0xbe05a9f9, 0xbda3aac2, 
    0x3e799391, 0x3dc3f88a, 0xbd9e1e8d, 0x3e489b25, 0xbdefaba7, 0x3dc8184c, 0x3ddb70ad, 0xbe1fa246, 
    0x3d6f307f, 0x3dbbec9b, 0xba6835a5, 0x3e3f262f, 0x3b922f30, 0xbe0204fd, 0xbdfd2889, 0x3e577b44, 
    0x3e156d9c, 0x3c5b03f4, 0xbdedc0ad, 0xbe37749d, 0x3e521678, 0xbe18dfba, 0xbde34d08, 0x3e090374, 
    0x3e345723, 0xbccd725f, 0x3e2bdaf2, 0xbd356f93, 0x3d5d91a0, 0x3e6347e9, 0x3c61f7d7, 0x3bd861fa, 
    0x3d81d919, 0xbc6b0c0c, 0x3e435109, 0xbe076143, 0x3e50ff89, 0x3e0912c3, 0x3dd17240, 0xbde449a9, 
    0xbd96f77f, 0xbd7aea07, 0xbd967839, 0xbd362ddc, 0xbdc80742, 0xbdf55e79, 0xbdfca8bd, 0xbdc50c52, 
    0x3ddb2091, 0x3dcd8146, 0x3dc5a7da, 0xbd6e065f, 0x3da7628b, 0x3d285dde, 0xbd5d6ff0, 0x3c15d4ba, 
    0xbdf1e506, 0x3dee5fba, 0xbdf81d78, 0x3e2b3db5, 0x3d217fb1, 0x3c907da3, 0x3da9a69c, 0xbd0b48c3, 
    0xbe33b48f, 0xbd360763, 0x3dea249b, 0xbdf1266f, 0xbbe152dc, 0x3cff78ee, 0xbddd357f, 0xbbdff2b0, 
    0xbc8fae7c, 0x3e3ae43a, 0xbdf5da7c, 0xbdf3d06c, 0x3d381101, 0xbc8641a5, 0x3e424ae2, 0xbdd915a0, 
    0x3dd74db8, 0x3e13b88a, 0xbd5ffa7b, 0x3e586cac, 0xbd9d5eb0, 0xbc9572bf, 0x3d978d0a, 0xbe4f7eff, 
    0x3de7dc51, 0x3e2ad432, 0xbe379f4c, 0xbd3a886c, 0x3d9ca709, 0xbd3a8945, 0xbdfe70bf, 0xbded1165, 
    0xbe159496, 0x3d28cdd0, 0xbe20ba60, 0x3da377e6, 0x3e13aef6, 0xbdffaf32, 0xbde1926d, 0x3cf9d71a, 
    0xbe4cc287, 0xbb8a46c8, 0x3da5c58d, 0x3d8e138d, 0xbdfda5a3, 0xbd01a3f6, 0x3dc3fc25, 0x3e1f8afc, 
    0x3db10d4a, 0x3e0f3f42, 0xbd05e6c5, 0x3dc1ec33, 0x3d3349cc, 0xbe3337dd, 0xbe1cd51d, 0xbe66d1d8, 
    0x3dd44446, 0xbe01d522, 0xbd41a9dc, 0xbd30e649, 0xbcf64ef1, 0xbe3de0f8, 0xbda990a2, 0x3de3e099, 
    0xbe58a9ed, 0x3e524fd8, 0xbd3ea6e4, 0x3c150204, 0xbd568961, 0x3e3e0f21, 0xbe44a386, 0xbd627ce7, 
    0x3e11109f, 0x3e0a51cc, 0x3e1b6fa9, 0xbdf8c844, 0xbd855e97, 0x3cc8b941, 0x3e0a8265, 0x3e49bc75, 
    0xbe2a1904, 0xbe056f2d, 0xbd6cb4eb, 0xbd9f1ac2, 0xbe3da8ca, 0x3c7dcd73, 0x3e2559e5, 0xbe3a9ba7, 
    0xbe00e237, 0xbe1af17e, 0x3e36ff11, 0x3e21322f, 0xbe548528, 0x3e4b98b4, 0xbd9e56fb, 0xbcfe17b4, 
    0x3d8b1cb5, 0xbdd0aef9, 0xbccb5dc6, 0x3d45a01b, 0x3dc2230b, 0x3e18da79, 0xbc8c2917, 0x3de9e682, 
    0x3e0fca5a, 0x3e367c33, 0xbe1f6a02, 0xbd069e26, 0x3de3e8d3, 0x3caa3fb6, 0xbe33244a, 0xbe287230, 
    0x3d884b9c, 0xbce54c4d, 0x3e66b48f, 0xbe006b63, 0x3e1aded9, 0xbe4027ec, 0x3e3004ae, 0x3df8e3cf, 
    0xbdae9158, 0x3d135551, 0xbde802a5, 0x3d9b46fb, 0x3e0345aa, 0x3d160cdb, 0xbd6a8c08, 0xbd1b1fe4, 
    0xbd20d4f8, 0xbe296c9c, 0xbdd280e6, 0x3d958df6, 0x3dfc8b5c, 0xbd704af3, 0xbdf37739, 0x3db826be, 
    0x3e39de6a, 0x3e03090f, 0x3d0f0cb5, 0x3dac368d, 0x3dd6ece4, 0x3c637519, 0xbd1053d6, 0xbd76aae1, 
    0x3cfcf2cb, 0x3e1a4eb8, 0xbd3b3703, 0xbe0d9f5d, 0xbd208aed, 0x3d97caf0, 0x3c436330, 0xbe1c30ca, 
    0xbe298d04, 0xbdbdd29d, 0xbdee7f7a, 0xbd9bd98a, 0xbe256d17, 0x3daadb8b, 0x3e1fa3e9, 0x3e0c4b1e, 
    0x3dca6b60, 0xbd940f74, 0xbe4278cc, 0xbd8fe835, 0xbe253e48, 0xbd2ea07d, 0xbd3cf095, 0xbd19e19b, 
    0x3d83f4e8, 0x3dd354da, 0xbdb2bb58, 0xbe420ca3, 0xbe2fd957, 0xbdec465d, 0x3daad7d6, 0x3dc49ea5, 
    0xbe20e4ac, 0xbe46735b, 0xbd820eca, 0xbe0feb66, 0x3c64f8b1, 0xbe17f4ee, 0x3db5b32c, 0xbe0481bc, 
    0xbe373466, 0x3e04c49b, 0x3db49387, 0x3e3e2538, 0xbe20f3c8, 0xbe478762, 0x3e5c79fb, 0xbde27214, 
    0x3db7c35b, 0xbe10cf3e, 0xbe3a1277, 0xbb80cfbc, 0xbdd78e99, 0x3e12f219, 0x3e639f97, 0xbcb5da2b, 
    0x3da8081a, 0xbdede264, 0xbde8dfb9, 0x3d643bb4, 0x3d9b2a5c, 0xbe4f20c5, 0xbc200cda, 0xbc857526, 
    0xbd806bf0, 0x3d820932, 0x3de958ec, 0x3b00662c, 0x3b1ad184, 0x3cbf8f7f, 0x3c1e8e8c, 0x3e4904db, 
    0xbe0a3965, 0xbd77aa0a, 0xbe47ab4d, 0x3e1245f2, 0x3bb62bb1, 0xbe375c0f, 0x3e03113f, 0x3dfb428d, 
    0x3d434f4a, 0x3d7b29ff, 0x3dbf5ebf, 0x3e445e01, 0x3daefce0, 0xbdf94cec, 0xbdd0762d, 0xbc2797a5, 
    0xbd423681, 0x3e0fb8b2, 0x3db35bfb, 0xbd59fa51, 0xbdf2acc5, 0xbdc95522, 0xbdd33a1e, 0xbd88257f, 
    0x3e3989f0, 0xbd38c536, 0x3c8bc068, 0xbdc3101c, 0xbd4a3c94, 0xbe2dab0c, 0xbc99af82, 0x3e4fd0f6, 
    0x3dc1f9b1, 0xbd4cc9b6, 0xbd1a9de8, 0x3e08c63c, 0xbda57f5c, 0x3e1e9fc0, 0x3c8fdd00, 0xbe0c318a, 
    0xbe281411, 0x3da8aa29, 0xbe5a0b32, 0x3daf91dd, 0x3e109d69, 0x3d975708, 0x3adb8712, 0x3e5e7865, 
    0x3df27efc, 0xbd7f1506, 0xbdf14e2e, 0x3c1dec37, 0x3e0342c6, 0x3db9a1be, 0xbd9ccacb, 0xbe053ae7, 
    0xbe285408, 0xbd99b627, 0xbe57d7f3, 0x3d79d9b2, 0x3e43d8d1, 0x3dd923dd, 0x3d74dc4c, 0x3e6c04f4, 
    0x3e066471, 0xbd5527f4, 0x3db35c79, 0x3e047887, 0xbe365139, 0xbcac7a79, 0xbdca7676, 0xbe9a0d20, 
    0x3cb5b25a, 0x3e087d91, 0xbb607dcf, 0xbdd3cbc6, 0xbe94f780, 0xbda8277d, 0x3e20409d, 0xbe2c453a, 
    0xbbcec2be, 0xbe18a6b3, 0xbe61ec37, 0x3be3dea6, 0xbc91b480, 0x3df6e9c8, 0xbdf483a5, 0x3d272ac4, 
    0xbd90ea3a, 0x3daa4c05, 0x3e127eae, 0x3dfc0a93, 0xbaf88468, 0xbe1bb283, 0xbdbfbcd2, 0xbc8d0262, 
    0xbe3bde72, 0x3d9cbb55, 0xbe4a50c6, 0xbc87f0de, 0xbdd690d7, 0xbdaeb448, 0xbe32a1e0, 0xbd3e4900, 
    0xbe54efcd, 0x3e4d1774, 0xbe6cdbf9, 0xbe52f17e, 0xbe0856cb, 0xbd5790cd, 0xbd9b1262, 0x3ca06857, 
    0xbe47e108, 0x3c9718a8, 0xbe55511a, 0x3c5ed9e7, 0xbe1afa03, 0xbe3654fa, 0x3daf23c0, 0x3d7c72e5, 
    0x3e3fcc57, 0x3e2c2216, 0xbe3cb8ae, 0xbe08e1a0, 0xbdd8d049, 0x3c0cac93, 0xbd151e1e, 0xbced599d, 
    0xbe07b975, 0xbe35894c, 0xbdf5258b, 0x3e519c27, 0x3cde5b46, 0xbe365730, 0xbe5ff7ad, 0x3e20fe32, 
    0x3db911f7, 0x3dc8db2a, 0x3dd7eb53, 0xbe278317, 0xbdfbb9f5, 0xbde436df, 0x3dadae37, 0xbe21a2dc, 
    0x3d3c0127, 0xbdb68c6d, 0x3d273045, 0x3cc7d174, 0xbd82701c, 0xbd81ab62, 0xbd43ca09, 0x3d987d6e, 
    0x3b6acba5, 0xbdb57f5b, 0x3da1cd14, 0xbdb3c8b4, 0xbc9a144e, 0xbdd59e37, 0x3e1beb38, 0x3cf7e969, 
    0x3e2fea7d, 0xbe1329ff, 0xbd959a86, 0x3dd4294b, 0xbce7d9a4, 0xbdcfefa0, 0x3e03c754, 0x3c5f7164, 
    0x3da311b8, 0xbd54cb37, 0x3a9c4c12, 0x3e755c0b, 0x3e134f7e, 0xbdccc273, 0x3e629210, 0x3de3d75f, 
    0x3d584ffe, 0x3e254977, 0x3e42a94f, 0x3d6e9311, 0xbdccff37, 0xbde0563b, 0x3e33a530, 0xbdcf7036, 
    0x3e511d19, 0x3dc957bd, 0x3e066dc1, 0x3c41ef10, 0x3c73a3c9, 0xbd533f31, 0xbd0d65cd, 0xbde0bf96, 
    0x3e26e50a, 0xbd9da831, 0xbd9213ad, 0xbcf376ae, 0x3cc315c6, 0xbdb791f3, 0x3e05063c, 0x3dc25202, 
    0xbd4956ae, 0x3e31bf89, 0x3dbf7cac, 0x3e1d9c75, 0xbd637301, 0xbd8b3eff, 0x3e3390a0, 0xbe49283b, 
    0x3dd4376d, 0x3e17802f, 0xbdb488b9, 0x3e0652cb, 0x3e21fac2, 0x3d286b1f, 0x3e792ec4, 0xbe5221fc, 
    0x3e3f1d0b, 0x3c4f071d, 0xbe00f6cb, 0x3e3497ab, 0xbe4c5e86, 0xbdbed0d3, 0xbd1fc681, 0x3cbddfa7, 
    0xbe1cb749, 0xbda50009, 0xbbc4106b, 0xbdbfe1f5, 0xbe207b74, 0x3e35bdeb, 0xbdf08907, 0xbdbdddcc, 
    0x3cb2d3a6, 0xbdec7346, 0xbc8ed88e, 0xbe1261fd, 0x3d366018, 0xbe11e2e3, 0x3defd7a3, 0xbd0ed069, 
    0x3e2e51c7, 0x3cb2f09b, 0x3e2675b3, 0x3e103cd0, 0xbd9bbf52, 0x3e3174e1, 0xbe364b4f, 0x3e13b99c, 
    0xbd86c656, 0x3dd3fd9c, 0xbe63f779, 0xbe0a1985, 0xbd6812de, 0xbe212199, 0xbe39814d, 0xbcdb8279, 
    0xbd31606a, 0x3de40683, 0xbe118f8b, 0xbe134866, 0x3d1b18e6, 0xbcf6c399, 0xbd009cf2, 0xbddd9035, 
    0xbe41815d, 0x3d957489, 0xbcad70ec, 0xbab342c3, 0xbdf6f040, 0x3e0c76eb, 0xbde73810, 0xbd28c8b6, 
    0x3da802d6, 0x3da3b757, 0xbdfc44ad, 0x3e49dd42, 0xbe0538c6, 0x3e4cd809, 0x3d8cf435, 0x3ceae56d, 
    0x3c51695e, 0xbb260904, 0x3db98dae, 0x3cece756, 0x3e011a8a, 0xbdf08fc7, 0xbe487d51, 0xbe15d089, 
    0xbdf04b4e, 0x3e1be84d, 0xbdb6be70, 0x3d9d91a3, 0xbe42b9d5, 0x3d94ebaf, 0xbe48e482, 0x3e02f6b4, 
    0x3ccbfccb, 0xbe2d9902, 0xbdfa8071, 0x3d28d311, 0x3d1a078d, 0x3e07678e, 0x3d8f4d31, 0xbe15b99b, 
    0x3ddc9005, 0xbce99b98, 0xbd195414, 0x3db48711, 0x3e137791, 0x3dd5971a, 0xbd409a71, 0xbdb1a123, 
    0xbd24700b, 0x3e3f08da, 0x3e16cc41, 0x3c9758d7, 0xbcee2d9e, 0xbd559457, 0xbe0dfb50, 0xbdfe0932, 
    0x3d33ba64, 0x3d87a35f, 0x3bf7eb23, 0xbb7b26df, 0xbdb93e5d, 0xbd192ce1, 0x3d1e3c66, 0xbc1fec7a, 
    0x3e2df01a, 0x3e0ac53e, 0x3e534a63, 0x3c996672, 0x3debea72, 0xbd97e29d, 0x3e04fcc8, 0x3e0dffe6, 
    0x3e425f17, 0x3e6eaf5b, 0x3e0c4238, 0x3e2565ba, 0x3dae6124, 0xbdefb6f1, 0x3d2f61b7, 0xbd923fd1, 
    0xbe26dbe9, 0x3d55e970, 0x3e46f756, 0xbd256853, 0xbe096dc9, 0xbb262114, 0xbe1ac1fd, 0xbd3fb1b8, 
    0x3c986897, 0xbd0d0df2, 0x3da13209, 0x3c7e1878, 0xbde60124, 0x3e3295e4, 0xbdb9c924, 0xbb6322a1, 
    0xbb751dc8, 0xbe2903fd, 0xbde2f410, 0x3d42057e, 0xbe1ca27a, 0x3e5f008d, 0xbdbdf1d5, 0xbd1e0a1c, 
    0x3e300c3b, 0x3d9e0f5c, 0x3d849dae, 0x3d877bde, 0x3cbef5e0, 0x3d8996cb, 0x3d6565f6, 0x3d914f1b, 
    0xbd99e2ad, 0x3d1ed5ac, 0xbd61fc28, 0x3e415e16, 0x3e4f0054, 0x3be5025d, 0xbdcb7946, 0xbe4ab673, 
    0xbde1d2ce, 0xbe0e0e76, 0x3d0e5006, 0x3d868e48, 0xbde92d00, 0xbe19e28f, 0xbe39e17d, 0xbe0487a9, 
    0x3cc2a903, 0xbdc2ae47, 0xbc070712, 0xbd9f2804, 0x3d9cd506, 0xbe41ae6d, 0xbdfd156b, 0xbe621060, 
    0x3b399700, 0xbdc247fd, 0x3d334aa4, 0x3db34a88, 0x3e08682a, 0x3d95ee15, 0xbe53f974, 0xbd682121, 
    0xbdff3b9e, 0xbe46d244, 0xbc87b862, 0x3cd6fec6, 0xbd72ba20, 0xbdd0ffd1, 0xbda24c00, 0x3e08ae62, 
    0x3e312c2f, 0x3d781422, 0xbe62a77d, 0x3e1522b7, 0x3d21e305, 0xbe5042e3, 0xbe3d0802, 0xbe0b7ba1, 
    0x3db03744, 0xbc92700a, 0x3df67aa6, 0x3e2ea293, 0x3e4a3f39, 0xbd104af0, 0x3e26ac5d, 0xbd3b604e, 
    0xbe0718c5, 0xbdc0c64c, 0x3e008e31, 0x3d36fba6, 0xbdbb3a9b, 0xbd3438d6, 0x3d8e6019, 0xba07c83d, 
    0xbd3b0e93, 0x3db0f29c, 0x3c29d044, 0x3d91aeaa, 0xbd9eaa7a, 0xbd0b974c, 0xbdd16864, 0x3daaa977, 
    0xbd419e2c, 0x3d008ef3, 0xbe0c5619, 0x3e39ee0d, 0xbc087c79, 0xbd5ad75d, 0x3d9553c7, 0xbe2051a1, 
    0xbe23a34e, 0xbe284876, 0xbe2107d9, 0xbc49db33, 0x3e06138a, 0x3dd9d20b, 0xbde91563, 0x3de28455, 
    0x3d5d5f5b, 0xbd42e06b, 0x3e64ee79, 0x3c334fc6, 0x3c9e2eb6, 0xbe32d7b9, 0xbd6499c7, 0xbdd0f499, 
    0x3d8a3acc, 0x3bbd170a, 0x3e2cda3d, 0x3e30234b, 0xbcc3e33e, 0x3df34162, 0xbdfe53bf, 0x3b4690e7, 
    0x3e3c7efc, 0x3db6bd13, 0x3e2dfa1d, 0xbd86ebf4, 0xbcc24ab8, 0xbe11bebb, 0x3e3cfb16, 0xbcc4ea9c, 
    0xbca60acd, 0x3bac530d, 0x3e223a79, 0x3e386168, 0xbe19aa21, 0x3c000c83, 0x3e029117, 0xbc5e061e, 
    0xbe0f7755, 0xbd8c086a, 0xbdce0945, 0xbe540b94, 0x3e2e394c, 0x3e0f6a93, 0xbd9fd710, 0x3c5b04ad, 
    0xbd09a09e, 0xbdfa2ce4, 0xbc9e9078, 0xbca71887, 0x3e310b22, 0x3e0d1e43, 0x3de608c2, 0x3e02a053, 
    0xbe1fe535, 0x3e64f3a6, 0x3c78e740, 0xbe27e97a, 0xbd322a59, 0x3d029138, 0xbe02a3be, 0x3dd1cb0d, 
    0xbd2c238a, 0x3dddf4fc, 0xbe43177c, 0x3dfe78e1, 0x3d05e7b8, 0xbd998286, 0x3d041521, 0x3d3e7fc6, 
    0xbdd559ca, 0xbe06a72a, 0xbe123039, 0x3d736145, 0x397a68f8, 0x3e02d8ec, 0xbe47d0a4, 0xbe3aa9e1, 
    0x3e64c12a, 0x3dadfab3, 0xbdfd69d6, 0xbddaef3d, 0x3e154aff, 0xbdce7c2e, 0x3db5e848, 0xbd96b799, 
    0x3e04c101, 0x3e3f24da, 0x3d926250, 0x3e147617, 0xbcec8910, 0xbd109270, 0xbe33cbc6, 0xbe3b2573, 
    0x3d95d9a0, 0xbbaee5a7, 0x3dfa6721, 0xbe10859b, 0xbcf3b3db, 0xbdbdd83a, 0xbdee4061, 0xbc66d54f, 
    0x3d2d363a, 0x3e0276eb, 0xbe0b705d, 0x3e1ddfe4, 0x3d42b041, 0xbe5b1d9d, 0xbdef5c2f, 0xbd9efe3b, 
    0x3e4fcc03, 0xbd105190, 0xbd0bab70, 0x3e5448c8, 0xbd22112d, 0x3e08ffff, 0x3e13b262, 0x3e05401f, 
    0xbd13c280, 0xbdacacb9, 0x3cde399b, 0x3dd90d97, 0xbc82562d, 0xbd2661c4, 0x3c357fe8, 0x3dff8efb, 
    0x3e150046, 0xbe2f943e, 0x3ddd39d7, 0x3e0f07e2, 0x3e3ac377, 0xbddce253, 0xbe1a8aa1, 0x3cd2e3d2, 
    0x3d0312f6, 0xbc90faaf, 0xbe2859ec, 0x3da6700d, 0xbe29aff3, 0xbd6601f1, 0xbe3624be, 0xbe42c992, 
    0x3dc12674, 0xbd077eef, 0x3d89f717, 0x3dc41211, 0x3d06db7e, 0x3e26b572, 0xbdc737e8, 0xbe0d7f21, 
    0x3e3382e9, 0xbe0ed463, 0x3e285179, 0x3d2096b8, 0xbe2657e1, 0xbe13bc36, 0xbddadcba, 0x3d8822c5, 
    0xbe05b706, 0xbd9d3558, 0xbe417563, 0x3c128a0e, 0xbd3ed0e3, 0xbe40429e, 0xbdc705a8, 0x3c8bde44, 
    0x3e5aa1bb, 0xbdaa236e, 0xbdf4d034, 0x3d41fb99, 0xbe1062e3, 0xbe0570fd, 0xbdb6b62a, 0x3e1c27f9, 
    0xbd8530a3, 0xbd3fce80, 0xbdaa8fcd, 0x3d9af6b1, 0xbe4f4047, 0xbd248e85, 0xbe5a31ae, 0x3e008823, 
    0x3e193e08, 0x3dbac00c, 0x3d3718e4, 0x3c4fde22, 0x3cc87550, 0xbdef7f9a, 0x3e2f048d, 0x3e31e773, 
    0x3c8450fb, 0xbbaead54, 0x3e34ebef, 0xbda58795, 0x3d4fd54a, 0xbcc31f18, 0x3e0ee5f2, 0xbdfb627e, 
    0x3dc94644, 0x3c1313ed, 0xbe3a5723, 0x3e1d788f, 0xbdb6e32a, 0x3dc98b1e, 0xbd38374d, 0xbd3f7ceb, 
    0xbd3328f5, 0xbdac9784, 0xbd8beda4, 0x3c289e69, 0x3daf0a7b, 0x3e13f980, 0xbda081b6, 0x3cfc74a2, 
    0xbe0ad7d3, 0x3d43704f, 0xbbb03d85, 0xbd3d0daf, 0xbe2b11e4, 0xbdf11dcc, 0x3d027b47, 0xbbb1f6d2, 
    0xbd38cb4f, 0xbe39af45, 0x3e487f0f, 0xbd71375e, 0xbe4646c3, 0x3e41ee88, 0xbc7a6a0f, 0x3e0caab7, 
    0x3e3e8663, 0x3d4b0ccf, 0xbcd585d7, 0xbd4a1a11, 0xbe4240a7, 0xbe29d10c, 0xbe1c430e, 0xbda369ad, 
    0x3e3822d8, 0xbdf04eca, 0xbe0673f1, 0xbc98ba38, 0x3d565863, 0xbd440b97, 0x3dfdcbe7, 0xbdc9828e, 
    0xbd588da8, 0x3ca39667, 0x3d02755e, 0xbd15f295, 0xbe02594b, 0xbe444536, 0x3dd3f02b, 0x3e177f93, 
    0x3b80482a, 0x3dfe592c, 0xbe5e4bb0, 0x3c7a74f3, 0xbe8666fa, 0x3c63f671, 0x3d84800f, 0xbd039f1f, 
    0x3ddc4a45, 0x3e15cee3, 0x3de8c052, 0x3a4779b6, 0xbdab9364, 0x3dfe715b, 0x3d6780fb, 0x3d698c11, 
    0xbbbe0eb0, 0x3e2c3461, 0x3d61b7cd, 0x3d96c451, 0xbdcdde01, 0xbe2b6d13, 0xbbbda62a, 0xbd5f198d, 
    0x3d22265c, 0xbdc476cf, 0x3e075e0a, 0x3d021fdc, 0x3db4fdd4, 0x3e51ae10, 0xbd3d2dc3, 0x3dab2501, 
    0xbbcbceae, 0xbd166ef7, 0x3ddb6cd3, 0x3dc4067c, 0x3dbcbcea, 0x3d328c5e, 0x3d8661cd, 0xbe048e33, 
    0xbd5ca5a6, 0xbe483ba3, 0x3e2aa62b, 0xbd72cb78, 0x3e4651ec, 0xbdbb307c, 0x3d4919e0, 0x3dbad36b, 
    0xbdfabfb3, 0x3c828997, 0xbd33014d, 0xbe230950, 0x3ccb0ef0, 0xbcad1104, 0x3e1a3307, 0x3e317819, 
    0xbe59ec48, 0xbe156519, 0xbe2a4a22, 0x3e320e6c, 0xbe06bacf, 0x3e029efc, 0xbe63ac06, 0xbd726dbd, 
    0x3e10ec93, 0xbdf29288, 0x3d5cd1c0, 0xbdc663b3, 0xbe24c748, 0xbdc48006, 0x3dca99bf, 0x3db4afb2, 
    0xbe43da58, 0x3e232ba8, 0x3e1cb56f, 0xbe082c1a, 0x3dcf55b4, 0xbe3cbbd5, 0x3e2bcb04, 0x3dd6cff8, 
    0xbdcccb9e, 0x3cb9247d, 0xbd3613e5, 0xbe1a7c17, 0x3d283216, 0xbd7462ae, 0x3e1e526d, 0x3dc6d123, 
    0xbaebad69, 0x3dbe614d, 0xbd77c5bf, 0xbcecce70, 0xbd74c835, 0xbca30f05, 0xbd186508, 0x3de18cd1, 
    0xbe28a0b0, 0x3e39d297, 0xbe5e3c2d, 0xbc986ba0, 0x3e52e068, 0xbd43da5e, 0x3c60ea55, 0xbe46321c, 
    0xbb62c344, 0x3dbf7457, 0xbdf927c9, 0xbe076f90, 0x3c75bb09, 0xbda9d99d, 0xbcabe651, 0x3c659245, 
    0x3db740a3, 0x3c220914, 0x3dfb79bc, 0x3de35ef6, 0x3e700c4d, 0x3dcc4f2e, 0xbe29ab7e, 0x3e333fab, 
    0x3dc963b8, 0x3b531c2f, 0xbdbbd575, 0x3cdca0f4, 0xbe322903, 0xbd7665be, 0x3de2d2e6, 0x3e2e132b, 
    0x3e004a81, 0x3d58628c, 0x3dddd621, 0x3e3b5992, 0xbdb18041, 0xbdd8602d, 0x3e36ef5e, 0xbe3835f0, 
    0x3e47150d, 0xbd5b411d, 0xbab09205, 0x3e271601, 0x3d4cb51f, 0xbd84c151, 0xbe359f60, 0xbe1cf08e, 
    0xbd29614a, 0x3dedb87b, 0x3e07497f, 0x3d8623ff, 0x3e3c6f63, 0x3df0ec2c, 0x3e0d5d42, 0x3e05295d, 
    0x3dc55b97, 0xbc5a026d, 0x3c8a872e, 0xbc9f4b0f, 0xbd931b02, 0xbe259124, 0x3bce74d8, 0xbe0e3583, 
    0xbc8c1985, 0x3d849f96, 0xbe2b7078, 0x3df97799, 0x3c5ca359, 0xbdaac680, 0xbe0c9369, 0xbe58d57f, 
    0x3de5ef12, 0xbe3416d9, 0xbe2b7744, 0xbe42e620, 0xbe00e922, 0xbcea7c90, 0xbe502ad3, 0x3e10474f, 
    0xbdc6d3ac, 0x3cd840b3, 0xbd61a045, 0x3ca90963, 0x3e8049c8, 0xbe0a9934, 0xbcf8c7fe, 0x3e739823, 
    0xbc98b272, 0xbc001ba6, 0xbdb346ad, 0xbcdc30bb, 0x3e2c4af2, 0x3e4636c8, 0xbab3cef1, 0xbe137e79, 
    0xbe1d8646, 0xbc911d6a, 0x3b9bb59f, 0xbe01e489, 0x3cb411b5, 0x3dc88c23, 0xbe14e268, 0xbe1f958d, 
    0x3d5768b4, 0xbce99064, 0x3e3fd4ba, 0xbda729e4, 0x3d0b8755, 0xbd0621ed, 0x3d819a29, 0x3bb045e1, 
    0x3dd1a714, 0xbe312039, 0xbd9c7126, 0xbdbbc15c, 0xbdd9be18, 0x3caf1544, 0xbe30703a, 0xbe446cdb, 
    0xbe0f5526, 0x3e4c20a0, 0x3e38d15a, 0xbe2497cf, 0xbdb913ef, 0xbd79367a, 0xbdc699e9, 0xbd6dc51c, 
    0xbe04a597, 0x3e193fd3, 0xbc592235, 0x3e1ca7d1, 0xbe2d1fad, 0x3d350a1b, 0x3d13911b, 0xbdad64e6, 
    0xbb0997dc, 0x3d2fd9a0, 0xbe0dc563, 0xbe51d97c, 0xbe0b1140, 0x3e05dc6f, 0xbd921ec2, 0xbe0d9f28, 
    0x3e52b2da, 0xbc94137c, 0x3e2cf4f6, 0xbe1910cd, 0xbd88f307, 0x3e05c475, 0xbdc3e5f7, 0xbd275d31, 
    0xbddf25b7, 0x3e153bed, 0x3d707189, 0xbe29ff84, 0x3de22f85, 0xbd8cd0d3, 0x3d9c44bd, 0xbdc0963d, 
    0x3e0f0647, 0x3e4d68ea, 0x3da71cae, 0xbb6966ed, 0x3cbafbb0, 0xbdf867f9, 0xbe28dde6, 0x3db23c5c, 
    0xbdb55d75, 0x3e3791ee, 0x3de67758, 0xbde875e5, 0xbe274d8a, 0x3d114366, 0x3cc37d5d, 0xbddd0bc4, 
    0x3e2c9512, 0xbda2625e, 0x3cbeea25, 0xbdaca240, 0xbd06fb34, 0xbd387c75, 0x3e661fbd, 0x3d55bccc, 
    0xbd6bb540, 0xbdf68155, 0xb9db1ba2, 0xbdba7c8a, 0xbd9cd5f0, 0x3e10e5cb, 0xbe6b3472, 0xbd0c9438, 
    0xbdaaa1e8, 0x3d3420a4, 0x3cb3d002, 0x3e133f56, 0x3dc6271f, 0x3b9316f9, 0xbc576f53, 0x3e3a02af, 
    0x3e4a6adc, 0x3e1528d7, 0xbdebdfed, 0x3e555bc8, 0xbe049994, 0xbd751d34, 0x3d388b9f, 0xbd8f225e, 
    0x3e10fef0, 0xbe3f5e23, 0xbdeea06c, 0xbde219b5, 0x3e37581b, 0x3da0caa1, 0x3e349ec8, 0xbd815993, 
    0xbdebd7ee, 0x3e1e45d7, 0xbd9ac764, 0x3e0a31db, 0xbe4ef1f8, 0xbd5280cc, 0xbe0f0ec2, 0xbe127c69, 
    0xbe2a05c6, 0xbe1064c0, 0x3d34e100, 0x3e02c2c9, 0x3dd8f28a, 0x3e183502, 0x3d87426c, 0xbcf92bc7, 
    0xbdd33b2b, 0xbdc06a1a, 0xbe1c0c4b, 0x3da090f9, 0x3c77fc82, 0xbd9f835f, 0x3e3b9579, 0xbd686e18, 
    0xbe336ed7, 0xbcdc4860, 0x3e276330, 0x3dda718a, 0xbe4d67fd, 0x3e09d61f, 0xbd76cb27, 0x3dd86f33, 
    0x3de77959, 0x3cef0714, 0x3e5771b3, 0xbe270e6b, 0x3df58126, 0x3db44ab5, 0xbdb537f2, 0xbcdfecb5, 
    0xbdb23d03, 0x3d28f7b3, 0x3dc2ab38, 0xbe1ec656, 0x3d678a0b, 0x3d065d52, 0x3d80b69d, 0x3c64bd03, 
    0xbd3b2c6d, 0x3df30750, 0x3e2fea50, 0x3d08ea40, 0xbd27da38, 0x3e20303e, 0x3d75a628, 0xbe04d556, 
    0xbd9fb9e9, 0x3d4a7734, 0xbe2082f0, 0xbd169994, 0xbdfadaf9, 0xbde92cbc, 0x3dd05cbe, 0x3ddf3833, 
    0x3d98f4f2, 0xbdeec28f, 0x3defc8d1, 0x3c95a133, 0xbd7d5c78, 0x3db2111d, 0xbe156f94, 0x3d68749e, 
    0x3d6b3ddd, 0x3e16a094, 0xbe4b1cdc, 0xbe220b97, 0xbde5007d, 0x3d2018f8, 0xbdb2ad42, 0xbddb6bb3, 
    0x3dfe6df2, 0x3e458795, 0xbda93b32, 0x3e0ba123, 0xbdcc6092, 0x3e37d8dd, 0x3e518b94, 0xbd596bd4, 
    0xbe282f00, 0x3d09abcc, 0xbd8f0d84, 0x3d3a9a9e, 0xbe47e671, 0x3e34dfdc, 0x3cff2bdc, 0x3e3dd515, 
    0xbdf1905a, 0xbe393d49, 0xbda0de20, 0x3cc77622, 0xbd4604d5, 0x3e3717d6, 0xbd34d181, 0xbe09a117, 
    0xbd073d37, 0xbda4c980, 0xbd1d0747, 0xbe057faa, 0xbde28cb7, 0x3df32327, 0x3e1edf9e, 0x3dcd03a1
};

static const uint32_t _K45[] = {
    0xbe6559cd, 0xbca5ceb6, 0xbde86f60, 0xbea40405, 0x3e3a3395, 0xbe8fbc24, 0xbc76fadb, 0xbd9d23d2, 
    0xbe1e3e3e, 0xbe88e1c9, 0xbe2cef33, 0xbe97f0e6, 0xbe142299, 0xbe61859e, 0x3d102da9, 0x3ea67d7a, 
    0xbeaadce3, 0xbd92e5ee, 0x3e69e995, 0xbdaeceb2, 0xbe2e12ab, 0xbeaa6a36, 0x3ea91acd, 0x3d08d003, 
    0xbe3dd736, 0xbdee0455, 0xbd3c0ce9, 0xbd956186, 0xbe3cc4a8, 0x3cff699b, 0x3e7b3580, 0xbe82c121, 
    0xbe8636b5, 0xbca73bd9, 0x3e06b97e, 0x3e09ba42, 0x3de41d9f, 0x3e10ac12, 0xbe8f669e, 0x3e5397d9, 
    0x3e3105f6, 0x3e37995e, 0x3e8c3869, 0xbd9d6e6b, 0xbe96704f, 0x3e6c1436, 0x3d84ce41, 0x3e3caa22, 
    0xbdf3f398, 0x3e3202fb, 0x3e3e6a73, 0x3e3a31aa, 0x3e9b67dd, 0xbe9e39c5, 0xbeaf50c8, 0xbe883997, 
    0xbe80ff1b, 0xbe9d55f4, 0xbd1192eb, 0x3e00fa26, 0x3eb8fe23, 0xbe1b1b12, 0xbe14737d, 0x3e7c6ad1, 
    0x3d98b41c, 0x3e276701, 0x3d31a641, 0xbe95d11e, 0x3e0dd607, 0x3e7b323d, 0xbe58b170, 0x3ea3a351, 
    0x3e59a28b, 0xbe58daf7, 0xbe5b6f0a, 0x3d904e4b, 0x3e81a0a0, 0xbe45202b, 0xbd896cff, 0x3d13a00e, 
    0x3dca93c9, 0xbe7fe2e5, 0x3e09c7ee, 0x3e74b58b, 0x3c1de5d7, 0xbe782683, 0x3de083b0, 0xbe1b39ac, 
    0x3e588855, 0x3d0c4bf6, 0xbe67a07c, 0xbe288a88, 0xbd363b2e, 0xbe794093, 0x3e840718, 0xbe0e0b3c, 
    0xbe63ae3b, 0x3eb67dee, 0x3d930bce, 0xbe87237f, 0x3e1077d0, 0xbe07eb94, 0x3eb32fad, 0x3e3afe51, 
    0x3db24a60, 0xbe6c47f4, 0x3dbc5364, 0x3e320eb3, 0x3d54400b, 0xbe817a87, 0x3e890039, 0xbde71e55, 
    0x3d8fa359, 0xbe97796b, 0x3e96c74e, 0xbe48e639, 0xbdb0f530, 0xbdfc2be4, 0xbdc8c7b6, 0xbe1e3973, 
    0xbd410739, 0xbc65e8aa, 0xbe6cbe69, 0xbe4fc82b, 0xbe92d2d3, 0xbbd078f8, 0x3e600cfb, 0x3e24d857, 
    0xbb9df49c, 0xbe61027f, 0x3e9c288d, 0x3d4fe612, 0x3df607e3, 0xbe12333d, 0xbe28d3e5, 0xbd2f2960, 
    0x3d4159a1, 0x3e6b2245, 0xbdeb7c21, 0x3e00e904, 0x3e868aa8, 0x3e6828c7, 0xbe1e08ea, 0xbd8cf635, 
    0xbd99cfe5, 0x3dfa5122, 0x3d9cac88, 0x3dace90b, 0xbe395793, 0xbcfe34a4, 0xbed3f92a, 0x3d484cea, 
    0x3d866c25, 0xbd8510dc, 0xbdbe1d49, 0xbeae33b0, 0xbc9092d0, 0x3dc3d816, 0x3e31d826, 0x3d8388b7, 
    0xbd919747, 0x3c65e517, 0xbe7465a3, 0xbdc8c328, 0x3e5b1d82, 0xbda68680, 0x3ca5f06a, 0x3e232628, 
    0x3dee10b5, 0xbd25e667, 0x3e879d9b, 0xbc8ab145, 0x3e7ae90b, 0x3d264b2f, 0xbdebd827, 0xbdb8ed90, 
    0xbd9a2696, 0x3e78990e, 0x3e518dca, 0x3d2ad506, 0x3de16e52, 0x3d131a0c, 0xbe1d53cd, 0xbe64dc18, 
    0xbce40c59, 0x3d8960a4, 0x3e3975e6, 0xbe48cc8b, 0xbe92aa7a, 0x3bcf48ca, 0xbd0073ae, 0x3ac83a6f, 
    0xbd449b51, 0xbdc6ef8f, 0x3e75b073, 0x3e539092, 0x3e5cb631, 0xbe8f0e93, 0x3e2d3de3, 0x3e014ad1, 
    0x3e9f4a26, 0xbe902ad4, 0x3e235464, 0x3e26c602, 0xbd1306f4, 0xbd879838, 0x3dd0e713, 0x3cb90510, 
    0xbdfa9f5e, 0xbe037de9, 0x3e5a5796, 0x3db9971e, 0x3eaf9ba0, 0x3e058b66, 0xb6399503, 0xbe3c236d, 
    0x3ceb37ff, 0xbe3c0ad5, 0x3e06e0a9, 0xbe6416e1, 0x3e55cd3a, 0x3e96a182, 0x3e7191d1, 0x3e34f9ae, 
    0xbe919a77, 0xbe964180, 0xbdb60adc, 0xbd16a1ae, 0xbc667405, 0x3dbcaf96, 0xbd486d5b, 0xbe318044, 
    0xbe5661bd, 0x3d843822, 0xbd80c7bf, 0xbddf77ff, 0xbd3fe8ba, 0xbe40e10a, 0xbca6bd9f, 0x3e1ad8f3, 
    0xbd87e5e5, 0x3dafd844, 0xbe9c218c, 0xbd972086, 0x3cbd2a60, 0x3eaa45bb, 0x3e725a97, 0xbe2003ef, 
    0xbdb41903, 0x3e4e86ea, 0xbda99a47, 0xbe8bfe0c, 0x3e2b990b, 0xbda73e5b, 0x3d6c2c34, 0xbe6ed76e, 
    0xbe5db5ee, 0xbe82d85e, 0x3e85f589, 0x3dc906bc, 0x3e20c197, 0x3e255a29, 0xbd4cf676, 0x3dad3bb6, 
    0x3e9f41c6, 0xbe6aa703, 0x3e662026, 0xbdd37a3b, 0x3e8b9553, 0x3c9f2025, 0x3dcc5774, 0xbdf69f89, 
    0x3e9cf96d, 0xbd61323b, 0xbe60af21, 0xbcb184d5, 0x3e7ef17a, 0x3e18088a, 0xbdaf065f, 0x3e85e1ec, 
    0xbdbb6cf9, 0xbe11b093, 0x3ea48a47, 0x3d427439, 0xbd63bf5e, 0x3e5c8756, 0xbe5f7cf1, 0xbe11bb7e, 
    0x3e2507f8, 0x3e3c31fe, 0x3e206032, 0x3e672a9a, 0xbd606eeb, 0xbe283b73, 0x3e0a3663, 0xbc21e67d, 
    0xbe1e693e, 0x3e6ef646, 0xbea9fca6, 0x3d7d4113, 0x3e78bd1b, 0xbd8256bb, 0x3e203fbe, 0xbb309836, 
    0x3dcf415f, 0x3e7f38d2, 0x3e1886dc, 0x3c947811, 0xbe50af25, 0x3e84d7f2, 0xbe68aa9b, 0x3db62e2d, 
    0xbcd51277, 0xbe2ebbaa, 0xbe8a8ecb, 0x3e0d8b8e, 0xbe26ee50, 0xbde2e9be, 0x3e50e982, 0xbe064df6, 
    0xbe31b8df, 0xbe0c4fb6, 0xbe455ec1, 0x3d657923, 0x3d0c9f34, 0xbe56ed72, 0x3e1544be, 0x3dde611d, 
    0xbd19b2f1, 0xbe4af52e, 0xbe7a2564, 0x3e396c58, 0x3d14b474, 0xbe917cb2, 0xbdb7a4cf, 0x3bd6e5fa, 
    0x3d9bc5c4, 0x3dbd0c63, 0xbd704e9a, 0xbe5c6659, 0xbe0ac40e, 0x3d9ef0c7, 0x3d8286b8, 0x3d83990f, 
    0xbeae0154, 0x3d9c6af3, 0xbe2d67e1, 0xbdd84479, 0x3d129cda, 0x3dbaa3fc, 0xbe4d123f, 0x3e869b83, 
    0x3dd959c8, 0x3e521e3c, 0xbe8f67ff, 0x3e2382ea, 0x3c3195ee, 0xbe07c104, 0xbdf4faf7, 0xbc4d0144, 
    0xbe0d94dd, 0x3e892091, 0x3dfeab33, 0x3e5ddbbc, 0x3e9e3126, 0xbe477125, 0xbe6ad824, 0xbe25f417, 
    0x3e75a384, 0xbdb62167, 0xbd7fccdd, 0x3e728dfd, 0x3db9cb6d, 0xbe5519b4, 0x3e88b680, 0x3cf9ba19, 
    0xbe526258, 0x3e032b83, 0x3e029eaf, 0xbe5e4203, 0x3e7926b1, 0x3e36b748, 0x3de75c40, 0xbe8cfb18, 
    0x3e63d2d2, 0xbdb458df, 0x3e4db640, 0x3cb45b95, 0xbde925cd, 0x3e8815bc, 0x3db2d6dd, 0x3db4d179, 
    0xbd21ffa3, 0x3e017c52, 0xbea55b96, 0x3ca85c92, 0x3e8824fb, 0x3e57171f, 0x3dbfc1b8, 0x3e86ea59, 
    0x3e386db3, 0xbdbf14b4, 0xbe144165, 0xbe8ee99f, 0x3e85a3af, 0x3eb5bdad, 0x3e79773c, 0x3e8d9c26, 
    0x3e1be2b8, 0xbea20724, 0xbe156a3c, 0xbe18b406, 0xbe36cc03, 0x3d4c2b64, 0xbe300e1a, 0xbdc6f1bb, 
    0xbe1db97e, 0xbde01a8b, 0xbe458dc6, 0xbea6e360, 0xbd2da2ee, 0x3e68ce8d, 0xbecf8cc1, 0x3dfae539, 
    0xbd881b6a, 0xbe9a396d, 0xbe22e767, 0xbe9038ec, 0xbe3c0b60, 0xbcbdd85e, 0xbe44e30c, 0xbe258734, 
    0xbe307ac8, 0x3e2e0f49, 0x3e88d137, 0xbe89e552, 0xbe8efc51, 0xbda34a60, 0xbe54d114, 0xbdb04b7b, 
    0xbd52b8f9, 0xbea8fac9, 0xbe45deea, 0x3e8b4fd2, 0xbe43dd43, 0xbe669cab, 0xbe8456e9, 0xbea1fb29, 
    0x3e1f1805, 0x3db6b7ed, 0xbd84d6e0, 0xbe6190fc, 0xbe25e9c9, 0xbe43b62d, 0xbeb68868, 0x3e1dfb4b, 
    0x3e6731b0, 0xbe846d0f, 0xbbcd8d3c, 0xbe380723, 0x3e826410, 0x3ea332bb, 0x3db5e119, 0x3e32847d, 
    0xbdc5ba69, 0xbd5777d9, 0x3e85775c, 0x3d9bb0a1, 0x3e81c053, 0x3e936541, 0x3e009e0c, 0x3e37f261, 
    0x3e2a527e, 0x3e3b6aac, 0x3dc31dfb, 0x3a88bc31, 0xbd858df0, 0x3e53036c, 0x3e7bc141, 0x3eae0f03, 
    0xbe5a708d, 0xbe7f6650, 0xbe396227, 0xbe3b793d, 0xbd8b8928, 0x3e3c0447, 0xbe170c71, 0xbd19e8bb, 
    0x3bb08c1c, 0xbe56ea35, 0xbe30ad02, 0xbeadec45, 0xbe368e94, 0xbe4d06f7, 0x3e142d39, 0xbc63255a, 
    0xbe1c7e6b, 0xbe5a4679, 0x3d17f3dd, 0xbe578a99, 0x3e178094, 0xbd95f6e3, 0xbd9f1a07, 0x3e13bb79, 
    0x3d538053, 0xbbaf5a01, 0xbcd66563, 0x3ec2a662, 0x3eaac318, 0xbe01bbf0, 0x3e5a9d11, 0xbdd4620f, 
    0xbe8e2e58, 0x3e070674, 0x3ca68cb5, 0xbd756408, 0xbe2820d0, 0x3e0dae70, 0x3d9fec2e, 0x3def96f1, 
    0xbe926a41, 0xbe8ece72, 0x3e2a9fd9, 0xbe6a1866, 0xbe183770, 0x3dc64a2a, 0xbd0a9ae7, 0xbdfb773d, 
    0xbdadb2c3, 0x3da786fd, 0x3db860fc, 0x3e0a1bb4, 0xbbdab4d3, 0xbb75f251, 0xbdcaf1df, 0xbe86855e, 
    0x3d514d8e, 0x3e580493, 0xbdb9f16b, 0xbe27375f, 0xbdaa4823, 0x3e4e485e, 0xbe062070, 0xbe88c44f, 
    0x3ea5a3aa, 0xbe375574, 0xbdc358d4, 0x3e521175, 0x3e3a1386, 0xbe1236a7, 0xbe6925b8, 0xbdcf301f, 
    0xbe83a6cc, 0x3e2fadbc, 0x3e78a183, 0xbe8541f4, 0xbd8c98db, 0x3e6fdc74, 0xbe45c29c, 0x3d779292, 
    0xbe9f3dcf, 0xbe3cebde, 0x3d4c47f3, 0x3e8f3352, 0x3df5aa15, 0xbe06f956, 0xbd0cbaf9, 0xbceeb334, 
    0xbe740d62, 0xbe6db469, 0x3e652051, 0x3cff577b, 0x3dcc2e24, 0xbdb0d7d5, 0x3c98a815, 0x3e0dd01d, 
    0xbe165294, 0xbe66a424, 0x3d992ff5, 0xbd295665, 0xbe344fb4, 0x3db0301d, 0x3ec6b879, 0x3c565b98, 
    0xbe5639e0, 0xbe5aa5a7, 0xbe4e8244, 0xbeaabcb7, 0xbe6952c7, 0xbda1d013, 0x3d4c7d38, 0xbef2b5f2, 
    0x3e3db898, 0xbdc8372a, 0xbdd92b73, 0xbeab30fa, 0x3de9f821, 0xbe27be99, 0xbea5089b, 0xbd45bbd8, 
    0x3e383239, 0x3ec2d2b1, 0x3e2f5732, 0xbdc47e46, 0xbd4562e8, 0xbeb287f3, 0x3e804315, 0x3eb3bc40, 
    0xbea7064a, 0x3e586b36, 0xbe88e695, 0xbe53b9a1, 0xbeaab2e8, 0xbd6f48a8, 0xbd2606bd, 0xbe0f226a, 
    0x3b9b936f, 0x3e5c0e1d, 0x3ce87ffa, 0x3e70f531, 0xbdf4bebb, 0xbe99cc9a, 0x3ee53b07, 0x3cf50fb7, 
    0x3e26c58a, 0x3ed19dce, 0xbeb71876, 0x3ea222b9, 0x3e960e35, 0x3ee1430a, 0x3e1ec6f2, 0xbd5fe81a, 
    0x3e83bca6, 0x3e872d14, 0xbe684b49, 0xbe83959c, 0x3d466e5b, 0x3eb3a2f8, 0x3e365827, 0x3e27ddcb, 
    0xbe9d35fe, 0x3e5959cf, 0xbee0f879, 0x3d75de87, 0x3da376a9, 0xbe61804d, 0x3d6baf2f, 0xbedab737, 
    0xbd780458, 0x3e334c61, 0xbc9504e4, 0x3e5ae493, 0xbe781b47, 0x3e2e5182, 0xbb9d5947, 0x3e11061f, 
    0x3e059433, 0x3e58457a, 0xbe9c6f24, 0x3efc5300, 0xbec51989, 0x3e8562e6, 0x3cd45455, 0xbe8d9b5e, 
    0x3c77bbb5, 0x3eba762c, 0x3d9ce7f2, 0xbeaba9a9, 0x3ecbdc74, 0x3d8a8ce9, 0xbe5f0e2a, 0xbe44ef9c, 
    0xbdf034a5, 0xbd7428ae, 0x3e6e74ef, 0xbe0cdc8a, 0x3ce194df, 0xbe880590, 0xbe3c83ed, 0x3e466cba, 
    0x3d2f12d2, 0xbe5834ba, 0x3e90eb87, 0xbdd689e2, 0xbe9e18c5, 0x3d72ac98, 0xbceb17a4, 0x3ebe0920, 
    0x3e1ec53a, 0xbda39c89, 0x3d26a281, 0x3e958fe4, 0xbdd8c61d, 0x3d6c81bd, 0xbe2cae52, 0xbe4470c3, 
    0x3e3841b1, 0x3e89dce8, 0x3d08679d, 0xbe5fd610, 0x3e91c56a, 0xbde435c8, 0x3e2a6a24, 0xbe7328bd, 
    0x3d73aadd, 0xbd4162cd, 0x3e851bbb, 0xbdff34c4, 0x3d9a846c, 0xbdd42504, 0x3e03dd54, 0xbe697204, 
    0x3e463444, 0xbd14fd38, 0x3df1eed4, 0x3e8a78a8, 0x3e8c5ffc, 0xbde5e834, 0x3ebdfef2, 0x3d8ea769, 
    0x3d351429, 0x3eac8123, 0x3e810411, 0x3d61697f, 0x3eac28cd, 0x3e20f875, 0x3d703d39, 0xbe07b249, 
    0x3e51bb8f, 0xbe9cd608, 0xbea6d4c8, 0x3e14b595, 0x3e80c188, 0xbd9fb5ab, 0xbead6a54, 0xbe0f5b2e, 
    0xbe4a4c1a, 0xbea568ad, 0xbdb02990, 0xbe8e6976, 0x3e104460, 0xbe76a1ec, 0xbcb9f015, 0xbe8674f0, 
    0x3e29f2f3, 0x3e2f629a, 0x3e1c923f, 0x3eba4f46, 0xbd902db7, 0x3e6af39b, 0x3c2017ca, 0xbbdfc997, 
    0x3e97f55b, 0xbe2bff96, 0x3e832283, 0x3dee3cb6, 0xbdb7d3c5, 0xbe082f76, 0x3e2b2ee5, 0x3e5d5657, 
    0x3e0fdcb3, 0x3d76de00, 0xbe64c31e, 0xbe043bac, 0xbe4d9fce, 0x3e8cbad6, 0xbe9cfe23, 0xbe720446, 
    0x3b84252b, 0xbc823918, 0xbeb9bc38, 0xbebaeefc, 0xbda533ca, 0x3e361e3b, 0x3ea08ea2, 0xbe84c2b3, 
    0x3e6507bf, 0xbec4f4cc, 0x3ee8bbe3, 0xbe3c7f69, 0x3f0a73b0, 0xbf03dd52, 0xbe50b2f3, 0xbec1cf22, 
    0xbe72d259, 0xbecc9ed1, 0xbd460579, 0x3d3ff9b1, 0x3eadc9e9, 0xbeb9a87e, 0xbec6ed29, 0xbec7e481, 
    0xbe876091, 0x3df62760, 0x3e88058e, 0xbea285e3, 0x3ea0de82, 0x3e9a09b4, 0xbddb9073, 0x3e429acb, 
    0x3ef92b62, 0xbe0d415d, 0x3f0b5779, 0x3e02189e, 0xbe95929e, 0x3ebd3f73, 0xbe0b348d, 0x3e842c8b, 
    0xbee4d100, 0x3d96bf6c, 0x3d93eb09, 0xbb408fad, 0xbed78674, 0x3e23172b, 0xbea16624, 0xbd8a7d68, 
    0x3ea229fa, 0xbdc2034f, 0x3e8e2287, 0x3ed10675, 0xbe87e4c2, 0x3e2a0bf1, 0xbeabc52c, 0xbef8599f, 
    0xbed45323, 0x3f08b0a4, 0x3db4a593, 0x3f119b51, 0x3e2ff722, 0x3e7b3abb, 0x3d3edeb4, 0x3ea8407d, 
    0x3e1249ce, 0x3dfb41dd, 0xbeed64ed, 0xbdab0603, 0xbe6b1301, 0xbe9da461, 0x3f033c93, 0x3e352e13, 
    0xbe8c3ec8, 0xbee5c7b8, 0xbbd92029, 0xbc8342fd, 0xbec6b179, 0x3db0cba4, 0xbe9f83c4, 0x3d6791cf, 
    0xbe01d8af, 0xbe43b04a, 0x3edd1a2a, 0xbe2c0fb6, 0x3eb9cfff, 0xbeb8a514, 0x3e23f0ac, 0x3e31a827, 
    0xbe39403d, 0x3e0d5f97, 0x3df2372e, 0x3e7e0f3e, 0xbe955e4d, 0xbe5ffdbc, 0x3e0c6a60, 0xbe2f052c, 
    0x3e42d37b, 0xbd8d3160, 0xbe7789e4, 0xbe5523ec, 0x3dd9589b, 0x3d75fdba, 0x3e9a4bec, 0xbdc7fc32, 
    0x3eaede43, 0x3d687be6, 0x3e2f07ae, 0x3ddce68d, 0xbdb17c9d, 0x3ea21bba, 0x3e891237, 0xbe51549c, 
    0x3e790b6d, 0x3dfec17b, 0xbe3358d0, 0x3e3d2347, 0xbe0d8a4d, 0x3d54639d, 0xbcb40284, 0xbdff4b14, 
    0xbe4a23ca, 0x3cae93de, 0xbc1c5e01, 0x3d75721d, 0xbe1dc315, 0xbe7db80e, 0xbed1354c, 0xbeb42bb2, 
    0xbe4498e7, 0xbe53c5c3, 0x3e9d08e6, 0x3d294b29, 0x3ce9b986, 0x3ebef249, 0xbe8af7a8, 0xbdbdfc7f, 
    0x3d4b6c6c, 0xbe5beddf, 0xbe020c67, 0xbd6162d7, 0x3df3c0b3, 0xbd339d4e, 0x3e7e94eb, 0x3d27db22, 
    0x3e27d323, 0x3e2b789e, 0xbd13ab42, 0x3e7258cd, 0x3e440471, 0x3df94aa1, 0x3e44d4d9, 0xbd81283d, 
    0x3e33aedf, 0xbe5d2daf, 0x3ea52b80, 0xbe302f49, 0xbd34a89f, 0xbe112522, 0xbe9c4bb3, 0xbe415e05, 
    0x3e0ad620, 0xbe17ae6d, 0x3e761104, 0xbe83d886, 0xbdc9cffe, 0xbbc92644, 0x3d8cce73, 0x3e45fe5a, 
    0x3ddb088e, 0x3e742e38, 0xbd6adedf, 0xbdd259b6, 0x3e096f41, 0x3e76b6ab, 0x3e78b2b8, 0xbe6a251a, 
    0xbe8e4da0, 0xbcc17df9, 0xbcf44051, 0x3ec57931, 0x3eb838f8, 0x3c98a100, 0x3d3826cb, 0xbe45d8de, 
    0xbd7d03ce, 0x3e5b3636, 0x3e3d7d14, 0xbcc4e450, 0x3b96bb5e, 0x3ea9011b, 0x3e113c5f, 0xbe9d01f2, 
    0x3e537130, 0xbd3dc1bb, 0xbe698115, 0xbe3f04bd, 0xbd7c3af7, 0x3e56e735, 0xbe15b20f, 0x3e2972d5, 
    0x3e3849a9, 0xbea51762, 0xbe39c9a9, 0x3d8f57c6, 0xbe23dd3b, 0x3d1efe02, 0x3ddcd556, 0x3e6ec31e, 
    0x3e7553a4, 0x3e8c1af1, 0xbbf0e022, 0x3da79719, 0x3d19009a, 0xbdc31cda, 0xbe1cbcce, 0xbe9e75da, 
    0x3d81b68e, 0xbd313553, 0x3e5f4ebe, 0x3e74fe79, 0xbe5e18a3, 0x3e93b59d, 0xbe7fa874, 0x3d8fa1c1, 
    0xbe42ca77, 0xbe6551db, 0xbdcc0765, 0xbe745c65, 0x3e813084, 0xb9dfd42d, 0x3e599ad5, 0xbe5fea9d, 
    0x3e079674, 0xbe474de9, 0x3e88d786, 0xbe07c46d, 0xbe8e5e8a, 0x3dedb0bb, 0x3d433e40, 0xbca56fd4, 
    0x3ec23765, 0x3e6ffcad, 0x3e785085, 0x3e07b386, 0x3e85bd4d, 0x3e180f10, 0xbd9ca54b, 0xbca2606b, 
    0xbe12ba9f, 0x3e9cb2ff, 0x3d9118af, 0xbe25bfbc, 0xbc1b9539, 0x3e3e7370, 0x3e2033fc, 0x3a08eb4e, 
    0xbbf89887, 0x3dc27492, 0x3d6f83cd, 0x3e445885, 0xbd701701, 0x3d92209d, 0xbce50d44, 0xbd0ecab2, 
    0x3ebec66d, 0x3d92de79, 0x3e70a591, 0xbe61f7b9, 0x3e2fd2c6, 0xbdda3f9a, 0x3d65bf05, 0xbe06f1f9, 
    0x3df1ade8, 0x3dc860e1, 0xbeac4022, 0xbdafaaac, 0x3e85ed12, 0x3d172ccc, 0xbe56c3e8, 0xbda64142, 
    0xbd914abe, 0xbda986d7, 0x3e513f70, 0xbe35e935, 0x3e6b8e6e, 0x3d78356a, 0xbe20f6cc, 0xbd74e958, 
    0x3d523dd6, 0x3e861f39, 0x3ce55ae6, 0x3d3cfd27, 0xbe879b81, 0x3ea6356c, 0x3e3e5839, 0x3b0c5295, 
    0xbd9c0f14, 0xbdd8c04e, 0x3db50653, 0xbe72f323, 0xbe7cd6c5, 0x3deb2da2, 0xbe453a78, 0xbdd79738, 
    0xbe31a555, 0x3c14f251, 0xbe0668ae, 0xbe29bed2, 0xbe5c82ac, 0x3c99c6ed, 0xbe23371e, 0xbe45ebb1, 
    0xbdba7c31, 0x3dd8a853, 0x3e07c84b, 0x3e3f4b59, 0xbe801b00, 0xbe873f66, 0x3e979b40, 0x3db6b61d, 
    0x3e253264, 0xbc137ce9, 0x3e37abf2, 0x3e670c11, 0xbd4c0bd8, 0x3e16772e, 0x3e87f672, 0x3dd6dda7, 
    0x3d9cb053, 0x3e932d41, 0xbe826490, 0x3cbc8a68, 0xbd897406, 0xbc7550d4, 0x3e30c551, 0x3ca58e8c, 
    0xbe0c36e1, 0xbe4ad56d, 0xbd638e70, 0xbe169c2b, 0x3d4486b2, 0xbd710aa9, 0x3e36400c, 0x3e30007b, 
    0x3e65726f, 0x3d80101d, 0xbe0edafc, 0x3d9dd49e, 0x3dd95ebd, 0xbdf64fe1, 0x3d9652ac, 0xbd1bc89b, 
    0x3eaf9b1a, 0xbe914c7b, 0xbddefa51, 0xbe09c651, 0xbe1a4e66, 0xbe2678e0, 0xbe4dacda, 0xbddcf8ce, 
    0xbc774244, 0x3eb11a32, 0x3e75d82a, 0xbe72cb11, 0xbd0605f3, 0xbdf5b923, 0x3de80c7b, 0x3e49b643, 
    0xbdd3e696, 0xbb27c111, 0xbe81afdb, 0xbd9a3da6, 0xbea6ecc4, 0x3e51e7d9, 0x3e9d9d1b, 0x3e5fd8b7, 
    0x3e5fe9ba, 0x3da107cb, 0x3dcff580, 0x3d115c37, 0x3bbb46c9, 0xbe95bc29, 0x3e721746, 0x3d21df7b, 
    0x3d85186e, 0x3eabb4ce, 0x3b9a140a, 0x3ca9502d, 0xbc2da9d3, 0xbe84c936, 0x3e8a78c8, 0x3ecf994e, 
    0x3db6b779, 0xbe802615, 0xbe10048b, 0x3ec04814, 0xbe7e8083, 0xbe80b36e, 0xbd96d4ec, 0x3ecc5064, 
    0xbe9c2b34, 0xbed371f3, 0xbdb440fb, 0xbe9cadd7, 0x3c91dd61, 0xbe24a980, 0xbe98d7dd, 0x3da764bb, 
    0x3c811b02, 0xbc73a004, 0xbda72b58, 0xbc35d70e, 0x3c871a13, 0xbd9ecbaf, 0x3e6ed014, 0x3e0e881c, 
    0xbdc8d026, 0x3e6ede78, 0x3ebbe719, 0x3ea11922, 0x3e054459, 0xbe3ee732, 0x3e9affad, 0x3e2a861b, 
    0x3ecca892, 0x3da3a284, 0x3ea36379, 0x3dc77527, 0x3e24b714, 0xbdf30313, 0x3d594ec2, 0xbbac96c5, 
    0xbe238218, 0x3d8017be, 0xbe928f77, 0x3e5fd342, 0xbd85c37d, 0x3d949b66, 0x3e888733, 0x3cb247c3, 
    0x3eb992e0, 0xbe7f5b64, 0xbd0133ec, 0x3e7a46dc, 0xbd13c561, 0xbe1ec19d, 0x3dc95080, 0x3d80784a, 
    0xbc99c870, 0x3e8ced96, 0x3e7ab8d3, 0xbe8bb849, 0x3e7863bd, 0xbdf1a5ae, 0xbd207ab3, 0x3e6989ed, 
    0xbdb88e35, 0x3e8a0018, 0x3cb279d8, 0x3ecd62f2, 0xbd6c9717, 0x3eaabf39, 0x3eace050, 0x3e3f2161, 
    0x3db9ab64, 0x3e8420dd, 0x3e19d65f, 0xbe9c6973, 0xbe2d1d77, 0x3dade181, 0x3db70513, 0x3ea8e4e2, 
    0x3ea02a6b, 0xbead94a0, 0xbe0cb1ce, 0xbe0194d2, 0x3e97c3c0, 0x3e830c8b, 0xbe3a09f5, 0xbe762616, 
    0xbea5812b, 0x3d012cb8, 0xbeb7cb1a, 0xbe5bb4c7, 0x3e3e27a1, 0x3e96e5d0, 0xbca2e334, 0xbec15546, 
    0x3e8d69cf, 0x3d13c332, 0xbe2c794a, 0xbd98f1bb, 0x3d0f3258, 0x3d53fd51, 0x3ee9491f, 0x3e12f05a, 
    0x3e67095f, 0x3d2a8ff9, 0x3d422458, 0xbea73c5d, 0xbe195524, 0x3e245c3c, 0x3e89e586, 0x3e921821, 
    0x3ca3b446, 0x3cb9b8c9, 0x3dc6d943, 0x3dcb9d8b, 0x3e6a43f2, 0x3cb2ba34, 0x3d831de8, 0x3d8cb7b0, 
    0xbdd2b83d, 0xbe9e5155, 0xbdd9ee4d, 0x3e2f784c, 0x3e46dfe2, 0xbed26e07, 0x3ead302d, 0x3e06dcd3, 
    0x3db08dde, 0xbe4f9a91, 0xbea8d6af, 0x3da091dd, 0x3e5b2659, 0xbec3f068, 0xbe1d28dc, 0x3d7bddee, 
    0x3e79a413, 0xbd279b5f, 0xbd646b0f, 0xbe9aa2c3, 0xbda09aa6, 0xbe226903, 0xbe9162eb, 0xbe635e22, 
    0x3e3a3893, 0x3bd5ed60, 0x3e7b306e, 0xbe608f27, 0x3e939666, 0x3e12783f, 0xbc0da214, 0xbcf6216e, 
    0xbeb0bbca, 0x3c2da519, 0xbe950c14, 0x3e6d69aa, 0xbc3bf996, 0xbdf826a1, 0xbe66ef4e, 0x3da1dedf, 
    0xbe723445, 0xbec07ad3, 0xbe92c3c3, 0x3d12222b, 0xbd53c5cc, 0x3dac61de, 0x3e82c670, 0x3e9bdda0, 
    0xbb057a89, 0x3e14468f, 0xbe7a39a4, 0x3e1cdaed, 0xbe8fbf18, 0xbd9f1c53, 0x3e826155, 0x3e8e11a5, 
    0x3ea79e6b, 0xbe569476, 0xbe24a144, 0x3e3f847f, 0xbe5fc128, 0x3ec77cc1, 0x3e2038da, 0x3e8d7653, 
    0x3e2eac47, 0xbe4f697b, 0xbea94d42, 0x3e3bb355, 0xbe10c976, 0xbe296e4d, 0x3e095b12, 0xbe61180a, 
    0x3ea08dcd, 0x3e476b3d, 0xbe930d78, 0xbddec07d, 0xbe5f563b, 0x3e81ac71, 0x3e1a88c9, 0x3e3353d5, 
    0xbe3ed716, 0xbe9c2ca5, 0xbe8a5bb2, 0xbd71e1b5, 0xbdca1486, 0x3e23abe7, 0xbe3d874e, 0xbdd73a4e, 
    0xbe6e206e, 0x3baed703, 0xbc03955f, 0x3ea2359e, 0x3e29d713, 0xbded0791, 0x3ed951b8, 0x3eb47a16, 
    0xbe3c92f7, 0xbe0a572c, 0x3e90cd66, 0x3ea734e3, 0xbea789f0, 0x3ec9b755, 0x3e5edcee, 0xbe815295, 
    0xbe10035e, 0xbe3db7a3, 0x3e996144, 0xbeac0ea7, 0xbd8defce, 0x3ec48b45, 0xbe4e11ae, 0xbeab91fa, 
    0x3eb177e8, 0xbea0206d, 0xbe460751, 0xbcf52654, 0xbdb5a6e2, 0x3e8268e9, 0x39aaefef, 0xbd745366, 
    0xbda442ab, 0xbe33f866, 0xbe958946, 0xbe93996e, 0x3e90496f, 0x3dad9f5a, 0x3ea3c66a, 0x3decac8d, 
    0xbc0e5956, 0x3df68512, 0x3e3de4eb, 0xbd8d4bf1, 0xbe6ba7e5, 0xbe98a0d7, 0xbd313440, 0x3e3a533e, 
    0x3e8cfccc, 0x3eb710c8, 0xbcf597f9, 0xbe431aef, 0xbd372a16, 0x3e389f3d, 0x3e82bd63, 0xbea45322, 
    0xbe72648d, 0xbe46c8ab, 0x3cfbe43b, 0xbdcace6d, 0xbe3aaaf9, 0x3e13fb28, 0xbec8f1e3, 0x3e6d1c47, 
    0xbdda2a33, 0xbd9dce89, 0x3e3d2d8e, 0x3e8e1cce, 0x3e1f076c, 0xbeca5139, 0x3e4af7cc, 0xbe7a6806, 
    0xbe384d70, 0xbcc5aa20, 0xbc1dfc17, 0xbe00a20a, 0xbe403805, 0xbe199f34, 0xbde61d4c, 0x3e04fd6e, 
    0x3d320d37, 0x3e1a59b1, 0x3dda9ea4, 0x3d4c41fd, 0xbdb3177e, 0xbdc294cb, 0x3d58c787, 0x3d93152e, 
    0x3c2745ce, 0x3da417db, 0x3d8a328c, 0x3d2402b8, 0xbe0277d9, 0xbd0424cd, 0xbd299803, 0x3de65cee, 
    0x3c81e8f4, 0x3d50dc8e, 0x3e2756d1, 0x3dc51114, 0xbdee9890, 0x3e033797, 0x3e387359, 0x3e4133f2, 
    0xbb911734, 0xbdaca5aa, 0xbe2ec1e8, 0x3dc3078f, 0x3e30f826, 0xbd27751c, 0x3de4e8d4, 0x3d23bf6d, 
    0x3e08e627, 0x3de08d3a, 0x3e85f277, 0x3d670a50, 0xbe4c8936, 0xbbbcfe30, 0xbd882844, 0xbe5382f3, 
    0xbc9fe1ca, 0x3d21f3d3, 0xbe1bb228, 0xbe1a50d7, 0xbd697995, 0x3e1295d7, 0x3e262118, 0x3d5db603, 
    0xbda9ad04, 0xbe1438bd, 0x3e128468, 0x3de8dfe5, 0x3d5a7004, 0x3dfc75bf, 0xbe316ec2, 0x3cd3eb30, 
    0x3dbff333, 0xbd1880d3, 0xbe01cb0d, 0xbe16b0aa, 0xbd499f11, 0x3dace9cb, 0x3db869dc, 0xbced17ee, 
    0x3d852e66, 0x3e2669d9, 0x3dfcefa7, 0x3e01ed7e, 0xbc617491, 0x3e2264b0, 0x3df5d111, 0xbe2f66ab, 
    0xbddeb059, 0x3d1ca9bc, 0x3d9cccce, 0x3d8a17fc, 0x3e169c06, 0xbd8e7aae, 0x3d983d1d, 0x3d0b702d, 
    0x3d72ff8b, 0x3ddae978, 0xbcab29c6, 0xbe174d00, 0xbe16c745, 0x3db8306b, 0xbd015603, 0x3c45f271, 
    0xbd8f7143, 0x3c7d4fa3, 0xbe8470ce, 0xbd197054, 0xbd4b5266, 0x3cabbe4f, 0x3d7bcfcb, 0xbd301bfa, 
    0x3da5d7d0, 0xbd2b705a, 0xbe126071, 0xbdcb06c6, 0x3d4074e5, 0xbe44a3be, 0xbbb05123, 0x3e690c96, 
    0xbe06fc28, 0xbe450bb0, 0xbe0dcb8c, 0xbd718086, 0xbe902dee, 0x3d4700c1, 0xbdcdec6d, 0xbdf885a3, 
    0xbe0f6270, 0xbd810b95, 0x3e1c7bd7, 0xbe3570d2, 0xbe5c7c3b, 0x3e5ac41b, 0x3e71a649, 0x3c5153f8, 
    0x3e0d67a3, 0x3e22e019, 0xbe8f5994, 0x3de81c5b, 0xbd977e30, 0x3e1fcc52, 0x3a38c9c2, 0x3c4fa67c, 
    0xbd8c5414, 0x3ea8b72c, 0xbe14ae2b, 0xbd302850, 0x3d4f3b2f, 0x3e7ea706, 0x3e012ecf, 0xbdaa099f, 
    0xbe70d039, 0x3dfa4597, 0xbe73533e, 0xbe0b4269, 0x3e3177d0, 0xbd86dc31, 0x3d30e8ec, 0xbd81c50c, 
    0x3decb52c, 0xbe1365bd, 0xbe9dbef9, 0xbe4f7177, 0xbd521b36, 0xbe0eb112, 0x3e22aea4, 0x3e8000b7, 
    0xbe5a110b, 0xbe16857e, 0x3db5fc34, 0x3e5fc126, 0xbe558bf4, 0x3e12af2a, 0xbc16bf65, 0x3c3db264, 
    0x3d05c66e, 0x3c8c5049, 0xbb332534, 0x3d7c2ae9, 0x3e5e499c, 0xbda1cd60, 0xbdb8a291, 0xbdca9842, 
    0x3e57a3da, 0xbddbd0cc, 0x3d9cbfcb, 0x3b35921d, 0xbeb2f6d4, 0xbe3b7702, 0x3e80ed2e, 0x3e7efed8, 
    0xbd9ad1fd, 0xbe707211, 0x3e2fdd7f, 0x3e58fe3d, 0x3d99b601, 0x3dc52545, 0xbd973319, 0x3e858114, 
    0x3e140cf4, 0xbe7d2930, 0xbd5b0eb9, 0xbddff10e, 0x3e097919, 0x3e72cc33, 0x3dc6d9be, 0x3df28233, 
    0x3db4f50e, 0xbe5e7d35, 0xbd75cc8e, 0xbea00089, 0xbe74cbff, 0xbe92071f, 0x3ea6015f, 0xbe73f525, 
    0x3df1d182, 0xbea2cfd8, 0x3e8ea0b2, 0x3bb43264, 0x3d1a3e7d, 0x3cc6e481, 0x3e1ac2b6, 0x3e247b9f, 
    0x3e612b93, 0x3e8ec026, 0xbcbec268, 0x3e869f17, 0x3e4b7fb9, 0xbe90712e, 0x3e786586, 0xbe1a6877, 
    0xbea14b33, 0xbdf87517, 0x3e0d4e06, 0x3eb6d418, 0xbe0a7372, 0xbd5a2f53, 0xbda85d4c, 0xbe8be147, 
    0xbd7fdc0d, 0xbe524a2a, 0x3df9ef20, 0xbeaff8bd, 0xbd89ff7b, 0x3df522b7, 0xbdf2a9e0, 0xbd99e6fa, 
    0xbe8e53cd, 0xbe07fd58, 0x3dbb6f76, 0x3ea1a321, 0xbda8394e, 0xbe4a0178, 0x3e7ab1be, 0x3e53399e, 
    0xbd7cfa4c, 0xbdf3db3c, 0xbe533ded, 0x3e9adb34, 0x3ea37cab, 0xbe27d535, 0x3ba4d792, 0x3e32a0c1, 
    0xbe61a8e6, 0xbd5b2de3, 0xbe75ca0c, 0xbe4ee541, 0x3e602c1d, 0x3e98522a, 0xbe04fada, 0xbea48980, 
    0x3c3ad378, 0x3e8f0615, 0xbcb3dc05, 0x3e80da14, 0xbd919def, 0x3e14095d, 0xbea51673, 0xbe09a718, 
    0x3e31a4e5, 0x3e035102, 0x3ea6ed05, 0xbea6599e, 0xbd88a604, 0x3d8319ab, 0x3ea7b0fe, 0x3e6999a4, 
    0x3e16b424, 0x3e1e61ff, 0x3e4df56c, 0x3d4e6dfa, 0x3d8f6aea, 0xbe66f046, 0x3e7aafdd, 0xbe224b7b, 
    0x3e54aae4, 0x3e64c0b7, 0xbde347cf, 0x3ea61165, 0x3d02d145, 0xbec6091f, 0xbe1914ac, 0xbed25f32, 
    0x3d581f59, 0x3ddcbfda, 0xbe084a50, 0xbdc550e0, 0x3dcb5729, 0x3d3e5091, 0x3befb515, 0xbcb7febc, 
    0xbe143c34, 0xbe4fe1b0, 0xbe8db859, 0xbdcfc324, 0xbe48715c, 0x3da95157, 0xbd66ae9b, 0xbe746601, 
    0x3df69f58, 0xbe95a142, 0x3de673a1, 0xbe87c019, 0xbe89e325, 0xbdcb88e5, 0xbe8313a4, 0x3cac369e, 
    0xbe26bdef, 0x3e96efa1, 0x3dad296d, 0xbd23438b, 0x3e91bf69, 0x3df66f7d, 0x3e31ecd5, 0xbc3b1cca, 
    0xbdeee7cd, 0xbe205876, 0x3d8f7541, 0x3ca9c932, 0x3df22b07, 0xbe99df24, 0xbe3cb504, 0xbe7cfd76, 
    0xbe44e254, 0xbe945864, 0xbe1e88c7, 0xbde37f9f, 0x3e829234, 0x3da7109e, 0x3e1f11a5, 0x3d1b115b, 
    0xbd7cd136, 0xbe890312, 0xbe09b8d2, 0xbd965647, 0xbe8e3070, 0xbdaae20d, 0x3e8a3f43, 0x3db9a155, 
    0xbec1770d, 0xbd9146fe, 0x3e8e1a2e, 0xbe6af748, 0x3e818228, 0xbdbd0f05, 0x3ec85cf1, 0xbeacd849, 
    0x3e8b1598, 0xbe6d71df, 0xbe04540c, 0xbd52fac6, 0x3e8214aa, 0xbb80dbc0, 0x3d5ba809, 0xbe2960e9, 
    0x3dc8bdd3, 0x3e5b953e, 0x3dac0aa7, 0xbea25164, 0x3e6728e6, 0xbe19396f, 0xbe6dd0ba, 0x3e124292, 
    0x3d833701, 0xbe9b24b6, 0xbd8cbd1c, 0x3e5d0c13, 0xbeaf4726, 0xbb6f9a18, 0xbdd16d84, 0x3db163b8, 
    0xbe8a0149, 0xbe149731, 0x3dcc05e7, 0x3e0a838b, 0x3e2dec35, 0xbdb55eba, 0x3d9b3d6f, 0xbc20e238, 
    0xbe21cf0e, 0xbcf96a1e, 0x3c835349, 0xbc7ec219, 0xbe6250e3, 0xbde840f7, 0xbd08d8a2, 0xbdd2f1bb, 
    0xbdcaa1b1, 0x3e051c74, 0xbdb4db8d, 0x3e4a9198, 0xbd4af643, 0x3ccf50fd, 0x3e37c868, 0x3d3dc24b, 
    0xbdbd1af9, 0xbd8697ad, 0xbe64152d, 0xbe1b2d18, 0x3e01d296, 0x3dd5054d, 0xb8fb2a57, 0x3e3057b0, 
    0x3d081356, 0xbe104872, 0x3d484cd3, 0x3e18f517, 0xbe4fb267, 0x3e2ef85c, 0xbdba39af, 0x3e51398d, 
    0x3e55a179, 0x3e09f0d7, 0x3dc57f7a, 0x3ca47ff6, 0xbe8b254f, 0x3e1a3cda, 0x3e09d2a6, 0xbe2b7985, 
    0xbe049450, 0xbd53243d, 0xbe3945ba, 0x3c115bff, 0xbe02c37b, 0x3dd34c9e, 0xbda7b49c, 0xbe2e0a5e, 
    0x3dee00e5, 0xbcc0fbc8, 0x3e209366, 0xbe1f229a, 0xbe7d5caf, 0x3d8d9565, 0xbbf28623, 0xbd478c51, 
    0xbd84b6c5, 0xbdb28a7c, 0xbd8c7a67, 0xbe1df031, 0xbdc52384, 0x3e2dc49f, 0x3ce38250, 0xbe288710, 
    0xbe13ffd4, 0x3e331d86, 0xbd688e84, 0x3da344fe, 0x3da68dae, 0x3e183a05, 0x3dbd98a3, 0x3d471ad5, 
    0xbddfff5b, 0xbe2c2718, 0xbe6f76e5, 0x3dcf86fa, 0xbdb95437, 0x3e1f897e, 0xbcbcf28b, 0xbcc8581b, 
    0x3e451d0b, 0x3e0bb353, 0x3d54add5, 0x3da821aa, 0x3d010a10, 0xbe00418b, 0x3d927d78, 0x3b268337, 
    0xbee78474, 0xbe91e273, 0x3da92370, 0xbe20980e, 0xbd61866d, 0xbe1cf0f3, 0xbc234ab0, 0x3e2bbc3d, 
    0x3ecd7bac, 0x3dcfbde9, 0x3d878311, 0xbc3ef7e3, 0x3e30b508, 0x3e92bc89, 0x3e3afaf4, 0x3e146d48, 
    0xbd4fd350, 0x3e2c02c5, 0x3cdc59d6, 0x3e60113c, 0x3d16afcc, 0xbe27cfcb, 0x3e932058, 0xbcc8a765, 
    0x3e63bc7a, 0x3e333d1e, 0xbe13bad7, 0xbd23e5e1, 0xbe4b726e, 0x3e247d87, 0x3e2cc5f7, 0xbe9d4a30, 
    0x3caa9832, 0x3e205f58, 0x3d19158a, 0xbe9a26b5, 0x3d689c51, 0xbe9b8dad, 0x3eda185d, 0xbd8d418e, 
    0x3e2716a6, 0xbd4ef34b, 0x3e04f54e, 0xbdd6885d, 0x3e1f04bd, 0x3d09e4ea, 0xbd05badc, 0x3e5c0a93, 
    0x3eac8c80, 0xbe22942e, 0xbca4cf17, 0x3d9a040b, 0xbdedbafc, 0xbe64de3a, 0x3e138073, 0x3d426daf, 
    0xbded75b5, 0xbd7f85d9, 0xbea67869, 0xbe546093, 0xbe8f4bdd, 0xbe044395, 0xbe8634c1, 0xbe116806, 
    0xbe035538, 0xbdecd470, 0xbd67719e, 0xbeb2080f, 0xbe25f870, 0xbedde805, 0x3e7a0a32, 0xbdc9761f, 
    0x3ebbfbd7, 0xbe3d3286, 0x3e0488c6, 0x3eb38ab9, 0xbb0ffd47, 0x3d63f12b, 0x3e9b6b1f, 0xbcc20e12, 
    0xbe06e769, 0xbe4ce332, 0x3e21d5a2, 0x3e55ceb4, 0xbdadaeaf, 0xbe8c02c2, 0x3ec043bb, 0xbe59db5c, 
    0x3e7a56df, 0xbe9c73e5, 0x3e9e104f, 0xbe6283be, 0x3d10bc9e, 0x3dbbc5a7, 0xbdcb1a09, 0xbe8a92ee, 
    0x3d36e858, 0xbdda49d2, 0xbe12d58f, 0x3eb6cc73, 0x3e7cb9a6, 0xbd4cce05, 0x3e7fa5ec, 0xbe8545a8, 
    0x3e83f437, 0x3e0acca6, 0x3e57f707, 0xbe382070, 0x3e548741, 0xbc9db35a, 0x3d7da2af, 0x3d44b84c, 
    0x3e8ff384, 0xbd3e5f7b, 0x3dea79a0, 0xbdebf2c4, 0x3c6f3184, 0x3e4c538b, 0xbe0baa59, 0x3e7a0c27, 
    0xbe41987c, 0xbe812a82, 0xbe47c712, 0xbdb147bd, 0x3cc35e59, 0xbe297908, 0x3e867df6, 0xbdae5920, 
    0xbe7b87ad, 0xbca4a247, 0xbe5f6b43, 0x3b769fe6, 0xbe950b8a, 0xbe16f009, 0x3e615341, 0xbdbaa29c, 
    0x3d8072a6, 0x3da1fa79, 0xbd01ccda, 0x3e18ec2a, 0xbd974039, 0xbe9e88df, 0xbcbb6042, 0xbe14adca, 
    0x3e13b5d2, 0xbda39316, 0x3d3e062d, 0x3e55d917, 0x3d8d55c0, 0xbe54394f, 0xbdff5de2, 0x3dc1d9ad, 
    0xbdda6937, 0x3e71021b, 0x3e207649, 0x3ca164f8, 0x3e9e9c75, 0xbc94c7e6, 0xbe0b1186, 0x3e852d9c, 
    0x3d9c8338, 0x3d529bf2, 0x3e51c37f, 0x3e4515da, 0x3d8aeb15, 0xbd0679e9, 0xbe64fe7c, 0xbd92bf07, 
    0xbd81ec73, 0x3e7d182c, 0xbeab06ec, 0xbdcbdf5d, 0x3ce386dd, 0xbe0cd5f1, 0xbe616ab7, 0x3e101b91, 
    0x3e46a887, 0xbe275bbe, 0x3eb291a8, 0x3d8f3526, 0x3e6cbfe2, 0x3e2b3a4f, 0x3dfc7ad8, 0xbe650b6d, 
    0xbdab6fc2, 0xbe62fe1d, 0x3e42bef5, 0x3e1e1b61, 0xbe73d4ed, 0x3e4e01b6, 0xbdb197f9, 0xbe7d61a2, 
    0xbe8b89d5, 0xbe94a02e, 0xbe6e214c, 0xbe959af7, 0xbec01529, 0x3e076ac9, 0x3ea43f71, 0x3d6a9394, 
    0x3aa2513a, 0xbe23ae56, 0x3cab1cad, 0x3ee922fd, 0xbd32533f, 0xbe69ff99, 0xbe1392e2, 0xbe84f930, 
    0x3e0393fc, 0xbe7d910b, 0xbe5dbb0b, 0x3e89d316, 0x3eeafd1c, 0x3ec6aec6, 0xbd65ba73, 0x3e134a97, 
    0xbd0da8ec, 0x3e6e3254, 0x3e8bdfcc, 0xbe9da81b, 0xbed28a8a, 0xbe539f26, 0xbeec997d, 0xbee7a2cc, 
    0xbe2bbc6b, 0xbe9d4d7e, 0xbe1c1f0a, 0x3d7dbc17, 0xbe8878ef, 0x3e842c9c, 0x3ef7b605, 0x3dab58c9, 
    0xbe96520c, 0x3f0b46b9, 0x3ef0952f, 0xbd81e365, 0x3e296e60, 0x3e9aabd9, 0xbeb022ac, 0xbf01eda1, 
    0x3e886795, 0xbd767170, 0x3e5a25f6, 0x3f009d5b, 0x3eeebf15, 0xbe271110, 0xbcfb7756, 0x3e82052a, 
    0x3e61010c, 0xbe2c5caf, 0xbe9e4afd, 0x3eb2e195, 0xbcbc04c7, 0xbe4e4018, 0xbe17b4fc, 0xbe52ace3, 
    0x3edb82f6, 0x3ea9e668, 0xbec826c3, 0xbef66988, 0x3d5953ca, 0xbe8a0fc3, 0x3efc5df9, 0xbeae6923, 
    0x3cd098ef, 0x3e6e1cf3, 0xbeb58848, 0xbed73965, 0xbee6e9db, 0xbe9fe720, 0x3d2adc79, 0xbe3fab23, 
    0x3e0ed822, 0xbebe1fde, 0xbe7571ca, 0x3e8b09ac, 0xbd003e8d, 0xbd7f3630, 0xba5075d9, 0x3ebb4126, 
    0x3d4a606b, 0x3c8265d7, 0x3d9e3176, 0x3e9b7809, 0xbdfe216b, 0x3eb0501b, 0xbd69f802, 0xbe60fe4d, 
    0x3c45c742, 0xbc61396f, 0x3b2711f8, 0x3c1976a8, 0xbe76a3e9, 0xbd99461a, 0x3e0f0018, 0x3e4d5812, 
    0xbd50a405, 0x3c651dd4, 0xbe37ce3b, 0x3d1e16b4, 0xbdbef1b6, 0x3e7d77a2, 0x3e41dc2b, 0x3c4fb477, 
    0xbd985669, 0x3e2bf086, 0x3cb0a681, 0x3dbd9cdb, 0x3ccf11a0, 0xbd4b3cc1, 0xbec35402, 0xbe00dd42, 
    0x3e813698, 0x3e5285aa, 0x3d45dd6e, 0xbe99cc36, 0xbe7d1dd0, 0x3ea19df6, 0x3d82d6b9, 0x3e54940b, 
    0x3ec03677, 0xbe51d9dc, 0x3e04e787, 0xbe270c54, 0xbe5e07bc, 0x3d0c34c7, 0x3dbf1d57, 0xbeadcbff, 
    0x3e463111, 0x3dc78745, 0xbe205f71, 0xbe5d4da0, 0x3e17d769, 0xbede9073, 0xbe4f131e, 0xbe6f4908, 
    0xbe970624, 0x3e75ca10, 0xbe774c11, 0xbd4831d7, 0x3e288fe7, 0xbcfdc2cc, 0xbe9b017c, 0x3e984819, 
    0xbde1d23b, 0x3e4462c0, 0x3e5e63fc, 0x3d6650f2, 0x3e240be9, 0x3d5cf559, 0xbd9f5ad3, 0xbe313765, 
    0xbcc8e268, 0x3d931cb1, 0x3e88d488, 0x3e4509c1, 0xbe29fc9b, 0x3e375321, 0xbe12ac01, 0x3c3b0436, 
    0x3d344c92, 0xbda58d64, 0x3e81004e, 0x3c7ff22b, 0xbd8e768d, 0xbdf838b1, 0x3e7be715, 0x3bfc9f10, 
    0x3bd21a43, 0xbd3eb232, 0xbe9fd029, 0xbd7b3572, 0x3e470440, 0xbd4a2bf8, 0x3e5ab9a6, 0x3d4be8e4, 
    0x3e7560b8, 0x3e229143, 0x3e939044, 0x3e86479b, 0xbe8a948b, 0xbe5c612f, 0x3e2cc8be, 0x3daaeb8a, 
    0xbe845aa1, 0x3eb5109a, 0xbe7ae80a, 0x3d0fd13d, 0x3e495a9d, 0x3d975548, 0x3e2fe1ba, 0xbe62bb02, 
    0x3d45f8f1, 0x3d6c70e2, 0xbd9d92ad, 0x3e37cb25, 0xbe5d071f, 0x3ec3728e, 0x3e47f168, 0xbe500a5d, 
    0xbdfc9040, 0x3cd2e091, 0xbe58ec28, 0x3ca80475, 0xbe2ccc74, 0xbe427444, 0xbe639eea, 0xbe197945, 
    0xbe0bd1b6, 0xbe2051ca, 0x3de7e8af, 0x3d9c55eb, 0x3df169a1, 0xbd61f53e, 0xbc099af3, 0xbd65657b, 
    0x3e17f3e9, 0x3e87cd95, 0xbe05f414, 0x3e05e81c, 0xbe485cbe, 0x396a43a7, 0x3c9bdf23, 0xbd3fbffb, 
    0x3dec4653, 0xbe9ba99a, 0xbe2528c6, 0xbe3144ef, 0x3d189478, 0xbe00a8b4, 0xbdb278ec, 0xbda70f8c, 
    0x3df471bb, 0xbdf75d06, 0xbe633ff1, 0xbde08e70, 0xbe8a41eb, 0x3e089fe2, 0xbe6809df, 0x3e6faaea, 
    0x3e9adcbd, 0xbe1125cd, 0x3ea25c74, 0xbe5ede48, 0xbe159bbe, 0xbe72dda0, 0xbdb33c68, 0xbe4880bd, 
    0xbcaff52d, 0x3ea134d2, 0x3de9093a, 0x3d9309b0, 0x3e4ca4a3, 0xbd0fc9b4, 0xbcac5339, 0xbdefe07c, 
    0x3dc85e31, 0x3d034f03, 0x3e71e11d, 0xbe98052b, 0xbd4588fd, 0x3dd69cc2, 0x3dceffbe, 0x3cb30e3e, 
    0xbe0a3080, 0xbe8b9501, 0x3dce1e9e, 0xbe2cc186, 0x3b23a86c, 0xbde270b1, 0xbe895562, 0x3e16a46e, 
    0x3df5c6d9, 0x3e888b1c, 0x3dacff78, 0x3e8c0b31, 0xbe3f2475, 0x3de438f0, 0xbe4e7bdb, 0xbce6390a, 
    0xbd92d1c9, 0x3e166b94, 0xbdd38683, 0xbe425e1d, 0x3ccf562a, 0x3d02e4e6, 0xbe8e1839, 0x3e2154dc, 
    0xbe99fd16, 0x3e6a3aa8, 0x3e4c828c, 0x3e8232d4, 0x3ca9bf56, 0xbe003e8d, 0xbd9ecd75, 0x3eb2bde2, 
    0xbe07add3, 0xbd8f90f2, 0xbe25d4c0, 0xbe4886c9, 0x3b3d8b8a, 0xbe8f1415, 0x3ebaec69, 0x3e4b4755, 
    0xbb3d8013, 0x3e3d286b, 0xbdcc937f, 0xbe6c7501, 0x3e2242fd, 0x3cc522f1, 0x3e0594c6, 0xbe364593, 
    0xbea6e7be, 0x3ea7cb8f, 0x3d407df5, 0xbe3d1a9e, 0xbd66d74e, 0x3d6bd9b9, 0x3d95d1ab, 0xbe2d9e64, 
    0x3e50a14a, 0x3db9c2ff, 0xbe95677b, 0xbe1f2d6d, 0x3e067d3c, 0x3e374756, 0x3d82ce3e, 0x3e0458b2, 
    0xbd758c17, 0xbdc43807, 0xbdad0aaa, 0x3cdaba5d, 0x3d6523fd, 0xbe1dead5, 0x3eca0e49, 0x3d9c5ad3, 
    0xbe7a58eb, 0x3ebb96b5, 0x3e2daa81, 0x3de42aa3, 0xbe59154f, 0x3eabf124, 0x3c153942, 0xbe0872c7, 
    0xbe9611bf, 0x3e227478, 0xbe51605a, 0x3e0d4fc3, 0x3e377a99, 0xbd7397dc, 0xbe2c1a95, 0x3eac33e2, 
    0xbea3c647, 0x3eab9ec9, 0x3d8a8deb, 0xbe3125aa, 0x3e99f2c6, 0x3e7cd4b7, 0xbeb2a436, 0x3ec00056, 
    0xbd9902e7, 0xbe8bea0e, 0x3e49f87c, 0x3eb9409e, 0x3dbef0be, 0x3e33ead0, 0x3d2d8f24, 0xbea8d447, 
    0x3d9e45d5, 0xbe7a4010, 0xbe985101, 0xbd487ea8, 0x3e3ccefc, 0x3c9a3375, 0xbe84e872, 0xbe996a8a, 
    0x3de9a40e, 0xbe4f0b5c, 0x3e034732, 0x3da988e9, 0x3e0e7cad, 0xbe1ab1e7, 0x3d85f1e8, 0x3e8214df, 
    0xbe306078, 0x3e326804, 0x3c18ed29, 0x3da4a7dd, 0x3d3fe721, 0xbc909a0d, 0xbe1e1a96, 0x3cd742f1, 
    0xbe68a2a6, 0x3e8b7851, 0x3e163c0e, 0x3dd891b5, 0xbe84a300, 0x3e13bd87, 0xbedf0fa9, 0x3d66491a, 
    0x3df08024, 0x3e7e71c8, 0xbd575569, 0xbe5839eb, 0x3e8e0908, 0xbe82dbf9, 0x3db0a4be, 0xbe7f6f56, 
    0x3e80ef98, 0xbdb8fcc2, 0x3e85dd9d, 0xbe851e7d, 0xbc41774b, 0x3b0b6cea, 0xbec69415, 0xbdd923e6, 
    0xbd393136, 0x3e263c56, 0x3defabd0, 0x3ea5ba93, 0x3e01b961, 0xbea726ee, 0x3d795762, 0xbe000b44, 
    0xbec195ab, 0xbeb62337, 0x3e84cc4a, 0xbe731f4f, 0xbe7b31a4, 0x3d938133, 0x3e8a38d8, 0x3d02627d, 
    0x3e3f62f3, 0x3e98d3c7, 0xbe0b456b, 0x3e2dcbc8, 0x3d52c8b8, 0xbb083c14, 0x3cd0e2b1, 0xbd9c069b, 
    0x3cef0c2f, 0xbce2b43e, 0xbe8c0003, 0xbda70ee3, 0xbe5e0d26, 0xbe841cef, 0x3e40e219, 0xbcf02272, 
    0xbe8c36c1, 0xbe5dd9d3, 0x3e84e7ce, 0x3e00caf3, 0x3ea8deea, 0xbe1e6c1a, 0x3eb11baa, 0xbe048356, 
    0xbe292cf0, 0x3dbac40b, 0x3e9e63ad, 0xbd45ac86, 0xbe73ef1f, 0xbe0e0d7e, 0x3e6328ea, 0xbc3a28cc, 
    0xbe28a365, 0x3e7f268d, 0xbdaada0d, 0xbe4cc878, 0x3dfec950, 0xbc9c8f2b, 0x3e4fe08c, 0x3e003a48, 
    0xbe6616ae, 0x3e6a90fe, 0xbe55789d, 0xbcc391c4, 0x3e5ebcf6, 0x3e5bc727, 0xbe747a51, 0xbdd6cd34, 
    0x3c189d2e, 0x3ddef1cb, 0xbe815428, 0xbe30bf7a, 0x3d0920d9, 0xbe0d37ec, 0x3e049e3f, 0xbc1671ab, 
    0x3d49a845, 0x3e858726, 0xbe558a4d, 0xbdfb3024, 0xbe097ef1, 0x3cfcdef8, 0x3e5ef557, 0x3d4acb99, 
    0xbe2a4b12, 0xbe18c276, 0x3e23e94c, 0x3d73add6, 0x3e832719, 0xbda6af3c, 0x3e93d552, 0x3e715177, 
    0xbe248116, 0x3e762ed5, 0xbe61579a, 0xbe00e124, 0xbe63d243, 0xbccf6381, 0x3e76c5c0, 0xbe11f18f, 
    0x3da70715, 0xbe2514a5, 0x3debb1a0, 0xbe14ff12, 0x3e28c35e, 0xbe4eab2f, 0x3e9cccaa, 0x3d9bb137, 
    0xbe089ff4, 0x3e4169dc, 0x3ea22d43, 0xbdb7a24c, 0x3e7721fe, 0x3d7670eb, 0x3e41aa6e, 0x3ceaca6e, 
    0x3e190d2d, 0x3cbfbadc, 0x3e32fcd3, 0x3e4294ec, 0x3e668c82, 0xbe68930c, 0xbe8342ae, 0x3e04f9ab, 
    0xbd20ed98, 0xbe3316cf, 0x3c9e0a63, 0x3cdc3ed7, 0xbded0377, 0xbe3dd562, 0x3e800e86, 0xbe6df675, 
    0xbe330532, 0x3db20275, 0xbd9ba0f1, 0xbcb76145, 0x3d14e685, 0xbe6b4423, 0x3dab0991, 0x3e86f657, 
    0x3de7b51b, 0x3e2c7337, 0x3e500230, 0xbe0b40e4, 0xbdbce288, 0x3d342fc1, 0xbe2529c0, 0xbe52c37a, 
    0x3dad580c, 0xbdce6689, 0xbe617f5f, 0xbe903c94, 0x3de39e71, 0x3e8bd8f8, 0x3d763dd0, 0x3b9ee2d3, 
    0xbe1e723a, 0xbe79ef11, 0x3eb23540, 0xbde15127, 0xbe4b696d, 0x3db9ed86, 0xbdb28c03, 0x3ea51361, 
    0x3e1367d3, 0x3e452854, 0x3e7e5fdf, 0x3e93f2a6, 0x3e37b48e, 0xbd489d4e, 0xbdae2fad, 0x3e0aa1db, 
    0x3e32ec42, 0x3d94f36d, 0x3e5d1d72, 0x3ebea6ac, 0x3e5de878, 0xbea7cbbc, 0x3d0dd834, 0xbc74e6e7, 
    0x3d589fbb, 0x3e78785e, 0x3b80f500, 0xbe46fdc9, 0xbe06b577, 0xbe31c290, 0xbeca03d8, 0x3db78dc0, 
    0x3df6741f, 0x3e76e534, 0x3d0fc81a, 0x3e07db75, 0x3e28e02a, 0xbe9476c1, 0x3ea65f9c, 0x3d9296cd, 
    0xbd1648c6, 0x3e83b24d, 0x3e4aa38e, 0xbe872222, 0xbda8cf2c, 0x3db0fd8b, 0x3e0b1bf7, 0x3d37c5f1, 
    0xbda20ebd, 0xbdf9c239, 0xbe577b7a, 0xbde79467, 0x3e47816e, 0x3e0a877d, 0x3e86b5d4, 0x3d9c8f1f, 
    0xbe9d9f1f, 0x3e719838, 0xbc28b843, 0x3e94aca6, 0xbe2d45da, 0x3e748320, 0x3ba89a94, 0xbe22b85a, 
    0xbe7ba4b0, 0xbe95d1eb, 0x3e83df15, 0xbe7c5496, 0x3e94a20c, 0xbd97f0aa, 0x3e4162ed, 0x3ea9b0d4, 
    0x3eb0dd39, 0xbebc8cf0, 0xbea1c80c, 0x3e5db07a, 0x3dbfcf8d, 0xbe853850, 0xbe95a516, 0xbd8167b2, 
    0xbd131355, 0x3e9caa0a, 0xbde89fb4, 0xbe5c7a2c, 0x3dce2b39, 0x3e8ef762, 0x3dc28f1f, 0x3e04c4c0, 
    0x3db596af, 0xbe6f3698, 0xbe58ddbb, 0xbe7239a6, 0x3e822923, 0x3d675ecc, 0x3e97e5e5, 0xbe10fe8a, 
    0xbe5db3b8, 0xbc2f05e1, 0x3dd4ccc1, 0x3e549d38, 0x3e03c5a8, 0xbe79f424, 0xbe25516c, 0xbe8b489b, 
    0xbebd52d9, 0x3c64556e, 0xbe5a4a49, 0xbcbf6ee6, 0xbe7ae01d, 0x3e6b6362, 0xbca0285c, 0x3e287fa4, 
    0xbcb47919, 0xbeb70ebf, 0xbeafb67b, 0xbeb13c79, 0xbec92e40, 0xbe8fd3fe, 0x39f95e28, 0xbe689a3d, 
    0x3e9db1b4, 0xbe9ffb2f, 0x3df88b1e, 0xbdc6457c, 0x3e2e55bf, 0x3e8e3cff, 0x3e93f83f, 0x3eb04839, 
    0xbc8a64bc, 0xbea1971d, 0x3e65592b, 0xbde13292, 0x3ea4ccbf, 0x3e701e30, 0xbe1dfefe, 0x3e5bd1e5, 
    0xbdf388e2, 0xbea0aba7, 0xbe8155e0, 0xbeb1f9f0, 0xbd642883, 0x3bc5a91c, 0xbe6b1272, 0x3c93b1fe, 
    0xbdcf6731, 0x3e89d92d, 0x3ec8c186, 0xbed264fa, 0xbed2b572, 0x3db0af73, 0xbe4cd4ba, 0xbcc3275c, 
    0x3dd6fa28, 0xbcf987e2, 0x3d4ac0d6, 0x3ea70848, 0xbe95fa5f, 0xbe9d89ed, 0x3db8b51e, 0xbd7ca237, 
    0xbc13b9ae, 0xbe7108cc, 0x3de987ea, 0x3c365deb, 0xbe09f623, 0x3d93527c, 0xbd1a9fdb, 0xbb35bb19, 
    0xbdf154b7, 0x3db4eb58, 0x3e82e1a4, 0xbe0a0d7a, 0x3dddaed5, 0x3e37c37c, 0x3dda9270, 0x3e9d8c45, 
    0xbea538f6, 0xbe1d09dd, 0xbd0d2ba7, 0x3d0e2c85, 0xbe064c6d, 0x3e553b1f, 0xbe3d9da3, 0xbe81227f, 
    0x3e059517, 0xbe8090fa, 0xbe21278c, 0xbe58dcb2, 0x3e63f44a, 0x3eab1d14, 0x3e9a9db4, 0x3e83aaa4, 
    0x3e9704e2, 0x3c68cdb7, 0xbe8004a7, 0xbc31eea8, 0x3e1688bc, 0x3c466c30, 0x3df03a79, 0x3e3aaa59, 
    0xbea89130, 0x3d8bdf1c, 0xbeb24262, 0x3e3f5fe2, 0x3df96766, 0xbe3f46eb, 0xbe75da70, 0xbd2927b9, 
    0x3d549bda, 0xbe88c932, 0x3db28eab, 0xbe35b487, 0x3e8775df, 0xbd881c69, 0xbd041224, 0xbc08f85f, 
    0xbec8338d, 0xbdfbe57f, 0xbc2ba451, 0x3dacedf7, 0x3e6047e5, 0x3e6b729b, 0x3b74ade2, 0xbdeba242, 
    0xbd0a2740, 0xbe70265a, 0x3c94dfaf, 0x3e42bc2a, 0x3e4968e8, 0xbd9a48ad, 0xbe03b264, 0x3df10275, 
    0x3dee03dd, 0xbe074a9a, 0xbe7152b9, 0xbe5be4b2, 0xbd8a5b7d, 0xbdf1ef96, 0x3e3f5de2, 0x3e4eaf70, 
    0x3e393f6e, 0xbdb82480, 0x3e49c144, 0xbcb5f82f, 0xbe930a4e, 0xbe01be57, 0x3ea45870, 0xbdd5a731, 
    0x3e932058, 0xbea22060, 0x3e70c3b8, 0xbd9d0715, 0x3d6f6893, 0x3e823fb8, 0xbe2f67d6, 0x3e5e9797, 
    0xbd8f1093, 0x3e355e60, 0x3d529ec3, 0x3e0ee851, 0xbe46ca43, 0xbdd81c86, 0xbdd38d5b, 0xbbfadca0, 
    0x3e6974f8, 0xbd3188af, 0xbe44b612, 0xbe9cd9f9, 0x3e931612, 0xbe1a5124, 0xbe163e39, 0x3e94f470, 
    0xbe970d9d, 0xbe32fb1c, 0xbc55964f, 0x3e9f10a9, 0xbe2ffe36, 0x3dfa5998, 0x3db9da52, 0x3e036113, 
    0xbe983da4, 0xbe807a9d, 0x3e941802, 0xbe473e83, 0xbda066ca, 0x3e7e49cf, 0x3e1a02c4, 0xbd2bc5a5, 
    0x3e95d326, 0xbd09d68f, 0xbdf8e341, 0x3dfd47e9, 0x3e51859b, 0x3ef600f3, 0xbea3fbdb, 0x3d884ad1, 
    0x3ed35aa6, 0xbeaf9b1d, 0x3e1f13c5, 0x3bcce6d5, 0xbea1fa03, 0xbe1cb875, 0xbd3b25d1, 0xbe00f64c, 
    0x3e77fb9f, 0xbd900336, 0x3e23d311, 0xbcdb71a4, 0xbd67f107, 0xbdb5aadb, 0xbd7096c6, 0xbe2fc638, 
    0xbdd5ac6b, 0x3e9548b2, 0xbea658d4, 0xbed3ee92, 0xbe659b2a, 0x3dcac582, 0x3d2936d4, 0x3e6cd71c, 
    0xbe4615a7, 0x3e87ce1c, 0xbe0fc030, 0xbea38240, 0xbecdd4a3, 0xbe00432d, 0xbc1372f3, 0xbe0d5b94, 
    0x3e2be206, 0x3effadeb, 0x3e9bcc30, 0xbe3930d8, 0x3dda3447, 0x3e868c47, 0xbe45190b, 0x3e28525b, 
    0xbe3eb598, 0x3e34249b, 0x3d694e05, 0x3ea77b14, 0xbda49896, 0x3dc1705b, 0x3dd8abd7, 0xbd301bbc, 
    0xbe95064b, 0xbdcf106a, 0xbeb21678, 0xbe6172bf, 0xbe85f5af, 0x3d03c654, 0x3eb3343e, 0x3e5ed6b0, 
    0x3e6a80e9, 0x3ecd2b49, 0x3e61f0af, 0x3d751a9a, 0xbe4c8f48, 0x3db9393c, 0xbe3068c2, 0x3e716668, 
    0xbe833ad2, 0x3d9f3ffa, 0xbe2add39, 0x3d8f0f45, 0xbb97fe31, 0x3dd1135b, 0x3e635256, 0x3ea22ad1, 
    0xbd8ad15c, 0x3ec4cb87, 0xbdaaaf14, 0x3d71c390, 0x3e95e356, 0x3ebb4a2a, 0xbdc8ea52, 0xbea5ec91, 
    0xbeacc6b4, 0xbe1f3885, 0xbeb494db, 0x3e84edd3, 0x3e8d0317, 0xbea6157e, 0xbcf8b3c1, 0x3d153b23
};

static const uint32_t _K48[] = {
    0xbe25aa9d, 0xbf30d1e6, 0x3e9ecfbf, 0xbf82666b, 0xbd80c1b9, 0x3ea82578, 0x3e0fdd27, 0x3ee0d6e8, 
    0x3e24b87b, 0x3f5408b0, 0x3f5a9937, 0xbbf28d84, 0x3e170b3c, 0xbea9c02f, 0x3f004459, 0x3f838661, 
    0xbeb5c14a, 0x3ea6c41a, 0xbf858764, 0x3f3f9510, 0x3e9016e2, 0xbf3f96b1, 0x3f527a6e, 0xbf759e20, 
    0xbe4acbcf, 0xbe28a55e, 0xbf69410c, 0xbf59bb93, 0x3e900d9f, 0x3d991635, 0xbf61db09, 0x3d473caa
};

static const uint32_t _K54[] = {
    0x3d5ce146, 0xbe0a94b6, 0xbeacc07d, 0x3ea1627c, 0xbea2dbf8, 0xbdf5f425, 0xbe9aa384, 0xbebaac79, 
    0x3eb5534f, 0x3d16b165, 0x3b213997, 0xbe79e246, 0x3e433c1a, 0x3edc0961, 0x3dc18019, 0xbec9748b, 
    0xbe7c861e, 0x3e3fc98a, 0x3e869fd3, 0xbda2115c, 0xbedaeacd, 0x3e9f02c0, 0xbe0ecd22, 0x3df48f88, 
    0xbec3b8df, 0xbe336731, 0xbd116954, 0x3e7c9853, 0x3e867c3a, 0xbcf2920a, 0x3dbb7491, 0xbe535802, 
    0xbeba0ad0, 0xbed20d73, 0xbe131e1f, 0xbdd41acd, 0x3ea1e0ca, 0xbee3764c, 0x3e78d4c4, 0xbdca075e, 
    0xbd0bb77a, 0x3ea71f1e, 0x3ebaa4d2, 0x3dd31765, 0xbe8224a0, 0x3e4400f0, 0x3e88d1da, 0x3ecbacf5, 
    0x3eb1365b, 0xbe679e38, 0xbd7f554c, 0x3eade0aa, 0xbe9f2bcd, 0xbeba79a1, 0xbc2712e9, 0xbe93a86b, 
    0x3e734cdf, 0xbeeaf422, 0xbe6ed46c, 0xbe8bacd7, 0x3ebbc5ac, 0x3dddfbd8, 0xbd571b82, 0x3e1f9e2d
};

static const uint32_t _K56[] = {
    0x3c2fd0fd, 0xbc2fd10b
};

// Memory mapped buffers
#define _K13             ((int *)_K13)                       // s32[32] (128 bytes) 
#define _K21             ((float *)_K21)                     // f32[13,3,30] (4680 bytes) 
#define _K22             ((float *)_K22)                     // f32[13] (52 bytes) 
#define _K25             ((float *)_K25)                     // f32[16,3,13] (2496 bytes) 
#define _K28             ((float *)_K28)                     // f32[16] (64 bytes) 
#define _K32             ((float *)_K32)                     // f32[16,3,16] (3072 bytes) 
#define _K34             ((float *)_K34)                     // f32[16,3,16] (3072 bytes) 
#define _K37             ((float *)_K37)                     // f32[16] (64 bytes) 
#define _K43             ((float *)_K43)                     // f32[32,3,16] (6144 bytes) 
#define _K45             ((float *)_K45)                     // f32[32,3,32] (12288 bytes) 
#define _K48             ((float *)_K48)                     // f32[32] (128 bytes) 
#define _K54             ((float *)_K54)                     // f32[2,32] (256 bytes) 
#define _K56             ((float *)_K56)                     // f32[2] (8 bytes) 
#define _K6              ((float *)_K6)                      // f32[512] (2048 bytes) 
#define _K10             ((float *)(_state + 0x00003300))    // f32[258] (1032 bytes) 
#define _K19             ((int8_t *)(_state + 0x000018d0))   // s8[6608] (6608 bytes) 
#define _K5              ((int8_t *)(_state + 0x00000000))   // s8[6352] (6352 bytes) 
#define _K9              ((int *)(_state + 0x000032a0))      // s32[24] (96 bytes) 
#define _K11             ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K12             ((float *)(_buffer + 0x00000000))   // f32[257] (1028 bytes) 
#define _K14             ((float *)(_buffer + 0x00000404))   // f32[30] (120 bytes) 
#define _K15             ((float *)(_buffer + 0x00000000))   // f32[30] (120 bytes) 
#define _K16             ((float *)(_buffer + 0x00000078))   // f32[30] (120 bytes) 
#define _K17             ((float *)(_buffer + 0x00000000))   // f32[50,30] (6000 bytes) 
#define _K23             ((float *)(_buffer + 0x00001770))   // f32[24,13] (1248 bytes) 
#define _K24             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K26             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K3              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K30             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K31             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K33             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K35             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K4              ((float *)(_buffer + 0x00000800))   // f32[2] (8 bytes) 
#define _K41             ((float *)(_buffer + 0x00000300))   // f32[6,16] (384 bytes) 
#define _K42             ((float *)(_buffer + 0x00000000))   // f32[6,32] (768 bytes) 
#define _K44             ((float *)(_buffer + 0x00000300))   // f32[6,32] (768 bytes) 
#define _K46             ((float *)(_buffer + 0x00000000))   // f32[6,32] (768 bytes) 
#define _K50             ((float *)(_buffer + 0x00000300))   // f32[6,32] (768 bytes) 
#define _K52             ((float *)(_buffer + 0x00000000))   // f32[3,32] (384 bytes) 
#define _K53             ((float *)(_buffer + 0x00000180))   // f32[32] (128 bytes) 
#define _K55             ((float *)(_buffer + 0x00000000))   // f32[2] (8 bytes) 
#define _K57             ((float *)(_buffer + 0x00000008))   // f32[2] (8 bytes) 
#define _K7              ((float *)(_buffer + 0x00000808))   // f32[512] (2048 bytes) 
#define _K8              ((float *)(_buffer + 0x00001008))   // f32[257,2] (2056 bytes) 

// Represents a Circular Buffer
// https://en.wikipedia.org/wiki/Circular_buffer
typedef struct
{
	char *buf;
	int size;		// total bytes allocated in *buf
	int used;		// current bytes used in buffer.
	int read;
	int write;
} cbuffer_t;

#define CBUFFER_SUCCESS 0
#define CBUFFER_NOMEM -1

// Initializes a cbuffer handle with given memory and size.
static inline void cbuffer_init(cbuffer_t *dest, void *mem, int size) {
	dest->buf = mem;
	dest->size = size;
	dest->used = 0;
	dest->read = 0;
	dest->write = 0;
}

// Returns the number of free bytes in buffer.
static inline int cbuffer_get_free(cbuffer_t *buf) {
	return buf->size - buf->used;
}

// Returns the number of used bytes in buffer.
static inline int cbuffer_get_used(cbuffer_t *buf) {
	return buf->used;
}

// Writes given data to buffer.
// Returns CBUFFER_SUCCESS or CBUFFER_NOMEM if out of memory.
static inline int cbuffer_enqueue(cbuffer_t *buf, const void *data, int data_size) {
	int free = cbuffer_get_free(buf);

	// Out of memory?
	if (free < data_size)
		return CBUFFER_NOMEM;

	// Is the data split in the end?
	if (buf->write + data_size > buf->size) {
		int first_size = buf->size - buf->write;
		memcpy(buf->buf + buf->write, data, first_size);
		memcpy(buf->buf, ((char *)data) + first_size, data_size - first_size);
	}
	else {
		memcpy(buf->buf + buf->write, data, data_size);
	}
	buf->write += data_size;
	if (buf->write >= buf->size)
		buf->write -= buf->size;

	buf->used += data_size;
	return CBUFFER_SUCCESS;
}

// Advances the read pointer by given count.
// Returns CBUFFER_SUCCESS on success or CBUFFER_NOMEM if count is more than available data
static inline int cbuffer_advance(cbuffer_t *buf, int count) {
	int used = cbuffer_get_used(buf);

	if (count > used)
		return CBUFFER_NOMEM;

	buf->read += count;
	if (buf->read >= buf->size)
		buf->read -= buf->size;

	// Reset pointers to 0 if buffer is empty in order to avoid unwanted wrapps.
	if (buf->read == buf->write) {
		buf->read = 0;
		buf->write = 0;
	}

	buf->used -= count;
	return CBUFFER_SUCCESS;
}

// Reset instance (clear buffer)
static inline void cbuffer_reset(cbuffer_t *buf) {
	buf->read = 0;
	buf->write = 0;
	buf->used = 0;
}

// Copies given "count" bytes to the "dst" buffer without advancing the buffer read offset.
// Returns CBUFFER_SUCCESS on success or CBUFFER_NOMEM if count is more than available data.
static inline int cbuffer_copyto(cbuffer_t *buf, void *dst, int count, int offset) {
	
	if (count > cbuffer_get_used(buf))
		return CBUFFER_NOMEM;

	int a0 = buf->read + offset;
	if (a0 >= buf->size)
		a0 -= buf->size;

	int c0 = count;
	if (a0 + c0 > buf->size)
		c0 = buf->size - a0;
	
	memcpy(dst, buf->buf + a0, c0);
	
	int c1 = count - c0;

	if (c1 > 0)
		memcpy(((char *)dst) + c0, buf->buf, c1);

	return CBUFFER_SUCCESS;
}

// Returns a read pointer at given offset and  
// updates *can_read_bytes (if not NULL) with the number of bytes that can be read.
// 
// Note! Byte count written to can_read_bytes can be less than what cbuffer_get_used() returns.
// This happens when the read has to be split in two since it's a circular buffer.
static inline void *cbuffer_readptr(cbuffer_t* buf, int offset, int *can_read_bytes)
{
	int a0 = buf->read + offset;
	if (a0 >= buf->size)
		a0 -= buf->size;
	if (can_read_bytes != NULL)
	{
		int c0 = buf->used;
		if (a0 + c0 > buf->size)
			c0 = buf->size - a0;

		*can_read_bytes = c0;
	}
	return buf->buf + a0;
}

typedef struct {
	cbuffer_t data_buffer;			// Circular Buffer for features
	cbuffer_t time_buffer;			// Circular Buffer for timestamps. Contains min,max for each input chunk
	int input_size;					// Number of bytes in each input chunk
	int window_count;				// Number of input chunks in output window.
} fixwin_t;

typedef float timestamp_t;
#define TIMESTAMP_MAX FLT_MAX
#define TIMESTAMP_MIN (-FLT_MAX)

#ifdef _MSC_VER
static_assert(sizeof(fixwin_t) <= 64, "Data structure 'fixwin_t' is too big");
#endif

#define IPWIN_RET_SUCCESS 0
#define IPWIN_RET_NODATA -1
#define IPWIN_RET_NOMEM -2

/*
* Try to dequeue a window.
*
* @param handle Pointer to an initialized handle.
* @param dst Pointer where to write window.
* @param stride_count Number of items (of size handle->input_size) to stride window.
* @param time pointer to float[2] array where to write min and max timestamp.
* @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NODATA (-1) is no data is available.
*/
static inline int fixwin_dequeuef32(void* restrict handle, void* restrict dst, int stride_count, void* restrict time)
{
	fixwin_t* fep = (fixwin_t*)handle;

	const int win_count = fep->window_count;
	const int size = win_count * fep->input_size;
	if (cbuffer_get_used(&fep->data_buffer) >= size) {
		if (cbuffer_copyto(&fep->data_buffer, dst, size, 0) != 0)
			return IPWIN_RET_NOMEM;
		
		if (cbuffer_advance(&fep->data_buffer, stride_count * fep->input_size) != 0)
			return IPWIN_RET_NOMEM;

		if (fep->time_buffer.used < win_count * 2 * sizeof(timestamp_t))
			return IPWIN_RET_NOMEM;

		timestamp_t min = TIMESTAMP_MAX;
		timestamp_t max = TIMESTAMP_MIN;
		cbuffer_t* time_buf = &fep->time_buffer;
		for(int i = 0; i < win_count * 2; i++)
		{			
			const timestamp_t value = *(timestamp_t*)cbuffer_readptr(time_buf, i * sizeof(timestamp_t), NULL);
			if (value > max)
				max = value;
			if (value < min)
				min = value;
		}
		((timestamp_t *)time)[0] = min;
		((timestamp_t *)time)[1] = max;
		
		if (cbuffer_advance(time_buf, stride_count * 2 * sizeof(timestamp_t)) != 0)
			return IPWIN_RET_NOMEM;
		
		return IPWIN_RET_SUCCESS;
	}
	return IPWIN_RET_NODATA;
}

static inline void hannmul_f32(const float* restrict a, const float* restrict b, float* restrict result, int d0, int d1)
{
	for (int j = 0; j < d1; j++) {
		for (int i = 0; i < d0; i++) {
			*result++ = *a++ * b[i];
		}
	}
}

static void makeipt(int nw, int *ip)
{
    int j, l, m, m2, p, q;
    
    ip[2] = 0;
    ip[3] = 16;
    m = 2;
    for (l = nw; l > 32; l >>= 2) {
        m2 = m << 1;
        q = m2 << 3;
        for (j = m; j < m2; j++) {
            p = ip[j] << 2;
            ip[m + j] = p;
            ip[m2 + j] = p + q;
        }
        m = m2;
    }
}

static void makewt(int nw, int *ip, float *w)
{
    void makeipt(int nw, int *ip);
    int j, nwh, nw0, nw1;
    float delta, wn4r, wk1r, wk1i, wk3r, wk3i;
    
    ip[0] = nw;
    ip[1] = 1;
    if (nw > 2) {
        nwh = nw >> 1;
        delta = atan(1.0) / nwh;
        wn4r = cos(delta * nwh);
        w[0] = 1;
        w[1] = wn4r;
        if (nwh == 4) {
            w[2] = cos(delta * 2);
            w[3] = sin(delta * 2);
        } else if (nwh > 4) {
            makeipt(nw, ip);
            w[2] = 0.5 / cos(delta * 2);
            w[3] = 0.5 / cos(delta * 6);
            for (j = 4; j < nwh; j += 4) {
                w[j] = cos(delta * j);
                w[j + 1] = sin(delta * j);
                w[j + 2] = cos(3 * delta * j);
                w[j + 3] = -sin(3 * delta * j);
            }
        }
        nw0 = 0;
        while (nwh > 2) {
            nw1 = nw0 + nwh;
            nwh >>= 1;
            w[nw1] = 1;
            w[nw1 + 1] = wn4r;
            if (nwh == 4) {
                wk1r = w[nw0 + 4];
                wk1i = w[nw0 + 5];
                w[nw1 + 2] = wk1r;
                w[nw1 + 3] = wk1i;
            } else if (nwh > 4) {
                wk1r = w[nw0 + 4];
                wk3r = w[nw0 + 6];
                w[nw1 + 2] = 0.5 / wk1r;
                w[nw1 + 3] = 0.5 / wk3r;
                for (j = 4; j < nwh; j += 4) {
                    wk1r = w[nw0 + 2 * j];
                    wk1i = w[nw0 + 2 * j + 1];
                    wk3r = w[nw0 + 2 * j + 2];
                    wk3i = w[nw0 + 2 * j + 3];
                    w[nw1 + j] = wk1r;
                    w[nw1 + j + 1] = wk1i;
                    w[nw1 + j + 2] = wk3r;
                    w[nw1 + j + 3] = wk3i;
                }
            }
            nw0 = nw1;
        }
    }
}

static void makect(int nc, int *ip, float *c)
{
    int j, nch;
    float delta;
    
    ip[1] = nc;
    if (nc > 1) {
        nch = nc >> 1;
        delta = atan(1.0) / nch;
        c[0] = cos(delta * nch);
        c[nch] = 0.5 * c[0];
        for (j = 1; j < nch; j++) {
            c[j] = 0.5 * cos(delta * j);
            c[nc - j] = 0.5 * sin(delta * j);
        }
    }
}

static void bitrv2(int n, int *ip, float *a)
{
    int j, j1, k, k1, l, m, nh, nm;
    float xr, xi, yr, yi;
    
    m = 1;
    for (l = n >> 2; l > 8; l >>= 2) {
        m <<= 1;
    }
    nh = n >> 1;
    nm = 4 * m;
    if (l == 8) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + 2 * ip[m + k];
                k1 = 4 * k + 2 * ip[m + j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + 2 * ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 += 2 * nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 -= nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= 2;
            k1 -= nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nh + 2;
            k1 += nh + 2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= nh - nm;
            k1 += 2 * nm - 2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    } else {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + ip[m + k];
                k1 = 4 * k + ip[m + j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 += nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    }
}

static void bitrv216(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x7r, x7i, x8r, x8i, x10r, x10i, 
        x11r, x11i, x12r, x12i, x13r, x13i, x14r, x14i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    a[2] = x8r;
    a[3] = x8i;
    a[4] = x4r;
    a[5] = x4i;
    a[6] = x12r;
    a[7] = x12i;
    a[8] = x2r;
    a[9] = x2i;
    a[10] = x10r;
    a[11] = x10i;
    a[14] = x14r;
    a[15] = x14i;
    a[16] = x1r;
    a[17] = x1i;
    a[20] = x5r;
    a[21] = x5i;
    a[22] = x13r;
    a[23] = x13i;
    a[24] = x3r;
    a[25] = x3i;
    a[26] = x11r;
    a[27] = x11i;
    a[28] = x7r;
    a[29] = x7i;
}

static void bitrv208(float *a)
{
    float x1r, x1i, x3r, x3i, x4r, x4i, x6r, x6i;
    
    x1r = a[2];
    x1i = a[3];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x6r = a[12];
    x6i = a[13];
    a[2] = x4r;
    a[3] = x4i;
    a[6] = x6r;
    a[7] = x6i;
    a[8] = x1r;
    a[9] = x1i;
    a[12] = x3r;
    a[13] = x3i;
}

static void cftf1st(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, 
        wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i + w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = a[j + 3] + a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = a[j + 3] - a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = a[j0 - 1] + a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = a[j0 - 1] - a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = a[j0 - 1] + a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = a[j0 - 1] - a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i + x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = a[j0 + 3] + a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = a[j0 + 3] - a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i + x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftmdl1(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, wk1r, wk1i, wk3r, wk3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    k = 0;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
    }
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
}

static void cftmdl2(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, kr, m, mh;
    float wn4r, wk1r, wk1i, wk3r, wk3i, wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, y0r, y0i, y2r, y2i;
    
    mh = n >> 3;
    m = 2 * mh;
    wn4r = w[1];
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] - a[j2 + 1];
    x0i = a[1] + a[j2];
    x1r = a[0] + a[j2 + 1];
    x1i = a[1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wn4r * (x2r - x2i);
    y0i = wn4r * (x2i + x2r);
    a[0] = x0r + y0r;
    a[1] = x0i + y0i;
    a[j1] = x0r - y0r;
    a[j1 + 1] = x0i - y0i;
    y0r = wn4r * (x3r - x3i);
    y0i = wn4r * (x3i + x3r);
    a[j2] = x1r - y0i;
    a[j2 + 1] = x1i + y0r;
    a[j3] = x1r + y0i;
    a[j3 + 1] = x1i - y0r;
    k = 0;
    kr = 2 * m;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = w[k + 3];
        kr -= 4;
        wd1i = w[kr];
        wd1r = w[kr + 1];
        wd3i = w[kr + 2];
        wd3r = w[kr + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] - a[j2 + 1];
        x0i = a[j + 1] + a[j2];
        x1r = a[j] + a[j2 + 1];
        x1i = a[j + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wk1r * x0r - wk1i * x0i;
        y0i = wk1r * x0i + wk1i * x0r;
        y2r = wd1r * x2r - wd1i * x2i;
        y2i = wd1r * x2i + wd1i * x2r;
        a[j] = y0r + y2r;
        a[j + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wk3r * x1r + wk3i * x1i;
        y0i = wk3r * x1i - wk3i * x1r;
        y2r = wd3r * x3r + wd3i * x3i;
        y2i = wd3r * x3i - wd3i * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] - a[j2 + 1];
        x0i = a[j0 + 1] + a[j2];
        x1r = a[j0] + a[j2 + 1];
        x1i = a[j0 + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wd1i * x0r - wd1r * x0i;
        y0i = wd1i * x0i + wd1r * x0r;
        y2r = wk1i * x2r - wk1r * x2i;
        y2i = wk1i * x2i + wk1r * x2r;
        a[j0] = y0r + y2r;
        a[j0 + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wd3i * x1r + wd3r * x1i;
        y0i = wd3i * x1i - wd3r * x1r;
        y2r = wk3i * x3r + wk3r * x3i;
        y2i = wk3i * x3i - wk3r * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
    }
    wk1r = w[m];
    wk1i = w[m + 1];
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] - a[j2 + 1];
    x0i = a[j0 + 1] + a[j2];
    x1r = a[j0] + a[j2 + 1];
    x1i = a[j0 + 1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wk1r * x0r - wk1i * x0i;
    y0i = wk1r * x0i + wk1i * x0r;
    y2r = wk1i * x2r - wk1r * x2i;
    y2i = wk1i * x2i + wk1r * x2r;
    a[j0] = y0r + y2r;
    a[j0 + 1] = y0i + y2i;
    a[j1] = y0r - y2r;
    a[j1 + 1] = y0i - y2i;
    y0r = wk1i * x1r - wk1r * x1i;
    y0i = wk1i * x1i + wk1r * x1r;
    y2r = wk1r * x3r - wk1i * x3i;
    y2i = wk1r * x3i + wk1i * x3r;
    a[j2] = y0r - y2r;
    a[j2 + 1] = y0i - y2i;
    a[j3] = y0r + y2r;
    a[j3 + 1] = y0i + y2i;
}

static int cfttree(int n, int j, int k, float *a, int nw, float *w)
{
    void cftmdl1(int n, float *a, float *w);
    void cftmdl2(int n, float *a, float *w);
    int i, isplt, m;
    
    if ((k & 3) != 0) {
        isplt = k & 1;
        if (isplt != 0) {
            cftmdl1(n, &a[j - n], &w[nw - (n >> 1)]);
        } else {
            cftmdl2(n, &a[j - n], &w[nw - n]);
        }
    } else {
        m = n;
        for (i = k; (i & 3) == 0; i >>= 2) {
            m <<= 2;
        }
        isplt = i & 1;
        if (isplt != 0) {
            while (m > 128) {
                cftmdl1(m, &a[j - m], &w[nw - (m >> 1)]);
                m >>= 2;
            }
        } else {
            while (m > 128) {
                cftmdl2(m, &a[j - m], &w[nw - m]);
                m >>= 2;
            }
        }
    }
    return isplt;
}

static void cftf161(float *a, float *w)
{
    float wn4r, wk1r, wk1i, 
        x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i, 
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i, 
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;
    
    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    x0r = a[0] + a[16];
    x0i = a[1] + a[17];
    x1r = a[0] - a[16];
    x1i = a[1] - a[17];
    x2r = a[8] + a[24];
    x2i = a[9] + a[25];
    x3r = a[8] - a[24];
    x3i = a[9] - a[25];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y4r = x0r - x2r;
    y4i = x0i - x2i;
    y8r = x1r - x3i;
    y8i = x1i + x3r;
    y12r = x1r + x3i;
    y12i = x1i - x3r;
    x0r = a[2] + a[18];
    x0i = a[3] + a[19];
    x1r = a[2] - a[18];
    x1i = a[3] - a[19];
    x2r = a[10] + a[26];
    x2i = a[11] + a[27];
    x3r = a[10] - a[26];
    x3i = a[11] - a[27];
    y1r = x0r + x2r;
    y1i = x0i + x2i;
    y5r = x0r - x2r;
    y5i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y9r = wk1r * x0r - wk1i * x0i;
    y9i = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y13r = wk1i * x0r - wk1r * x0i;
    y13i = wk1i * x0i + wk1r * x0r;
    x0r = a[4] + a[20];
    x0i = a[5] + a[21];
    x1r = a[4] - a[20];
    x1i = a[5] - a[21];
    x2r = a[12] + a[28];
    x2i = a[13] + a[29];
    x3r = a[12] - a[28];
    x3i = a[13] - a[29];
    y2r = x0r + x2r;
    y2i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y10r = wn4r * (x0r - x0i);
    y10i = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y14r = wn4r * (x0r + x0i);
    y14i = wn4r * (x0i - x0r);
    x0r = a[6] + a[22];
    x0i = a[7] + a[23];
    x1r = a[6] - a[22];
    x1i = a[7] - a[23];
    x2r = a[14] + a[30];
    x2i = a[15] + a[31];
    x3r = a[14] - a[30];
    x3i = a[15] - a[31];
    y3r = x0r + x2r;
    y3i = x0i + x2i;
    y7r = x0r - x2r;
    y7i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y11r = wk1i * x0r - wk1r * x0i;
    y11i = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y15r = wk1r * x0r - wk1i * x0i;
    y15i = wk1r * x0i + wk1i * x0r;
    x0r = y12r - y14r;
    x0i = y12i - y14i;
    x1r = y12r + y14r;
    x1i = y12i + y14i;
    x2r = y13r - y15r;
    x2i = y13i - y15i;
    x3r = y13r + y15r;
    x3i = y13i + y15i;
    a[24] = x0r + x2r;
    a[25] = x0i + x2i;
    a[26] = x0r - x2r;
    a[27] = x0i - x2i;
    a[28] = x1r - x3i;
    a[29] = x1i + x3r;
    a[30] = x1r + x3i;
    a[31] = x1i - x3r;
    x0r = y8r + y10r;
    x0i = y8i + y10i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    x3r = y9r - y11r;
    x3i = y9i - y11i;
    a[16] = x0r + x2r;
    a[17] = x0i + x2i;
    a[18] = x0r - x2r;
    a[19] = x0i - x2i;
    a[20] = x1r - x3i;
    a[21] = x1i + x3r;
    a[22] = x1r + x3i;
    a[23] = x1i - x3r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x3r = wn4r * (x0r - x0i);
    x3i = wn4r * (x0i + x0r);
    x0r = y4r - y6i;
    x0i = y4i + y6r;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    a[8] = x0r + x2r;
    a[9] = x0i + x2i;
    a[10] = x0r - x2r;
    a[11] = x0i - x2i;
    a[12] = x1r - x3i;
    a[13] = x1i + x3r;
    a[14] = x1r + x3i;
    a[15] = x1i - x3r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    x3r = y1r - y3r;
    x3i = y1i - y3i;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x0r - x2r;
    a[3] = x0i - x2i;
    a[4] = x1r - x3i;
    a[5] = x1i + x3r;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftf162(float *a, float *w)
{
    float wn4r, wk1r, wk1i, wk2r, wk2i, wk3r, wk3i, 
        x0r, x0i, x1r, x1i, x2r, x2i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i, 
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i, 
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;
    
    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    wk3r = w[6];
    wk3i = -w[7];
    wk2r = w[8];
    wk2i = w[9];
    x1r = a[0] - a[17];
    x1i = a[1] + a[16];
    x0r = a[8] - a[25];
    x0i = a[9] + a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y0r = x1r + x2r;
    y0i = x1i + x2i;
    y4r = x1r - x2r;
    y4i = x1i - x2i;
    x1r = a[0] + a[17];
    x1i = a[1] - a[16];
    x0r = a[8] + a[25];
    x0i = a[9] - a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y8r = x1r - x2i;
    y8i = x1i + x2r;
    y12r = x1r + x2i;
    y12i = x1i - x2r;
    x0r = a[2] - a[19];
    x0i = a[3] + a[18];
    x1r = wk1r * x0r - wk1i * x0i;
    x1i = wk1r * x0i + wk1i * x0r;
    x0r = a[10] - a[27];
    x0i = a[11] + a[26];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y1r = x1r + x2r;
    y1i = x1i + x2i;
    y5r = x1r - x2r;
    y5i = x1i - x2i;
    x0r = a[2] + a[19];
    x0i = a[3] - a[18];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[10] + a[27];
    x0i = a[11] - a[26];
    x2r = wk1r * x0r + wk1i * x0i;
    x2i = wk1r * x0i - wk1i * x0r;
    y9r = x1r - x2r;
    y9i = x1i - x2i;
    y13r = x1r + x2r;
    y13i = x1i + x2i;
    x0r = a[4] - a[21];
    x0i = a[5] + a[20];
    x1r = wk2r * x0r - wk2i * x0i;
    x1i = wk2r * x0i + wk2i * x0r;
    x0r = a[12] - a[29];
    x0i = a[13] + a[28];
    x2r = wk2i * x0r - wk2r * x0i;
    x2i = wk2i * x0i + wk2r * x0r;
    y2r = x1r + x2r;
    y2i = x1i + x2i;
    y6r = x1r - x2r;
    y6i = x1i - x2i;
    x0r = a[4] + a[21];
    x0i = a[5] - a[20];
    x1r = wk2i * x0r - wk2r * x0i;
    x1i = wk2i * x0i + wk2r * x0r;
    x0r = a[12] + a[29];
    x0i = a[13] - a[28];
    x2r = wk2r * x0r - wk2i * x0i;
    x2i = wk2r * x0i + wk2i * x0r;
    y10r = x1r - x2r;
    y10i = x1i - x2i;
    y14r = x1r + x2r;
    y14i = x1i + x2i;
    x0r = a[6] - a[23];
    x0i = a[7] + a[22];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[14] - a[31];
    x0i = a[15] + a[30];
    x2r = wk1i * x0r - wk1r * x0i;
    x2i = wk1i * x0i + wk1r * x0r;
    y3r = x1r + x2r;
    y3i = x1i + x2i;
    y7r = x1r - x2r;
    y7i = x1i - x2i;
    x0r = a[6] + a[23];
    x0i = a[7] - a[22];
    x1r = wk1i * x0r + wk1r * x0i;
    x1i = wk1i * x0i - wk1r * x0r;
    x0r = a[14] + a[31];
    x0i = a[15] - a[30];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y11r = x1r + x2r;
    y11i = x1i + x2i;
    y15r = x1r - x2r;
    y15i = x1i - x2i;
    x1r = y0r + y2r;
    x1i = y0i + y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    a[0] = x1r + x2r;
    a[1] = x1i + x2i;
    a[2] = x1r - x2r;
    a[3] = x1i - x2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r - y3r;
    x2i = y1i - y3i;
    a[4] = x1r - x2i;
    a[5] = x1i + x2r;
    a[6] = x1r + x2i;
    a[7] = x1i - x2r;
    x1r = y4r - y6i;
    x1i = y4i + y6r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[8] = x1r + x2r;
    a[9] = x1i + x2i;
    a[10] = x1r - x2r;
    a[11] = x1i - x2i;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[12] = x1r - x2i;
    a[13] = x1i + x2r;
    a[14] = x1r + x2i;
    a[15] = x1i - x2r;
    x1r = y8r + y10r;
    x1i = y8i + y10i;
    x2r = y9r - y11r;
    x2i = y9i - y11i;
    a[16] = x1r + x2r;
    a[17] = x1i + x2i;
    a[18] = x1r - x2r;
    a[19] = x1i - x2i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    a[20] = x1r - x2i;
    a[21] = x1i + x2r;
    a[22] = x1r + x2i;
    a[23] = x1i - x2r;
    x1r = y12r - y14i;
    x1i = y12i + y14r;
    x0r = y13r + y15i;
    x0i = y13i - y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[24] = x1r + x2r;
    a[25] = x1i + x2i;
    a[26] = x1r - x2r;
    a[27] = x1i - x2i;
    x1r = y12r + y14i;
    x1i = y12i - y14r;
    x0r = y13r - y15i;
    x0i = y13i + y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[28] = x1r - x2i;
    a[29] = x1i + x2r;
    a[30] = x1r + x2i;
    a[31] = x1i - x2r;
}

static void cftf081(float *a, float *w)
{
    float wn4r, x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    
    wn4r = w[1];
    x0r = a[0] + a[8];
    x0i = a[1] + a[9];
    x1r = a[0] - a[8];
    x1i = a[1] - a[9];
    x2r = a[4] + a[12];
    x2i = a[5] + a[13];
    x3r = a[4] - a[12];
    x3i = a[5] - a[13];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y2r = x0r - x2r;
    y2i = x0i - x2i;
    y1r = x1r - x3i;
    y1i = x1i + x3r;
    y3r = x1r + x3i;
    y3i = x1i - x3r;
    x0r = a[2] + a[10];
    x0i = a[3] + a[11];
    x1r = a[2] - a[10];
    x1i = a[3] - a[11];
    x2r = a[6] + a[14];
    x2i = a[7] + a[15];
    x3r = a[6] - a[14];
    x3i = a[7] - a[15];
    y4r = x0r + x2r;
    y4i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    x2r = x1r + x3i;
    x2i = x1i - x3r;
    y5r = wn4r * (x0r - x0i);
    y5i = wn4r * (x0r + x0i);
    y7r = wn4r * (x2r - x2i);
    y7i = wn4r * (x2r + x2i);
    a[8] = y1r + y5r;
    a[9] = y1i + y5i;
    a[10] = y1r - y5r;
    a[11] = y1i - y5i;
    a[12] = y3r - y7i;
    a[13] = y3i + y7r;
    a[14] = y3r + y7i;
    a[15] = y3i - y7r;
    a[0] = y0r + y4r;
    a[1] = y0i + y4i;
    a[2] = y0r - y4r;
    a[3] = y0i - y4i;
    a[4] = y2r - y6i;
    a[5] = y2i + y6r;
    a[6] = y2r + y6i;
    a[7] = y2i - y6r;
}

static void cftf082(float *a, float *w)
{
    float wn4r, wk1r, wk1i, x0r, x0i, x1r, x1i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    
    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    y0r = a[0] - a[9];
    y0i = a[1] + a[8];
    y1r = a[0] + a[9];
    y1i = a[1] - a[8];
    x0r = a[4] - a[13];
    x0i = a[5] + a[12];
    y2r = wn4r * (x0r - x0i);
    y2i = wn4r * (x0i + x0r);
    x0r = a[4] + a[13];
    x0i = a[5] - a[12];
    y3r = wn4r * (x0r - x0i);
    y3i = wn4r * (x0i + x0r);
    x0r = a[2] - a[11];
    x0i = a[3] + a[10];
    y4r = wk1r * x0r - wk1i * x0i;
    y4i = wk1r * x0i + wk1i * x0r;
    x0r = a[2] + a[11];
    x0i = a[3] - a[10];
    y5r = wk1i * x0r - wk1r * x0i;
    y5i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] - a[15];
    x0i = a[7] + a[14];
    y6r = wk1i * x0r - wk1r * x0i;
    y6i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] + a[15];
    x0i = a[7] - a[14];
    y7r = wk1r * x0r - wk1i * x0i;
    y7i = wk1r * x0i + wk1i * x0r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y4r + y6r;
    x1i = y4i + y6i;
    a[0] = x0r + x1r;
    a[1] = x0i + x1i;
    a[2] = x0r - x1r;
    a[3] = x0i - x1i;
    x0r = y0r - y2r;
    x0i = y0i - y2i;
    x1r = y4r - y6r;
    x1i = y4i - y6i;
    a[4] = x0r - x1i;
    a[5] = x0i + x1r;
    a[6] = x0r + x1i;
    a[7] = x0i - x1r;
    x0r = y1r - y3i;
    x0i = y1i + y3r;
    x1r = y5r - y7r;
    x1i = y5i - y7i;
    a[8] = x0r + x1r;
    a[9] = x0i + x1i;
    a[10] = x0r - x1r;
    a[11] = x0i - x1i;
    x0r = y1r + y3i;
    x0i = y1i - y3r;
    x1r = y5r + y7r;
    x1i = y5i + y7i;
    a[12] = x0r - x1i;
    a[13] = x0i + x1r;
    a[14] = x0r + x1i;
    a[15] = x0i - x1r;
}

static void cftleaf(int n, int isplt, float *a, int nw, float *w)
{
    void cftmdl1(int n, float *a, float *w);
    void cftmdl2(int n, float *a, float *w);
    void cftf161(float *a, float *w);
    void cftf162(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf082(float *a, float *w);
    
    if (n == 512) {
        cftmdl1(128, a, &w[nw - 64]);
        cftf161(a, &w[nw - 8]);
        cftf162(&a[32], &w[nw - 32]);
        cftf161(&a[64], &w[nw - 8]);
        cftf161(&a[96], &w[nw - 8]);
        cftmdl2(128, &a[128], &w[nw - 128]);
        cftf161(&a[128], &w[nw - 8]);
        cftf162(&a[160], &w[nw - 32]);
        cftf161(&a[192], &w[nw - 8]);
        cftf162(&a[224], &w[nw - 32]);
        cftmdl1(128, &a[256], &w[nw - 64]);
        cftf161(&a[256], &w[nw - 8]);
        cftf162(&a[288], &w[nw - 32]);
        cftf161(&a[320], &w[nw - 8]);
        cftf161(&a[352], &w[nw - 8]);
        if (isplt != 0) {
            cftmdl1(128, &a[384], &w[nw - 64]);
            cftf161(&a[480], &w[nw - 8]);
        } else {
            cftmdl2(128, &a[384], &w[nw - 128]);
            cftf162(&a[480], &w[nw - 32]);
        }
        cftf161(&a[384], &w[nw - 8]);
        cftf162(&a[416], &w[nw - 32]);
        cftf161(&a[448], &w[nw - 8]);
    } else {
        cftmdl1(64, a, &w[nw - 32]);
        cftf081(a, &w[nw - 8]);
        cftf082(&a[16], &w[nw - 8]);
        cftf081(&a[32], &w[nw - 8]);
        cftf081(&a[48], &w[nw - 8]);
        cftmdl2(64, &a[64], &w[nw - 64]);
        cftf081(&a[64], &w[nw - 8]);
        cftf082(&a[80], &w[nw - 8]);
        cftf081(&a[96], &w[nw - 8]);
        cftf082(&a[112], &w[nw - 8]);
        cftmdl1(64, &a[128], &w[nw - 32]);
        cftf081(&a[128], &w[nw - 8]);
        cftf082(&a[144], &w[nw - 8]);
        cftf081(&a[160], &w[nw - 8]);
        cftf081(&a[176], &w[nw - 8]);
        if (isplt != 0) {
            cftmdl1(64, &a[192], &w[nw - 32]);
            cftf081(&a[240], &w[nw - 8]);
        } else {
            cftmdl2(64, &a[192], &w[nw - 64]);
            cftf082(&a[240], &w[nw - 8]);
        }
        cftf081(&a[192], &w[nw - 8]);
        cftf082(&a[208], &w[nw - 8]);
        cftf081(&a[224], &w[nw - 8]);
    }
}

static void cftrec4(int n, float *a, int nw, float *w)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl1(int n, float *a, float *w);
    int isplt, j, k, m;
    
    m = n;
    while (m > 512) {
        m >>= 2;
        cftmdl1(m, &a[n - m], &w[nw - (m >> 1)]);
    }
    cftleaf(m, 1, &a[n - m], nw, w);
    k = 0;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
}

static void cftfx41(int n, float *a, int nw, float *w)
{
    void cftf161(float *a, float *w);
    void cftf162(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf082(float *a, float *w);
    
    if (n == 128) {
        cftf161(a, &w[nw - 8]);
        cftf162(&a[32], &w[nw - 32]);
        cftf161(&a[64], &w[nw - 8]);
        cftf161(&a[96], &w[nw - 8]);
    } else {
        cftf081(a, &w[nw - 8]);
        cftf082(&a[16], &w[nw - 8]);
        cftf081(&a[32], &w[nw - 8]);
        cftf081(&a[48], &w[nw - 8]);
    }
}

static void cftf040(float *a)
{
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r - x3i;
    a[3] = x1i + x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftx020(float *a)
{
    float x0r, x0i;
    
    x0r = a[0] - a[2];
    x0i = a[1] - a[3];
    a[0] += a[2];
    a[1] += a[3];
    a[2] = x0r;
    a[3] = x0i;
}

#ifdef USE_CDFT_THREADS
struct cdft_arg_st {
    int n0;
    int n;
    float *a;
    int nw;
    float *w;
};
typedef struct cdft_arg_st cdft_arg_t;


static void cftrec4_th(int n, float *a, int nw, float *w)
{
    void *cftrec1_th(void *p);
    void *cftrec2_th(void *p);
    int i, idiv4, m, nthread;
    cdft_thread_t th[4];
    cdft_arg_t ag[4];
    
    nthread = 2;
    idiv4 = 0;
    m = n >> 1;
    if (n > CDFT_4THREADS_BEGIN_N) {
        nthread = 4;
        idiv4 = 1;
        m >>= 1;
    }
    for (i = 0; i < nthread; i++) {
        ag[i].n0 = n;
        ag[i].n = m;
        ag[i].a = &a[i * m];
        ag[i].nw = nw;
        ag[i].w = w;
        if (i != idiv4) {
            cdft_thread_create(&th[i], cftrec1_th, &ag[i]);
        } else {
            cdft_thread_create(&th[i], cftrec2_th, &ag[i]);
        }
    }
    for (i = 0; i < nthread; i++) {
        cdft_thread_wait(th[i]);
    }
}


static void *cftrec1_th(void *p)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl1(int n, float *a, float *w);
    int isplt, j, k, m, n, n0, nw;
    float *a, *w;
    
    n0 = ((cdft_arg_t *) p)->n0;
    n = ((cdft_arg_t *) p)->n;
    a = ((cdft_arg_t *) p)->a;
    nw = ((cdft_arg_t *) p)->nw;
    w = ((cdft_arg_t *) p)->w;
    m = n0;
    while (m > 512) {
        m >>= 2;
        cftmdl1(m, &a[n - m], &w[nw - (m >> 1)]);
    }
    cftleaf(m, 1, &a[n - m], nw, w);
    k = 0;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
    return (void *) 0;
}


static void *cftrec2_th(void *p)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl2(int n, float *a, float *w);
    int isplt, j, k, m, n, n0, nw;
    float *a, *w;
    
    n0 = ((cdft_arg_t *) p)->n0;
    n = ((cdft_arg_t *) p)->n;
    a = ((cdft_arg_t *) p)->a;
    nw = ((cdft_arg_t *) p)->nw;
    w = ((cdft_arg_t *) p)->w;
    k = 1;
    m = n0;
    while (m > 512) {
        m >>= 2;
        k <<= 2;
        cftmdl2(m, &a[n - m], &w[nw - m]);
    }
    cftleaf(m, 0, &a[n - m], nw, w);
    k >>= 1;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
    return (void *) 0;
}
#endif /* USE_CDFT_THREADS */

static void cftfsub(int n, float *a, int *ip, int nw, float *w)
{
    void bitrv2(int n, int *ip, float *a);
    void bitrv216(float *a);
    void bitrv208(float *a);
    void cftf1st(int n, float *a, float *w);
    void cftrec4(int n, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftfx41(int n, float *a, int nw, float *w);
    void cftf161(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf040(float *a);
    void cftx020(float *a);
#ifdef USE_CDFT_THREADS
    void cftrec4_th(int n, float *a, int nw, float *w);
#endif /* USE_CDFT_THREADS */
    
    if (n > 8) {
        if (n > 32) {
            cftf1st(n, a, &w[nw - (n >> 2)]);
#ifdef USE_CDFT_THREADS
            if (n > CDFT_THREADS_BEGIN_N) {
                cftrec4_th(n, a, nw, w);
            } else 
#endif /* USE_CDFT_THREADS */
            if (n > 512) {
                cftrec4(n, a, nw, w);
            } else if (n > 128) {
                cftleaf(n, 1, a, nw, w);
            } else {
                cftfx41(n, a, nw, w);
            }
            bitrv2(n, ip, a);
        } else if (n == 32) {
            cftf161(a, &w[nw - 8]);
            bitrv216(a);
        } else {
            cftf081(a, w);
            bitrv208(a);
        }
    } else if (n == 8) {
        cftf040(a);
    } else if (n == 4) {
        cftx020(a);
    }
}

static void bitrv2conj(int n, int *ip, float *a)
{
    int j, j1, k, k1, l, m, nh, nm;
    float xr, xi, yr, yi;
    
    m = 1;
    for (l = n >> 2; l > 8; l >>= 2) {
        m <<= 1;
    }
    nh = n >> 1;
    nm = 4 * m;
    if (l == 8) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + 2 * ip[m + k];
                k1 = 4 * k + 2 * ip[m + j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + 2 * ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
            j1 += nm;
            k1 += 2 * nm;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 -= nm;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= 2;
            k1 -= nh;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nh + 2;
            k1 += nh + 2;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= nh - nm;
            k1 += 2 * nm - 2;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
        }
    } else {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + ip[m + k];
                k1 = 4 * k + ip[m + j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
            j1 += nm;
            k1 += nm;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
        }
    }
}

static void bitrv216neg(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x6r, x6i, x7r, x7i, x8r, x8i, 
        x9r, x9i, x10r, x10i, x11r, x11i, x12r, x12i, 
        x13r, x13i, x14r, x14i, x15r, x15i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x9r = a[18];
    x9i = a[19];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    x15r = a[30];
    x15i = a[31];
    a[2] = x15r;
    a[3] = x15i;
    a[4] = x7r;
    a[5] = x7i;
    a[6] = x11r;
    a[7] = x11i;
    a[8] = x3r;
    a[9] = x3i;
    a[10] = x13r;
    a[11] = x13i;
    a[12] = x5r;
    a[13] = x5i;
    a[14] = x9r;
    a[15] = x9i;
    a[16] = x1r;
    a[17] = x1i;
    a[18] = x14r;
    a[19] = x14i;
    a[20] = x6r;
    a[21] = x6i;
    a[22] = x10r;
    a[23] = x10i;
    a[24] = x2r;
    a[25] = x2i;
    a[26] = x12r;
    a[27] = x12i;
    a[28] = x4r;
    a[29] = x4i;
    a[30] = x8r;
    a[31] = x8i;
}

static void bitrv208neg(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x6r, x6i, x7r, x7i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    a[2] = x7r;
    a[3] = x7i;
    a[4] = x3r;
    a[5] = x3i;
    a[6] = x5r;
    a[7] = x5i;
    a[8] = x1r;
    a[9] = x1i;
    a[10] = x6r;
    a[11] = x6i;
    a[12] = x2r;
    a[13] = x2i;
    a[14] = x4r;
    a[15] = x4i;
}

static void cftb1st(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, 
        wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = -a[1] - a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = -a[1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    a[j2] = x1r + x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r - x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i + w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = -a[j + 1] - a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = -a[j + 1] + a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = -a[j + 3] - a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = -a[j + 3] + a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i - x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = -a[j0 + 1] - a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = -a[j0 + 1] + a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = -a[j0 - 1] - a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = -a[j0 - 1] + a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i - x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = -a[j0 - 1] - a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = -a[j0 - 1] + a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i - x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = -a[j0 + 1] - a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = -a[j0 + 1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = -a[j0 + 3] - a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = -a[j0 + 3] + a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i - x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftb040(float *a)
{
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
}

static void cftbsub(int n, float *a, int *ip, int nw, float *w)
{
    void bitrv2conj(int n, int *ip, float *a);
    void bitrv216neg(float *a);
    void bitrv208neg(float *a);
    void cftb1st(int n, float *a, float *w);
    void cftrec4(int n, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftfx41(int n, float *a, int nw, float *w);
    void cftf161(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftb040(float *a);
    void cftx020(float *a);
#ifdef USE_CDFT_THREADS
    void cftrec4_th(int n, float *a, int nw, float *w);
#endif /* USE_CDFT_THREADS */
    
    if (n > 8) {
        if (n > 32) {
            cftb1st(n, a, &w[nw - (n >> 2)]);
#ifdef USE_CDFT_THREADS
            if (n > CDFT_THREADS_BEGIN_N) {
                cftrec4_th(n, a, nw, w);
            } else 
#endif /* USE_CDFT_THREADS */
            if (n > 512) {
                cftrec4(n, a, nw, w);
            } else if (n > 128) {
                cftleaf(n, 1, a, nw, w);
            } else {
                cftfx41(n, a, nw, w);
            }
            bitrv2conj(n, ip, a);
        } else if (n == 32) {
            cftf161(a, &w[nw - 8]);
            bitrv216neg(a);
        } else {
            cftf081(a, w);
            bitrv208neg(a);
        }
    } else if (n == 8) {
        cftb040(a);
    } else if (n == 4) {
        cftx020(a);
    }
}

static void rftfsub(int n, float *a, int nc, float *c)
{
    int j, k, kk, ks, m;
    float wkr, wki, xr, xi, yr, yi;
    
    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr - wki * xi;
        yi = wkr * xi + wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rftbsub(int n, float *a, int nc, float *c)
{
    int j, k, kk, ks, m;
    float wkr, wki, xr, xi, yr, yi;
    
    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rdft(int n, int isgn, float *a, int *ip, float *w)
{
    void makewt(int nw, int *ip, float *w);
    void makect(int nc, int *ip, float *c);
    void cftfsub(int n, float *a, int *ip, int nw, float *w);
    void cftbsub(int n, float *a, int *ip, int nw, float *w);
    void rftfsub(int n, float *a, int nc, float *c);
    void rftbsub(int n, float *a, int nc, float *c);
    int nw, nc;
    float xi;
    
    nw = ip[0];
    if (n > (nw << 2)) {
        nw = n >> 2;
        makewt(nw, ip, w);
    }
    nc = ip[1];
    if (n > (nc << 2)) {
        nc = n >> 2;
        makect(nc, ip, w + nw);
    }
    if (isgn >= 0) {
        if (n > 4) {
            cftfsub(n, a, ip, nw, w);
            rftfsub(n, a, nc, w + nw);
        } else if (n == 4) {
            cftfsub(n, a, ip, nw, w);
        }
        xi = a[0] - a[1];
        a[0] += a[1];
        a[1] = xi;
    } else {
        a[1] = 0.5 * (a[0] - a[1]);
        a[0] -= a[1];
        if (n > 4) {
            rftbsub(n, a, nc, w + nw);
            cftbsub(n, a, ip, nw, w);
        } else if (n == 4) {
            cftbsub(n, a, ip, nw, w);
        }
    }
}

// input array (any shape >= 1D)
// output array (shape = input.shape.replace(axis, n).insert(0,2))
// d0 = input.shape.step(axis)
// d1 = input.shape.size(axis)
// d2 = input.shape.slot(axis)
static inline void rdft_ndim_f32(
    const float* restrict input, 
    float* restrict output, 
    int d0, int d1, int d2,
    int* restrict temp_ip, float* restrict temp_w, float* restrict temp_a)
{
    void rdft(int n, int isgn, float* a, int* ip, float* w);

    int d3 = d0 * d1;
    int d_out = (d1 >> 1) + 1;

    for (int k = 0; k < d2; k++)
    {
        int dk = k * d3;
        int dm = k * 2 * d_out * d0;
        for (int i = 0; i < d0; i++)
        {                	           
            for (int j = 0; j < d1; j++)
            {
                temp_a[j] = input[dk + j * d0 + i];
            }
            rdft(d1, 1, temp_a, temp_ip, temp_w);

            for (int m = 2; m < d1; m+=2)
            {
                int index = (m * d0) + 2 * i + dm;
                output[index] = temp_a[m];
                output[index + 1] = -temp_a[m + 1];
            }
            int beta = dm + 2 * i;
            output[beta] = temp_a[0];
            output[beta + 1] = 0;
            output[beta + d3] = temp_a[1];
            output[beta + d3 + 1] = 0;
        }
    }
}

static inline float __norm_f32(const float* input, int step, int count)
{
	float sum = 0;
	for (int j = 0; j < count; j++) {
		float item = input[j * step];
		sum += item * item;
	}
	return sqrtf(sum);
}

// input array (any shape >= 2D)
// output array (same shape as input array except with axis removed)
// d0 = input.shape.step(axis)
// d1 = input.shape.size(axis)
// d2 = input.shape.slot(axis)
static inline void norm_f32(const float* restrict input, int d0, int d1, int d2, float* restrict output)
{
	const int d3 = d0 * d1;

	for (int k = 0; k < d2; k++) {
		int k3 = k * d3;
		int k0 = k * d0;
		for (int i = 0; i < d0; i++) {			
			*(output + i + k0) = __norm_f32(input + i + k3, d0, d1);
		}
	}
}

static inline float __mel_f32(const float* restrict input, const int* restrict filter_points, int filter)
{
	int n0 = filter_points[filter];
	int n1 = filter_points[filter+1];
	int n2 = filter_points[filter+2];
	int c0 = n1 - n0;
	int c1 = n2 - n1;
	float sum = 0;
	
	for (int i = 0; i <= c0; i++) {
		float rate = i / (float)c0;
		float value = input[i + n0];
		sum += value * rate;
	}

	for (int i = 1; i <= c1; i++) {
		float rate = i / (float)c1;
		float value = input[i + n1];
		sum += value * (1.0 - rate);
	}

	return sum;
}

// input array (any shape >= 1D)
// output array (same shape as input array except with 0 replaced with num_filter)
// size = input.shape.size(0)
// slot = input.shape.slot(0)
static inline void mel_f32(const float* restrict input, const int* restrict filter_points, int size, int slot, int num_filter, float* restrict output)
{	
	for (int k = 0; k < slot; k++) {
		const float *ip = input + k * size;
		for (int i = 0; i < num_filter; i++) {
			*output++ = __mel_f32(ip, filter_points, i);
		}
	}
}

static inline void clip_f32(const float* restrict input, int count, float min, float max, float* restrict output)
{	
	for (int i = 0; i < count; i++) {
		float value = input[i];
		if (value > max)
			value = max;
		if (value < min)
			value = min;

		output[i] = value;
	}
}

static inline void loge_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		*result++ = logf(*x++);
	}
}

/**
 * Enqueue handle->input_size values from given *data pointer to internal window buffer.
 *
 * @param handle Pointer to an initialized handle.
 * @param data Data to enqueue.
 * @param time Pointer to time_count timestamps.
 * @param time_count Number of float values in *time pointer
 * @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NOMEM (-2) if internal buffer is out of memory.
 */
static inline int fixwin_enqueuef32(void* restrict handle, const void* restrict data, const void* restrict time, int time_count)
{
	fixwin_t* fep = (fixwin_t*)handle;

	if (cbuffer_enqueue(&fep->data_buffer, data, fep->input_size) != 0)
		return IPWIN_RET_NOMEM;

	timestamp_t min = TIMESTAMP_MAX;
	timestamp_t max = TIMESTAMP_MIN;
	for (int i = 0; i < time_count; i++)
	{
		const float value = ((timestamp_t *)time)[i];
		if (value > max)
			max = value;
		if (value < min)
			min = value;
	}

	if (cbuffer_enqueue(&fep->time_buffer, &min, sizeof(timestamp_t)) != 0)
		return IPWIN_RET_NOMEM;
	if (cbuffer_enqueue(&fep->time_buffer, &max, sizeof(timestamp_t)) != 0)
		return IPWIN_RET_NOMEM;

	return IPWIN_RET_SUCCESS;
}

static inline float mac_f32(const float* restrict a, const float* restrict b, int count)
{
	float sum = 0;
	for (int i = 0; i < count; i++) {
		sum += *a++ * *b++;
	}
	return sum;
}

static inline void conv1d_flat_f32(
	const float* restrict input,
	const float* restrict weight,
	float* restrict output,
	int top,
	int bottom,
	int n_output_rows,
	int filters,
	int strides,
	int kernel_size)
{
	for (int i = 0; i < n_output_rows; i++) {
		const float* wp = weight;		// Weight matrix
		const float* bp = input;		// Input matrix
		const int step = i * strides;	// Row size
		int len = kernel_size;			// Normally do one kernel

		int skip = top - step;			// Pad top?
		if (skip > 0) {
			len -= skip;				// Trim kernel length
			wp += skip;					// Advance kernel
		}
		else {						// No top padding,
			bp -= skip;					// Rollback input
		}

		skip = step + len - bottom;		// Pad bottom?
		if (skip > 0)
			len -= skip;				// Just cut the kernel at end

		float* op = output + i * filters;
		for (int j = 0; j < filters; j++) {
			*op++ = mac_f32(wp + j * kernel_size, bp, len);
		}
	}
}

static inline void add_f32(
	const float* restrict a,
	const float* restrict b,
	int l, int g1, int m, int g2, int r,
	float* restrict output)
{
	int index = 0;
	for (int x = 0; x < l; x++) {
		for (int i = 0; i < g1; i++) {
			for (int y = 0; y < m; y++) {
				for (int j = 0; j < g2; j++) {
					for (int z = 0; z < r; z++) {
						output[index] = a[index] + b[x * m * r + y * r + z];
						index++;
					}
				}
			}
		}
	}
}

static inline void relu_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		const float value = *x++;
		*result++ = value > 0 ? value : 0;
	}
}

static inline float maxpool1d_f32_max(const float *restrict x, int ncols, int pool_size)
{
    float max = -FLT_MAX;
    for (int i = 0; i < pool_size; i++) {
        const float value = *(x + i * ncols);
        if (value > max)
            max = value;
    }
    return max;
}

static inline void maxpool1d_f32_row(const float* restrict x, int pool_size, int ncols, float* restrict result)
{
    for (int i = 0; i < ncols; i++) {
        const float* xp = x + i;
        *result++ = maxpool1d_f32_max(xp, ncols, pool_size);
    }
}

static inline void maxpool1d_valid_f32(
    const float* restrict input,
    int pool_size,
    int strides,
    int ncols,
    int n_output_rows,
    float* restrict result)
{
    int input_pointer_step = ncols * strides;

    for (int i = 0; i < n_output_rows; i++) {
        const float* input_current = input + (i * input_pointer_step);
        float* rp = result + (i * ncols);
        maxpool1d_f32_row(input_current, pool_size, ncols, rp);
    }
}

static inline float _globav1d_f32_mean(const float *restrict x, int nchannel, int nsteps)
{
	float mean = 0.0;
	for (int i = 0; i < nsteps; i++) {
		const float value = *(x + i * nchannel);
		mean = mean + value;
	}
	mean = mean/(float)nsteps;
	return mean;
}

static inline void globav1d_f32(const float *restrict x, int nsteps, int nchannel, float *restrict result)
{
	// Loop over all channels
	for (int i = 0; i < nchannel; i++) {
		const float* xp = x + i;
		*result++ = _globav1d_f32_mean(xp, nchannel, nsteps);
	}
}

static inline void dott_f32(const float *restrict a, const float *restrict b, float *restrict out, int d0, int d1, int d2)
{
	for (int i = 0; i < d2; i++) {
		float* op = out;
		for (int j = 0; j < d1; j++) {
			*op++ = mac_f32(a + j * d0, b, d0);
		}
		out += d1;
		b += d0;
	}
}

static inline void softmax_f32(const float* restrict x, int count, float* restrict result)
{
	float sum = 0;
	for (int i = 0; i < count; i++) {
		float value = expf(x[i]);
		sum += value;
		result[i] = value;
	}
	for (int i = 0; i < count; i++) {
		result[i] /= sum;
	}
}

/**
* Initializes a fixwin sampler handle.
*
* @param handle Pointer to a preallocated memory area of fixwin_handle_size() bytes to initialize.
*
* @param input_size Number of bytes to enqueue.
* @param window_count Number of items (of size input_size) in each window
*/
static inline void fixwin_initf32(void* restrict handle, int input_size, int window_count)
{
	fixwin_t* fep = (fixwin_t*)handle;
	fep->input_size = input_size;
	fep->window_count = window_count;
	
	char* mem = ((char*)handle) + sizeof(fixwin_t);

	int data_buffer = input_size * window_count;
	int time_buffer = 2 * window_count * sizeof(timestamp_t);	// 2 = min,max
	
	cbuffer_init(&fep->data_buffer, mem, data_buffer);	
	cbuffer_init(&fep->time_buffer, mem + data_buffer, time_buffer);
}

#define __RETURN_ERROR(_exp) do { int __ret = (_exp); if(__ret < 0) return __ret; } while(0)
#define __RETURN_ERROR_BREAK_EMPTY(_exp) {  int __ret = (_exp); if(__ret == -1) break; if(__ret < 0) return __ret;  } 

int IMAI_dequeue(float *restrict data_out, float *restrict time_out) {    
    while(1) {
        __RETURN_ERROR_BREAK_EMPTY(fixwin_dequeuef32(_K5, _K3, 320, _K4));
        hannmul_f32(_K3, _K6, _K7, 512, 1);
        rdft_ndim_f32(_K7, _K8, 1, 512, 1, _K9, _K10, _K11);
        norm_f32(_K8, 1, 2, 257, _K12);
        mel_f32(_K12, _K13, 257, 1, 30, _K14);
        clip_f32(_K14, 30, 0.000316227766016, 3.40282347E+38, _K15);
        loge_f32(_K15, 30, _K16);
        __RETURN_ERROR_BREAK_EMPTY(fixwin_enqueuef32(_K19, _K16, _K4, 2));
    }
    __RETURN_ERROR(fixwin_dequeuef32(_K19, _K17, 6, time_out));
    conv1d_flat_f32(_K17, _K21, _K23, 0, 1500, 24, 13, 60, 90);
    add_f32(_K23, _K22, 1, 1, 1, 24, 13, _K23);
    conv1d_flat_f32(_K23, _K25, _K24, 0, 312, 12, 16, 26, 39);
    add_f32(_K24, _K28, 1, 1, 1, 12, 16, _K26);
    relu_f32(_K26, 192, _K30);
    conv1d_flat_f32(_K30, _K32, _K31, 16, 208, 12, 16, 16, 48);
    conv1d_flat_f32(_K31, _K34, _K33, 16, 208, 12, 16, 16, 48);
    add_f32(_K33, _K37, 1, 1, 1, 12, 16, _K35);
    relu_f32(_K35, 192, _K39);
    maxpool1d_valid_f32(_K39, 2, 2, 16, 6, _K41);
    conv1d_flat_f32(_K41, _K43, _K42, 16, 112, 6, 32, 16, 48);
    conv1d_flat_f32(_K42, _K45, _K44, 32, 224, 6, 32, 32, 96);
    add_f32(_K44, _K48, 1, 1, 1, 6, 32, _K46);
    relu_f32(_K46, 192, _K50);
    maxpool1d_valid_f32(_K50, 2, 2, 32, 3, _K52);
    globav1d_f32(_K52, 3, 32, _K53);
    dott_f32(_K54, _K53, _K55, 32, 2, 1);
    add_f32(_K55, _K56, 1, 1, 1, 1, 2, _K57);
    softmax_f32(_K57, 2, data_out);
    return 0;
}

int IMAI_enqueue(const float *restrict data_in, const float *restrict time_in) {    
    __RETURN_ERROR(fixwin_enqueuef32(_K5, data_in, time_in, 1));
    return 0;
}

void IMAI_init(void) {    
    fixwin_initf32(_K5, 4, 512);
    fixwin_initf32(_K19, 120, 50);
}

