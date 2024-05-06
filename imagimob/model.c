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

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[7248];
static int8_t _state[9592];

// Parameters
static const uint32_t _K4[] = {
    0x0, 0x381e87c4, 0x391e863b, 0x39b25423, 0x3a1e8019, 0x3a77a0f6, 0x3ab2449b, 0x3af29a52, 
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
    0x3af29a52, 0x3ab2449b, 0x3a77a0f6, 0x3a1e8019, 0x39b25423, 0x391e863b, 0x381e87c4, 0x0
};

static const uint32_t _K11[] = {
    0x6, 0x8, 0xa, 0xd, 0xf, 0x12, 0x15, 0x18, 
    0x1b, 0x1f, 0x23, 0x27, 0x2b, 0x30, 0x35, 0x3b, 
    0x40, 0x47, 0x4d, 0x55, 0x5c, 0x65, 0x6d, 0x77, 
    0x81, 0x8c, 0x98, 0xa4, 0xb2, 0xc0, 0xcf, 0xe0
};

static const uint32_t _K18[] = {
    0x3e1fd508, 0x3e55baaa, 0x3d8d4995, 0xbe0ff081, 0x3c976c23, 0xbe42f493, 0x3c49c92d, 0xbc74dcb9, 
    0x3deddcfb, 0xbc679260, 0xbd061634, 0xbe466664, 0xbe094494, 0x3c7d4bf6, 0xbbed0ffa, 0xbdd6972a, 
    0x3d350858, 0xbc260330, 0xbe396581, 0xbe03b5d4, 0xbe658b78, 0xbdbe0741, 0x3df5063c, 0xbe003cb5, 
    0xbd7d55d3, 0xbe4a1612, 0xbe65bf39, 0xbc0020ce, 0x3e4efa09, 0x3e2ee194, 0x3de7caec, 0x3d091804, 
    0xbe100765, 0x3dd4cc8b, 0x3ad7217e, 0x3dea5cd3, 0xbe2a1ba9, 0xbe503664, 0xbe2360dc, 0x3dff1493, 
    0xbe1ef97d, 0xbc9e612e, 0x3e477e2f, 0xbe99f758, 0xbd66f03d, 0xbd9c4c99, 0x3d93472a, 0xbd3dbb4b, 
    0xbe7bedf4, 0xbd9064b9, 0xbda796a2, 0xbdc925e2, 0xbd73797b, 0x3d791ded, 0xbe3f9c49, 0xbe2b47f7, 
    0xbe603edc, 0xbcce9274, 0xbda62627, 0xbe0631d9, 0x3e157c58, 0x3dfef8a8, 0xbe08fb1d, 0xbd822aed, 
    0xbdb4cbbc, 0xbd0e61a5, 0x3c21e8a6, 0xbe2a4292, 0xbb96d548, 0x3e424520, 0x3d8cdd73, 0x3dbb608e, 
    0x3e4c9c1c, 0xbd1f5a00, 0xbdb3364a, 0x3c343ccb, 0x3e17884e, 0x3e07e9fe, 0x3d9e6d3a, 0xbe4fd33c, 
    0xbe08246a, 0x3e353df1, 0xbd09396a, 0x3d96f48b, 0x3c53852a, 0x3dad0ad0, 0x3da52f96, 0xbd7f65ed, 
    0x3db2ee2b, 0xbcdb0571, 0xbdaf9f5c, 0xbdd42586, 0x3dbe9237, 0x3e528078, 0x3e54046e, 0x3da0f771, 
    0xbd201edb, 0x3e1516be, 0x3a25167b, 0xbd56d215, 0xbe68eb05, 0xbe4f8649, 0xbe275f85, 0xbc20da4d, 
    0x3cf6eaf1, 0x3e1ed6a2, 0x3dc6129a, 0xbd3f0c92, 0x3e53e3e8, 0xbe281135, 0x3e0add96, 0xbe2022b9, 
    0x3dbd98c4, 0xbd01beaf, 0x3c473eea, 0x3e21b52c, 0xbe0999d8, 0xbd987b8b, 0xbe227682, 0xbd29ce36, 
    0x3dab1149, 0x3d10a233, 0xbe49344c, 0xbe4b5dea, 0x3db07c90, 0xbdce9a84, 0xbe4e01e5, 0xbd3c0020, 
    0x3d45ec09, 0xbc8beefe, 0xbc7ad334, 0xbe38bff8, 0xbe4d5979, 0xbd729d67, 0x3da327d2, 0xbd0b8d02, 
    0xbb2ad4c6, 0x3d9007ec, 0xbcec1364, 0x3da567db, 0xbe4fdfcd, 0x3dff9bfe, 0xbdbb1358, 0x3e315cf0, 
    0x3e28f5cc, 0x3d6f2876, 0xbe09605b, 0x3cd3cb0f, 0x3e175d6f, 0xbdb8e158, 0xbd444857, 0x3e2e236f, 
    0x3e369fc1, 0xbca698fc, 0x3c293796, 0x3d0a74f1, 0x3df2e298, 0xbc5c77f0, 0xbe79bf4a, 0xbe73c06e, 
    0xbe3eb7b2, 0x3e46b133, 0x3db6f0bd, 0xbe066fd8, 0x3d98c1a3, 0xbe6ca8bf, 0x3dcc087d, 0xbe670192, 
    0xbdeee6b7, 0x3e40b0bc, 0x3e34a169, 0x3e0d4201, 0xbd7f0a71, 0xbcb7068a, 0xbe12534b, 0xbc8d9255, 
    0xbda5cb0f, 0x3dc10adb, 0xbe3163ae, 0xbd0337f0, 0x3d7696f5, 0xbd397ea0, 0xbdab1691, 0xbd410230, 
    0xbe19c6d7, 0xbdc4f695, 0xbe51103c, 0x3d9b3de5, 0xbd5f51f2, 0xbe382840, 0xbc0ff129, 0xbd64d741, 
    0xbd959731, 0x3ca4bba9, 0xbc63ef6b, 0x3c1ff0b2, 0x3e3c260f, 0x3e356ac6, 0x3d038ec0, 0x3dbce91f, 
    0xbba412bb, 0x3e0ae288, 0x3dd96108, 0x3e5ff968, 0x3e3934e0, 0xbe38edc4, 0xbe41e724, 0xbda818a3, 
    0xbd5a0f4f, 0xbd92a680, 0x3e3668b6, 0x3e2db0ce, 0x3d9a643a, 0x3def5f5c, 0xbdc35616, 0xbc5e2d7e, 
    0x3db4eeda, 0xbdc5b3a6, 0x3db91c92, 0x3e32659b, 0x3d85d973, 0x3e6888c4, 0xbe9793e3, 0x3dbf2f08, 
    0xbe08bfd5, 0x3d8ae61a, 0xbdc73edf, 0x3c3a85b4, 0xbe342808, 0x3d8befe4, 0xbddffe47, 0xbe065569, 
    0xbb8933f9, 0x3d1482ef, 0xbd2e3d4f, 0x3e338b76, 0x3df70b64, 0xbdc693bb, 0x3db597c9, 0x3cc46420, 
    0x3d11ced3, 0xbcfb5eeb, 0x3c73697f, 0xbd48fc83, 0x3e58fcce, 0x3e0bdc1e, 0xbe70ddf6, 0x3d872bac, 
    0x3e1aaea9, 0xbe2914c6, 0xbdef1a09, 0xbd4da607, 0xbea68598, 0x3cb0184c, 0x3e1a00aa, 0x3da5754a, 
    0xbdd0a074, 0xbdcc6852, 0x3e58dc45, 0x3d16bf3e, 0x3e256291, 0x3e0730be, 0x3deb9b51, 0x3d851e97, 
    0xbd9da469, 0x3dd79c39, 0x3e2dd1c4, 0x3aa9f1ab, 0xbc2fa5cd, 0x3ca7ed21, 0xbda05596, 0xbcc19d2d, 
    0x3dc27e07, 0xbe0f2519, 0x3dc4f8c6, 0x3e2223a3, 0x3be27ad0, 0x3e256a76, 0x3dd7022b, 0x3e3058cd, 
    0x3e1a1b1f, 0x3d2045f5, 0xbe0166a3, 0xbd9a71eb, 0xbd0c6154, 0xbe34b2b4, 0xbca7fbf6, 0xbdc234a4, 
    0x3e484dc9, 0x3e0384bb, 0xbdd85c57, 0x3d76bde3, 0xbdd4a300, 0x3d9e6e0e, 0xbdfcb76c, 0xbc09d4ca, 
    0x3e4c1949, 0x3ddb53e7, 0xbe1d1c7e, 0x3d97f7a7, 0xbe1bb44b, 0x3cc4296e, 0xbdf5710d, 0xbd12cdcd, 
    0xbd134692, 0xbe3ba3dd, 0xbdba3768, 0xbe3e6172, 0xbe39942c, 0xbb8f17d7, 0xbca6e241, 0x3e40d09b, 
    0xbe14efc5, 0xbe0e83fa, 0xbe3820c4, 0x3d6af56c, 0xbdeca400, 0x3c035ff1, 0xbe59fa59, 0xbd4a9617, 
    0x3e224630, 0xbdba4837, 0xbe40d376, 0xbe29163b, 0xbdc25fdb, 0xbc6bfc34, 0xbde8dfce, 0xbddad699, 
    0xbda81073, 0xbd284dee, 0xbe5ce8d7, 0xbe5709ad, 0xbde77550, 0x3d444e03, 0x3e100367, 0x3d9ef82c, 
    0x3e3ec6d8, 0xbe183a74, 0xbdbb7ad3, 0x3e385476, 0xbe3a4dda, 0x3e246276, 0x3e4c2eea, 0x3d1aafb2, 
    0xbdbe20bf, 0xba01a2d1, 0x3dbad4f5, 0x3d8dabfa, 0xbe190fe9, 0x3e6782c2, 0x3d38df24, 0xbdfccd94, 
    0xbe4dff20, 0xbe209ba9, 0x3d85a48a, 0x3e18dd37, 0xbd4a6078, 0xbb5ee81a, 0x3e4784cb, 0x3e1595ad, 
    0x3d4188ee, 0xbe190fee, 0x3dacf6f4, 0x3e3a806b, 0xbe004d2a, 0x3d8b6049, 0xbe5b90a0, 0x3dd2f6ea, 
    0xbd2f4bea, 0xbdaecde9, 0xbe343cc0, 0xbd688a5b, 0xbd704068, 0xbdad7920, 0x3e876327, 0x3e370cbe, 
    0xbd857554, 0x3cf2577e, 0x3e25ba71, 0xbdf71b67, 0xbe01ecb6, 0x3bff795c, 0x3d2f51a1, 0xbc5b538b, 
    0xbdc6fa2d, 0x3da8c53f, 0xbc411d4d, 0xbe438a62, 0x3c79cbe5, 0xbe2cda76, 0xbe3e2c57, 0x3d8bfe54, 
    0x3d96d9af, 0xbd86cbf6, 0x3dba9b69, 0xbe3e0baa, 0x3c07b5b6, 0x3e1ed14f, 0x3bea6009, 0x3e449581, 
    0x3c3fa38c, 0x3e68b3e9, 0xbe03cd61, 0xbe0d4657, 0xbd1f62d5, 0xbdd54d37, 0xbd8e6d89, 0xbe22964f, 
    0xbd874de8, 0x3e16556c, 0xbcae21a1, 0x3da92517, 0xbd024f3d, 0xbe43d6a8, 0xbe6546cc, 0x3df5e75c, 
    0x3c1585d8, 0x3d374621, 0xbdaf0f6c, 0x3e2eadae, 0x3de96d3b, 0xbe01bfea, 0xbdc2ff91, 0x3dbf1e86, 
    0xbe1b93a8, 0x3d9c5d6a, 0xbdac11df, 0xbe1e3445, 0x3d8f4e24, 0x3c59b79b, 0x3dd07991, 0x3e8542e9, 
    0xbe859367, 0x3da48a50, 0xbe0cde19, 0x3e65f4ca, 0xbe1ee580, 0xbd602ffc, 0xbdaecb06, 0x3c109cd9, 
    0x3e2954ae, 0xbd285c99, 0xbe5584dc, 0xbe3cfe00, 0xbe464868, 0xbe31f3cb, 0x3dfce8ae, 0xbcf3214f, 
    0xbe43d5f9, 0x3e23172c, 0x3e151cc8, 0xbe00a08f, 0x3e59db5f, 0xbe411540, 0x3d7b5d0e, 0xbe0fbe65, 
    0xbe1cb2a6, 0x3e2549b5, 0x3e0e43bd, 0x3da372b2, 0xbdebcb9f, 0xbce7e79c, 0x3e2951d3, 0x3e164793, 
    0xbd17adf2, 0xbc02f9c4, 0x3e6b54ec, 0xbd5adbc5, 0x3d30a0a7, 0x3e021f9b, 0x3da30749, 0xbc7c79fe, 
    0xbd3a759d, 0x3e479ece, 0xbe43c9e0, 0xbe051367, 0xbdec23a7, 0x3e093215, 0xbe3d9b07, 0x3c978759, 
    0xbe257fd5, 0x3e1ef30f, 0xbd6ab6a9, 0x3dfd815b, 0x3da99822, 0xbe6334ac, 0xbd91a6c9, 0x3e126b26, 
    0x3d9daeda, 0x3db7e089, 0xbde379c1, 0x3dbca5c0, 0xbc8ad7e4, 0xbca0a42f, 0x3d8aeb67, 0xbd9e4a65, 
    0x3e26ecc2, 0x3e08e69a, 0x3daabd26, 0x3e2589a9, 0xbd96da29, 0x3d44653f, 0xbe531a6e, 0x3e56ac53, 
    0xbb3bbeff, 0x3db5c8cb, 0x3e1b1993, 0x3d89b123, 0xbe13281d, 0x3db39f9c, 0x3dde3844, 0x3e362f51, 
    0xbdedf8b5, 0x3e1c9909, 0xbcc5bf50, 0x3e1a9e6f, 0x3dd14c16, 0xbdaca8b8, 0xbe012e39, 0x3e0bbf4f, 
    0x3ddd062a, 0x3e293c05, 0xbdcf1798, 0xbe0e47ab, 0x3cb1e3ad, 0xbcc3847b, 0x3e420147, 0x3cb3e0ee, 
    0xbe0ba767, 0x3daf9b9d, 0xbdd7d745, 0xbe3a09b3, 0x3e295f05, 0xbc4e135e, 0x3c0dd90e, 0xbd3e5fdb, 
    0x3e2a2409, 0xbe1635da, 0xbd156c4a, 0x3d97922e, 0x3dfc0218, 0xbc9c1c57, 0x3dfd9fb1, 0x3c81b1cb, 
    0xbd7bf170, 0x3e1f71dc, 0x3e306390, 0x3e471d5a, 0x3e3b8ecc, 0x3cd4bbe9, 0x3e6ec675, 0x3e2044f5, 
    0xbd2035f9, 0xbd6cfb97, 0x3c319a4c, 0x3dd9a4fb, 0x3d1d9ea4, 0xbe51dc6e, 0x3e152088, 0xbe5ccbba, 
    0x3dace9fc, 0xbe1c9bb5, 0x3d7aeec1, 0xbe10df43, 0xbc0aa956, 0xbe4edd89, 0xbdf9526f, 0xbdab39ff, 
    0xbb4822fe, 0xbdb52776, 0x3d44c196, 0xbddbeef5, 0xbe3416da, 0xbdfbf6b2, 0x3dd5b05e, 0x3d980a0f, 
    0xbd994bd1, 0x3e35da66, 0x3e0e718f, 0x3d833e88, 0x3e161194, 0x3e3be343, 0xbd242acb, 0xbe36acb9, 
    0x3e240544, 0x3e60768a, 0xbe2b3e65, 0x3dbcebf3, 0xbe5b1e85, 0x3d917c5a, 0x3e3be17d, 0xbde0b8d0, 
    0xbe43ad34, 0x3d9374cc, 0xbdac1328, 0xba7e6e77, 0xbdd5516a, 0xbde230bc, 0xbdd97253, 0xbe20e09d, 
    0x3e153047, 0x3df21404, 0xbd09c04f, 0xbd81ab17, 0xbe07128e, 0xbd648428, 0xbe1e7f31, 0xbd500267, 
    0x3dbb67ef, 0x3ce2fe4f, 0x3b9f81ec, 0x3c8f025e, 0x3c6f52bd, 0xbe4eeac6, 0xbe390dd2, 0xbe0706f1, 
    0xbd27f76d, 0x3e2c2874, 0xbd778265, 0xbd5f6e33, 0x3e16aa66, 0xbded24e9, 0x3e4ac13e, 0xbdbf9985, 
    0xbc1aaaab, 0x3e4b107f, 0x3dcb2963, 0x3e390564, 0x3e27af0a, 0xbe071ed6, 0x3e1e04d6, 0x3e29d157, 
    0x3e154d35, 0x3e094cc8, 0xbdc1e1c2, 0x3e0f6ca5, 0xbe26f815, 0x3e5218b8, 0xbe5f55be, 0xbd5136d0, 
    0xbd211a26, 0xbe67e9dc, 0x3df0e4e7, 0xbcd550da, 0x3d8c4112, 0xba9f78ca, 0xbe1dae1e, 0x3d96e298, 
    0x3e2dbc9b, 0x3e3a2c9b, 0x3dcda06c, 0xbd485bee, 0xbbc297b5, 0x3df74752, 0xbe4291ec, 0x3d71ea0a, 
    0xbe0c92d5, 0xbe294eb6, 0x3d139025, 0xbd05b6e2, 0x3e1f8d40, 0xbd844336, 0x3d5f72f7, 0x3e39cdd8, 
    0xbde18140, 0xbb529fe8, 0xbe0f7bd0, 0x3dad87d7, 0x3de1fa77, 0xbcf92843, 0x3e13ba26, 0xbe30f445, 
    0x3e591e10, 0xbd90ce47, 0xbd490e27, 0xbd22f1e4, 0xbe5bf090, 0xbe20ef7c, 0xbe13e80e, 0x3dfb212a, 
    0xbb89951a, 0xbd6f7f0d, 0xbdeca57b, 0xbe510c25, 0xbd8c4ef5, 0xbd819fe5, 0xbd2b340c, 0x3e2e3f77, 
    0x3e1b130e, 0x3ca338e3, 0xbcbdcbdb, 0xbcbeaf74, 0x3e009523, 0xbe2313a1, 0x3dfd2c05, 0x3cf6516b, 
    0x3e5be4f5, 0x3db1f88e, 0xbe2d808c, 0xbd8cdefc, 0xbe3ebe19, 0xbde27065, 0x3e0e5a5f, 0x3d88e704, 
    0x3e283733, 0x3db28eeb, 0x3daf2ce5, 0x3e3d7442, 0x3e3b8c70, 0xbcba8d30, 0x3ddf9ca5, 0x3e20e65e, 
    0x3bbb5c5c, 0x3e213efe, 0xbe24c9f4, 0x3d8ae7e9, 0xbde564e0, 0x3d3a89c5, 0xbe0a6061, 0xbe39ea1b, 
    0xbdbce244, 0x3dca305c, 0xbda07cac, 0xbc145242, 0xbe313345, 0x3e4194d8, 0xb9b321e3, 0x3e6f7eb5, 
    0x3e049080, 0xbe3e6cde, 0x3e050577, 0x3e5877c5, 0xbe02d3b4, 0x3dcb8e45, 0xbcd894b2, 0xbda89d9d, 
    0x3e7ddb06, 0xbdcec10f, 0x3c7ea1bd, 0x3de287e5, 0xbdde29a0, 0xbe135e18, 0xbdfb6312, 0x3d254acd, 
    0xbe346cd1, 0x3df4241f, 0xbd462a01, 0x3e43a5a0, 0x3e4a657d, 0x3e581c0c, 0xbe85610e, 0xbd68d8a5, 
    0xbd441581, 0x3db03146, 0x3cb23e33, 0x3e32c31a, 0x3cfb7260, 0x3e3237fe, 0x3ce22d5a, 0xbc7881d3, 
    0x3dc26218, 0x3bd58150, 0xbe5913f5, 0x3e9a7c90, 0x3e0d4d90, 0xbda03d36, 0x3e55f41d, 0x3e4efafa, 
    0xbe0bd433, 0x3cda4ad0, 0xbd12948a, 0x3d829049, 0x3cbe629a, 0xbe031ad7, 0xbda2c567, 0x3ce9a784, 
    0xbe40ed28, 0x3d760b4b, 0x3dc16de5, 0xbcf65515, 0xbc1a9425, 0xbddc0f58, 0x3c58f7fe, 0xbe27a189, 
    0x3e2372e9, 0x3c9897fd, 0x3c9b4e84, 0x3e34f9b2, 0x3bae3bfa, 0x3b5365e6, 0x3d54b368, 0x3c97746d, 
    0xbe395044, 0x3d65a79a, 0x3dd56b71, 0xbdf9f5e7, 0xbd31e9ad, 0xbe3bb929, 0x3d66983d, 0xbe55b68a, 
    0xbdc817c6, 0xbe1a2087, 0x3dacceeb, 0x3dce44ab, 0xbe06cd3f, 0xbd337623, 0xbd865bb7, 0xbd68c323, 
    0xbe3e9585, 0xbdc1adc0, 0xbb954291, 0x3e14c538, 0x3dbabbb9, 0x3e0ee742, 0x3d37563e, 0xbe1c97c4, 
    0xbe73037d, 0x3dbdfecd, 0x3e038c58, 0xbd4b7a36, 0x3dd86bf8, 0xbc21b9d6, 0x3e225150, 0x3d2467dd, 
    0x3cb9be91, 0x3e011767, 0xbcb1e471, 0xbe05fc20, 0xbde50acf, 0x3d94ff1f, 0xbe06c68f, 0x3d27083f, 
    0xbd1e4f28, 0x3d869bff, 0x3d037b8b, 0x3cf355b1, 0x3d3f4be1, 0x3dcc6587, 0x3de7718b, 0xbe5cbe85, 
    0x3df7dbfd, 0x3d988b2d, 0x3d373067, 0x3c986707, 0x3e6586b7, 0xbdb8114f, 0x3c906483, 0xbdbe18e3, 
    0x3dcc24b9, 0x3e3fc3b5, 0xbd3f8062, 0xbe26cdeb, 0x3e4eeb3d, 0x3de3931d, 0x3d440a7b, 0xbbca48e1, 
    0x3e086411, 0xbde003f6, 0xbe2147b4, 0xbdf4be27, 0xba5275d7, 0xbe00667d, 0xbd8ebf48, 0xbe103673, 
    0xbc4b1c1e, 0x3d9fe86f, 0x3e4cbc21, 0xbd4c53d7, 0xbe2ca5bf, 0xbdedd697, 0x3dcb2e93, 0xbdc100b8, 
    0xbd87b742, 0xbde4dab4, 0x3de9d849, 0x3e3de1e6, 0xbe351af2, 0xbe5f49ea, 0x3d175832, 0xbe423fbe, 
    0x3d9c893e, 0xbd3a70e1, 0x3e8838fd, 0x3e4b20c0, 0x3c640145, 0xbe84cbb2, 0xbe82385a, 0xbd99a0ec, 
    0xbdf9143c, 0x3e56821c, 0xbd84a37b, 0xbd84f35f, 0x3dd43039, 0xbe1fa74a, 0xbe339e41, 0xbd6a8935, 
    0xbdb1b767, 0xbe0bf287, 0xbdbd4336, 0x3e2f7811, 0x3c5a4fe4, 0xbce78b0c, 0x3d943caf, 0x3cbc4d3b, 
    0xbdf75efd, 0x3cddb0c2, 0xbe0b83e3, 0xbdeaada1, 0x3e5fed3a, 0xbd71613a, 0x3e18fb51, 0x3e37166e, 
    0xbe4a1468, 0xbdc60737, 0xbc9e986a, 0xbd18ec23, 0x3e774089, 0x3dbfd62d, 0xbe0b1e13, 0xbe0f9350, 
    0x3e3aa8e4, 0x3e4c78a6, 0xbc8e3611, 0xbcb9594a, 0xbe230db2, 0x3c48b9a6, 0xbdbeb4a1, 0x3c843dbd, 
    0x3e455190, 0x3caea8a3, 0x3d07f628, 0x3bf87f9b, 0x3e0824ac, 0x3e0fe973, 0x3dfb4725, 0x3d607b00, 
    0xbdad2417, 0xbdec6a62, 0x3d157f5f, 0x3e8124cb, 0x3dc903bc, 0x3ddab3f1, 0x3cd73d98, 0xbe39334c, 
    0x3dbd3697, 0xbe1116e2, 0x3d13938d, 0xbe4ab71e, 0x3df0995a, 0x3de01941, 0xbdd8b110, 0xbd0a78bd, 
    0xbe3bd1b2, 0x3e43f49a, 0xbe4208cf, 0x3e094cd3, 0xbae7aca4, 0x3e2e67b1, 0xbdcad36d, 0xbe469c9a, 
    0xbe60a4f3, 0x3d95c3a4, 0x3d908ece, 0x3dc07e3a, 0x3e45b209, 0x3c99ebda, 0xbe56dae1, 0xbe65a543, 
    0xbda101d6, 0xbd451817, 0x3d448294, 0x3e8bc11b, 0xbd86d90f, 0x3c9a7c95, 0x3daf72fe, 0x3e31f5d1, 
    0x3e27f60a, 0x3e284c7f, 0x3df7591f, 0x3e2b8010, 0xbdcad679, 0x3dc4080c, 0x3e098a28, 0xbe46a70c, 
    0x3d7af061, 0xbe43efa6, 0xbda7dff7, 0x3c49f4f0, 0x3e1c9c76, 0x3e20dbae, 0x3de62c70, 0xbdf5cb9d, 
    0x3e1e5552, 0x3e13e981, 0x3d2ce850, 0x3dffc73b, 0xbe5e1f2d, 0xbccb2796, 0x3e004c6c, 0xbd386a2a, 
    0xbe0c77c9, 0xbe1eebd9, 0xbdf46285, 0xbc889cc6, 0xbe1bb53f, 0x3dbbc883, 0xbdd902f0, 0xbe5aafda, 
    0x3de708d4, 0xbe67b2c1, 0x3dc460f4, 0xbddf2630, 0xbdc4c063, 0xbd94236b, 0x3d3d43cf, 0x3e408950, 
    0xbdeec72f, 0x3cbf4e42, 0x3e0db696, 0xbe06059f, 0x3e1141f1, 0x3cad6e9b, 0x3e0ccffb, 0x3e1b31ad, 
    0xbe696c5c, 0x3d5cc232, 0x3d279741, 0xbdaafd27, 0x3e55ac6d, 0xbd1847a4, 0x3bdde2cc, 0x3db2d3eb, 
    0x3cd47864, 0xbe5ed807, 0xbc9d8f6f, 0x3cb2d799, 0x3ddf6cd9, 0xbd1980ba, 0xbd8d281e, 0xbdd8c393, 
    0x3e2047e3, 0x3e11a734, 0x3cd24654, 0x3cd7ea26, 0xbd1920e4, 0xbdd6cc59, 0x3da466b0, 0xbd9ca187, 
    0x3dc67be1, 0xbe3cc68e, 0x3dbbc5b7, 0x3cf537cd, 0xbddda9a8, 0x3d1e2694, 0x3de2b9f1, 0xbd8e585d, 
    0x3da77002, 0x3b29c89e, 0x3c42c89c, 0xbe1bcedb, 0xbd100d26, 0x3c94cc1d, 0xbe89f845, 0xbd7a69fd, 
    0xbe0c48eb, 0x3e27b26d, 0x3dcd1b95, 0xbca8afce, 0xbc325862, 0xbe31bbb5, 0x3de04ba8, 0xbd6beb0b, 
    0xbe0540eb, 0xbdac0de9, 0x3dd46b44, 0x3dec0ae4, 0xbcb10278, 0xbcd377f5, 0x3dd8fe6c, 0xbd3dd2da, 
    0xbe00e2ae, 0xbe3cfc50, 0x3df2e42d, 0xbe00bfe1, 0xbe597653, 0x3e0fd0fc, 0xbc702493, 0xbe177b68, 
    0x3d4921fb, 0xbde9f79c, 0xbda84e8c, 0x3de29ed4, 0x3e61488c, 0x3cb6d214, 0xbd11e495, 0x3e0ff313, 
    0xbe18a1f9, 0xbde82e95, 0x3e1c5a40, 0x3e539724, 0x3e3b69bf, 0x3bd3ad40, 0x3e3d1591, 0x3d3d6ae6, 
    0x3e30191c, 0x3e3f2739, 0xbe4a1f51, 0xbdc37d06, 0x3e00d610, 0x3d028b08, 0xbde4aaef, 0xbd85a351, 
    0xbcd8b803, 0xbe33f74b, 0xba030c6f, 0x3dca36cb, 0xbd4de985, 0xbe494ff8, 0x3d297951, 0xbd79c5f7, 
    0x3dd5ecc8, 0xbdd51107, 0x3d6d2d20, 0x3dcae56b, 0x3d5912e3, 0xbca60b2c, 0xbcf92a5d, 0x3e29f253, 
    0xbcfb110c, 0x3d6718c2, 0xbd3b29b8, 0xbd8b2343, 0x3c8a82c7, 0x3da50905, 0x3d164de7, 0xbe0bc4be, 
    0xbd6a0b88, 0xbe28e40b, 0x3db79816, 0xbd806618, 0xbd3b8dc2, 0x3d5ca0f2, 0xbdf18f7d, 0xbc0dfe5d, 
    0x3e0ffd0d, 0xbd8f5292, 0x3df6bf2d, 0xbe2f45f0, 0x3cc56569, 0x3d84b4a0, 0x3dd6ce5f, 0x3dd49a3d, 
    0x3c359725, 0xbe52d312, 0xbd3fe74e, 0x3cf1d4e4, 0xbe0ae53f, 0xbba9bc71, 0xbe0d0232, 0xbe330abb, 
    0x3cba363f, 0x3dbcfd98, 0x3e132acb, 0xbe4230ad, 0x3d52d5f8, 0xbc6a0805, 0x3d995d9f, 0x3cd68497, 
    0x3e3354a8, 0xbd8aee8f
};

static const uint32_t _K19[] = {
    0x39ed1c87, 0x3db9d37a, 0xbd438a51, 0xbd6501a3, 0xbd4be5bc, 0xbc58da42, 0xbb78f781, 0x3cf2bb4c, 
    0xbc941f69, 0x3d449fd2, 0xbd098dc1, 0x3c5743e9, 0xbcb54290
};

static const uint32_t _K22[] = {
    0x3c41e713, 0x3df1a675, 0x3e00cea9, 0x3dd354f2, 0xbe4bb082, 0x3e2aea23, 0x3e53d651, 0xbe840c1e, 
    0x3e6078dc, 0xbe2902c6, 0xbc012c37, 0x3cec990d, 0x3e911125, 0xbdb27726, 0xbd40cb9b, 0x3dadf064, 
    0x3c4ffe01, 0xbe046f0c, 0xbd0d224f, 0x3e8136e0, 0x3e1bc83d, 0xbdec9cb3, 0xbe0fbc15, 0xbd0d7161, 
    0xbe56737a, 0xbdfbf719, 0xbe1f5a1c, 0x3d8faae5, 0x3da87a3c, 0xbe1acab7, 0x3e220110, 0xbe0af970, 
    0x3e522e19, 0x3c1042dc, 0x3dfd8e83, 0xbe587414, 0x3e7f3625, 0xbd961980, 0xbdc0dbf7, 0xbd32cbc3, 
    0xbe758105, 0xbe5749bc, 0x3de2b132, 0xbe4d61cd, 0x3d98e5af, 0xbe0a79bd, 0x3d181de1, 0xbec00883, 
    0x3e34ef22, 0xbe1ea868, 0xbe0a4862, 0x3e0e8d06, 0x3e81d476, 0xbe5fa327, 0xbe669ea4, 0xbe6a79ea, 
    0xbe84fc01, 0xbe0493d1, 0xbd7f558b, 0x3e7eed6f, 0x3da81e2c, 0xbcc3da69, 0xbe37e758, 0x3c843747, 
    0xbd6c945a, 0xba663572, 0xbd276f16, 0xbdbcf81f, 0x3e13e6da, 0xbe50308a, 0x3d9c3203, 0xbe57fdc3, 
    0x3de9e23c, 0xbdf1442f, 0x3e0632a7, 0xbd56d898, 0x3ca110c0, 0x3bccbc3e, 0x3e3cf418, 0x3df89296, 
    0xbe24ce38, 0xbe35fbc6, 0xbe1ad77c, 0xbdb4d57c, 0x3d1ab27b, 0x3e233e14, 0xbdf22e5e, 0xbd5cebf7, 
    0xbe8d5bc9, 0xbde8d572, 0xbe80a524, 0xbe6d4128, 0xbdd42862, 0x3d801f6e, 0xbd26bca9, 0xbe50868e, 
    0x3e048f99, 0xbe5e3b93, 0xbe30358e, 0xbd8f337f, 0xbd876eda, 0xbe63c8d1, 0xbd79eb0f, 0xbe35261c, 
    0xbdc4244c, 0xbddd423c, 0xbe817992, 0xbd8c8442, 0xbda81eb7, 0x3d4ea56c, 0x3e2c132d, 0xbac730d0, 
    0x3e08c3c9, 0x3d674550, 0xbe07e39b, 0xbe74dd6e, 0x3e78ff75, 0xbe02f95d, 0xbba6a9b7, 0x3d210b12, 
    0x3d5bf86f, 0xbe523675, 0x3e903985, 0x3e25a538, 0x3dccfb0c, 0x3e47e59c, 0xbe1fbd53, 0x3e8d9427, 
    0x3dbc6f1a, 0xbe6f925b, 0xbdbec37a, 0xbe0cf6ec, 0xbe562a78, 0x3dec60c5, 0x3ccf8b1a, 0xbe43d62b, 
    0xbcee8fae, 0x3c5ec225, 0x3e984004, 0xbe05e40e, 0xbd1ce408, 0xbc838b54, 0xbdc50fc5, 0x3e1f6b3f, 
    0xbe240ce2, 0x3e7d3fbe, 0xbe6c9e4d, 0x3e6cd760, 0x3e3298fc, 0x3dae89c7, 0x3de1e3d2, 0x3e7fe34a, 
    0x3e02ed05, 0xbda54a03, 0xbdc8bd2e, 0x3d7241fc, 0x3e4c3dbc, 0xbc0acd39, 0x3dd92a30, 0x3e61e1a1, 
    0xbd5adbe0, 0xbd09b5b2, 0x3e1a8773, 0xbe905f1b, 0xbe119cda, 0x3dafd1bb, 0x3e879140, 0x3e57d45e, 
    0x3d4aeae8, 0x3db13dae, 0x3d92fe94, 0x3e3d7be4, 0x3e0bb6de, 0x3e121fcb, 0x3e6f84ce, 0x3da31f10, 
    0xbe006e04, 0xbd8ce484, 0xbd5a2a7b, 0x3e3695af, 0xbd48277b, 0x3ce41832, 0xbd82ecc3, 0xbe3bec75, 
    0xbe03b5cf, 0x3e346d58, 0x3dc82abe, 0x3e73eb04, 0x3e5d2045, 0xbd19b061, 0xbdf1fa81, 0xbe5f59c0, 
    0x3e5b8bfd, 0x3e5a9468, 0x3e77a5e7, 0xbdf2e6ac, 0x3d9a9f83, 0xbd233cfe, 0xbe8ac22a, 0x3e2e3b2b, 
    0xbe5db63f, 0xbdc6e919, 0xbdb53a3d, 0x3e79ec0c, 0x3e9c9fbd, 0x3e6bfe63, 0x3e54d307, 0xbd86e5d1, 
    0xbe0fa37f, 0xbdc48918, 0xbabfcefd, 0x3d590e53, 0xbe5683c6, 0x3e538c20, 0xbe24d807, 0xbdc63d8b, 
    0x3e839662, 0x3e4975de, 0xbc7be8fe, 0xbd85804a, 0x3c8b72a5, 0x3e2ef6d9, 0xbdc635a8, 0x3e2b4ded, 
    0xbbe47f34, 0xbd828867, 0xbdfbc216, 0xbdc8027b, 0x3d5f116f, 0x3c24c34f, 0x3e10e18f, 0xbdc9941e, 
    0x3d0b291a, 0x3d193317, 0xbe1108b1, 0xbd3573fa, 0x3db624e6, 0x3ead95ff, 0x3c26e430, 0x3e1424c5, 
    0x3da4aaec, 0xbdcf02c6, 0x3d77b2a2, 0x3e157370, 0xbddd62e8, 0x3a0eb55f, 0x3da87181, 0xbd5d7482, 
    0xbe1b9dff, 0xbdd74eb0, 0x3e9632fd, 0x3d515caf, 0xbe365130, 0xbe999d19, 0xbe35d47a, 0x3d562567, 
    0x3d78e424, 0xbe3cfcc7, 0x3e3a3078, 0xbdf6ac0b, 0x3d9e3b56, 0xbe1d3a5b, 0xbe669f94, 0x3d727549, 
    0x3e290a08, 0x3e55ac60, 0xbdc4564e, 0x3e3ae229, 0x3e476cf3, 0xbdd66975, 0x3dc516af, 0x3e24f9db, 
    0x3e2457b8, 0xbddef788, 0xbe118396, 0x3e98e7cc, 0xbb94c9d2, 0xbe04b00e, 0x3dbc2222, 0xbdf19645, 
    0x3e18afbd, 0xbe018d76, 0x3dcd70b6, 0x3e263339, 0xbe2539a1, 0x3b578e67, 0x3ca05fb5, 0x3cf23554, 
    0x3e0cdf06, 0xbe152b7b, 0xbe0cacd1, 0xbccb379b, 0xbe18e3f1, 0xbd44cdc8, 0xbd46bcda, 0x3e18c356, 
    0x3ceb389d, 0x3e29d149, 0x3e02de78, 0x3e01661c, 0x3c7eaa69, 0x3e9dce51, 0xbe2cd8ff, 0x3d5192f1, 
    0xbb117c55, 0xbda1c749, 0xbd12eff9, 0xbe2ca0c3, 0xbe2458f3, 0x3dbe526c, 0x3e986272, 0x3e0b0edc, 
    0x3c7a124b, 0xbdb31ab4, 0x3dec2fad, 0xbe5ff1d9, 0x3da11231, 0xbe88d818, 0xbde2461c, 0x3d65b3c8, 
    0x3e8efdba, 0x3e1f066a, 0xbe3484b1, 0x3e33bede, 0xbcc042c0, 0xbd7d0f39, 0x3e01aa3b, 0x3bcf4e5f, 
    0xbe55049a, 0x3d927938, 0xbd9fb14e, 0x3e3c1e00, 0x3dacf6ed, 0x3e2cb97c, 0xbd649a26, 0xbd94f713, 
    0xbca64a54, 0xbd82c0dc, 0xbe38724c, 0x3c31e32b, 0x3e455a20, 0x3d85a9b8, 0x3e2070d7, 0xbc93220c, 
    0xbcf42c29, 0xbe0b75e9, 0x3e18ff18, 0xbe6bca4f, 0x3d919ade, 0xbe23ba79, 0xbd7e6ae3, 0xbcb693a7, 
    0xbd5cdbf3, 0xbc109ce3, 0x3b4ac83c, 0xbe5efbfe, 0xbe032b02, 0x3e32ac92, 0x3d819322, 0xbe024f0c, 
    0xbd5bd62d, 0xbd46754e, 0xbc763225, 0xbd8911e0, 0x3e253a6c, 0xbe733b8d, 0x3c42506c, 0x3e268acb, 
    0xbd2f984b, 0xbe19077e, 0x3e1013b2, 0x3ba7b451, 0x3e0aa042, 0x36815730, 0xbe214b86, 0x3b97726c, 
    0x3e1008d4, 0x3deb41a7, 0x3da51c51, 0xbd67c70e, 0xbd978f24, 0xbe426343, 0xbe658830, 0x3e241ae1, 
    0xbdc453e9, 0x3e46a0d7, 0xbe6f2b63, 0xbe8439da, 0xbd3914ba, 0xbcadb6c4, 0x3e246f42, 0x3e5327af, 
    0xbdae5b48, 0x3c85aaa8, 0x3dcbab2e, 0xbdaf38ec, 0xbe3d2fa4, 0x3df74da4, 0x3d3972e8, 0xbe156e8f, 
    0xbd98357e, 0x3b004bee, 0x3dd59576, 0xbe864ae8, 0x3cfe3a4c, 0x3e7896fd, 0x3dbf76c0, 0x3de02e7f, 
    0xbe3ae767, 0xbe6d8e7c, 0x3d9aedf1, 0xbe072b86, 0x3e31e63d, 0x3ea0b9bc, 0x3c6b0f94, 0x3e0987b9, 
    0xbe892fe0, 0xbd9c0947, 0x3e5f96c8, 0x3d7603b1, 0x3e670464, 0xbba9a696, 0xbe821107, 0xbda71b0d, 
    0xbe1f00e2, 0xbd984ea8, 0xbde42817, 0x3e29f352, 0x3def159a, 0xbc178708, 0x3e4db677, 0x3e124c63, 
    0xbe0a0e30, 0xbe11751d, 0x3d9fc08d, 0x3e660f71, 0x3e1e4c55, 0x3e73ce5b, 0x3c85c57c, 0xbe20534e, 
    0x3e02d750, 0xbbfc5245, 0xbd6ad2e4, 0xbdd919f2, 0xbe45e262, 0x3e8db476, 0xbd9629aa, 0x3c281ffc, 
    0xbd01e2cf, 0xbc709e70, 0xbe561926, 0xbe4c8eef, 0x3e4611be, 0xbdb0826d, 0x3e6ef943, 0xbe8b95ec, 
    0xbd97d40a, 0x3e1b73e8, 0x3a380b0e, 0xbe668b8b, 0x3b15124e, 0x3d1aca50, 0x3d7c0304, 0xbe121ce0, 
    0xbe6b8294, 0x3d58a433, 0xbcf9c099, 0x3e9aeb41, 0x3dfc9940, 0x3e1b5ae8, 0xbd9ea15f, 0x3e67c675, 
    0xbe67262c, 0x3e6bf0a4, 0xbde1c171, 0x3e659cfe, 0x3e85003e, 0xbd0f1fca, 0x3d7bb251, 0xbe2df57e, 
    0xbe42eb5f, 0x3c263cb0, 0x3e880329, 0x3e34c1b8, 0x3e340c32, 0x3e3cf301, 0x3e3c6a33, 0xbe157e58, 
    0xbd15d7ba, 0x3d43a755, 0x3e419b50, 0x3de31559, 0x3dc2495b, 0x3e5a4797, 0xbdc34db1, 0x3e6f3334, 
    0xbe15081e, 0x3d7d02e2, 0xbdaa277b, 0x3e6daf9a, 0xbe0e3d6e, 0x3d687756, 0x3e8672c5, 0xbd9b4987, 
    0xbde36702, 0x3e06e6ec, 0x3d1a5e6b, 0xbd8ebacd, 0x3dcb60f7, 0x3e22e9e9, 0x3e829453, 0x3c45cfee, 
    0x3c673953, 0xbdcdd553, 0x3e2759d5, 0x3d058aab, 0x3e5cdf17, 0xbe2b3eb7, 0xbdf0aed4, 0xbdb8d43a, 
    0x3d7dadb0, 0xbe298af4, 0x3db9ff57, 0x3da4b996, 0xbde8b0b9, 0xbe1cb83e, 0x3d9106ee, 0xbe08a32b, 
    0xbd4f53c7, 0x3e039042, 0xbe7322c7, 0xbe778217, 0xbdd45e63, 0x3d24606d, 0xbc0e1697, 0xbe0e1f51, 
    0xbe2685d0, 0xbe5092fc, 0x3e066ccc, 0xbe823a3c, 0x3e054b2b, 0xbdb9bcb8, 0x3e8b098b, 0x3ca81964, 
    0xbde3bcfc, 0x3e7c7249, 0x3e4ecceb, 0x3d728570, 0xbe467687, 0xbe45be01, 0xbca85ada, 0xbddbb2ab, 
    0xbe8ee41c, 0xbb2f5022, 0xbe1a05f7, 0xbb986f62, 0xbdc07ba1, 0x3e3c67cd, 0xbe70f58b, 0xbe052d0a, 
    0x3d0db3a0, 0x3e64a01a, 0xbe1cebf5, 0x3e297b39, 0xbe77cd02, 0x3cbf21a2, 0xbdf6f404, 0x3da5a117, 
    0xbd1f65d5, 0xbe16350f, 0xbc7dc887, 0x3e2a60c3, 0xbe294391, 0xbe17b3d8, 0x3e953b42, 0xbd5b0162, 
    0xbe0cf69d, 0x3d1fd784, 0xbe6b6324, 0xbd990f39, 0xbe4e0461, 0x3ddd0e4d, 0x3e7d3639, 0xbded80aa, 
    0xbe5cc3e1, 0xbd76c449, 0xbe89fc1e, 0x3da9fc0f, 0x3e204da5, 0x3cb0a9d7, 0x3dcd7c4c, 0xbc8059c3, 
    0xbe379d4a, 0x3c418291, 0x3d562f5b, 0x3e15fff6, 0xbe606b4a, 0xbd86745d, 0x3da36b6e, 0xbe76cdc6, 
    0xbd8a8849, 0xbcee3c56, 0x3e5fc3a9, 0xbe51a3eb, 0x3e107c23, 0xbe306b4e, 0xbe1d122b, 0xbe53d704, 
    0x3dc69647, 0x3dd200c7, 0x3de5cdb7, 0xbe3e4a13, 0xbd2da968, 0xbd813296, 0x3e26108e, 0x3e0d8f7b, 
    0xbe4fbd05, 0x3d61b622, 0xbe91a66f, 0xbe30a788, 0xbe9255a2, 0xbe4f5575, 0xbe2e0065, 0xbdb9055f
};

static const uint32_t _K24[] = {
    0x3e9f8ee6, 0x3f38b513, 0x3f1128d4, 0x3eb134b1, 0x3f175ae0, 0x3f73b22e, 0x3ed4d0c3, 0x3e9add8f, 
    0x3f63f06d, 0x3f099b78, 0x3f054974, 0x3e978340, 0x3f84773a, 0x3f59a86d, 0x3f0d6fc2, 0x3eea5879
};

static const uint32_t _K25[] = {
    0x3f040035, 0x3d892a68, 0x3f0bda04, 0x3d909e80, 0x3c950f74, 0x3def0fd5, 0xbf145042, 0x3f6f6309, 
    0xbdc5e637, 0xbf104438, 0x3f214e53, 0x3f1c859b, 0xbda2f65f, 0xbeb1a71d, 0x3f460293, 0x3cfd6b6d
};

static const uint32_t _K29[] = {
    0xbd7db5d9, 0xbe4a1643, 0x3e24cb97, 0xbd93d24f, 0x3e960c1b, 0x3dfada4a, 0xbe67dc74, 0xbd984984, 
    0xbd80e4c7, 0xbe26a092, 0x3e0fa137, 0xbe4d62aa, 0x3e0d03e4, 0x3e4be5a9, 0x3e58308f, 0xbe04c318, 
    0x3e046930, 0x3db4535d, 0xbdff52a0, 0xbe02148a, 0x3d494d0e, 0x3e4ea7b5, 0x3cd43910, 0x3e04c2f5, 
    0x3e290d7d, 0x3dd7a9d2, 0x3d88948d, 0xbddee5fa, 0x3d95c8aa, 0x3e42ea3f, 0xbe35b085, 0xbd88632e, 
    0xbe288687, 0x3cc8fdd4, 0x3c6732fa, 0xbd57ea49, 0x3e01da61, 0xbe2f521f, 0xbc47ca52, 0x3d4ff0cf, 
    0x3e623d73, 0x3dd1753a, 0xbc80b58d, 0xba4b8ad2, 0xbd3da614, 0x3e0859c8, 0xbc263f9f, 0xbe0d2117, 
    0x3d99b389, 0xbda6ce6a, 0x3e1b6f90, 0x3d439287, 0xbe3f7637, 0xbe3c0747, 0xbcd52f26, 0xbd547296, 
    0xbe4860cc, 0xbe759d16, 0x3e40b60a, 0xbe25474a, 0xbcd5f161, 0xbe1f75dc, 0x3e526599, 0xbe0951ad, 
    0x3d25da94, 0xbe776bf4, 0x3dc262d2, 0x3bbeb70d, 0x3d51b60a, 0xbdd0e559, 0x3e0d699d, 0x3e4d6f70, 
    0xbe2a6e2c, 0x3d9245d9, 0x3e0db741, 0x3e243054, 0x3d96ce09, 0x3dd9c1ff, 0x3e9224b1, 0xbe0f9a06, 
    0xbded2187, 0xbdc5591f, 0x3e1e65cf, 0xbe10f3a1, 0xbe4318cf, 0xbe782f94, 0x3e6a00da, 0xbbca26af, 
    0x3ccf5531, 0x3b998982, 0x3e33243b, 0x3de93b95, 0xbd9afecb, 0xbd8e5893, 0xbde51909, 0xbe60c90e, 
    0x3d7c6b14, 0x3d8d39b6, 0x3e80bcdd, 0x3e619427, 0x3e50ce04, 0x3dd3f72f, 0x3daa3ec9, 0x3e620e6b, 
    0x3e605296, 0xbe478e43, 0xbe250da4, 0x3e84c8da, 0x3cf3695d, 0x3e46257a, 0x3d069d8e, 0xbd037b01, 
    0x3de154e1, 0x3d798f66, 0xbd968d21, 0xbe0912a6, 0x3e2f1122, 0x3e658a83, 0x3d4d3d44, 0xbccc02e4, 
    0xbe2070e5, 0x3db8c3a5, 0x3e1fe7bd, 0xbd51ed26, 0x3c765879, 0xbd2d5cd1, 0xbd7d672e, 0xbe0232d2, 
    0x3e54d7ca, 0x3e0833e1, 0x3bef0e81, 0xbe155b45, 0x3d9c5984, 0x3ddb012c, 0x3e63d2e7, 0xbdb9ba9e, 
    0xbe457b44, 0x3e849f57, 0xbe1c9dd6, 0xbe1f5756, 0xbe172bfd, 0xbd9be691, 0xbe77c6e8, 0xbd15cad3, 
    0x3e35649a, 0x3c174df9, 0xbda37d3e, 0x3d4e723b, 0xbe054933, 0xbb98f1ed, 0xbe25bc3e, 0x3e37539e, 
    0xbd9e9968, 0x3e1552be, 0xbd1ed592, 0xbdc7119e, 0xbde00ccb, 0xbe3bd558, 0x3e4cd1bb, 0x3e90fa32, 
    0xbdaa4f96, 0xbe6ef276, 0xbe15dbf4, 0xbe7e6559, 0xbe31a760, 0x3e2d958b, 0x3e09f3fe, 0x3b9a2bfe, 
    0xbc0016aa, 0xbd020d1a, 0x3e72eb28, 0xbe0611fb, 0xbe1230f1, 0xbe60b70a, 0xbe19e26d, 0xbe3a32c0, 
    0x3d9d6a30, 0x3e23d46e, 0x3dd124ba, 0xbe6c4e76, 0xbe64bef7, 0x3dd09ff8, 0xbe50ffae, 0x3d372bcd, 
    0x3d7e8dc7, 0xbe47136b, 0x3c8ad522, 0x3e7cb18f, 0xbe629587, 0xbbb716c4, 0xbd316854, 0x3d6811a5, 
    0x3e19b3eb, 0x3de613c9, 0x3d458f5f, 0x3dadf613, 0x3d2d7f73, 0x3d230113, 0xbe3dc953, 0x3e26bde7, 
    0xbe3ebb20, 0x3cfeee72, 0x3de39806, 0xbd2d02e1, 0xbd07ec54, 0xbe7b1bcc, 0x3e1dc901, 0xbe35a2f3, 
    0x3c99e4f4, 0x3e70158e, 0x3dfe792e, 0xbe59b8d3, 0x3e622ae2, 0xbe0bcc13, 0xbe248ffe, 0x3e5f6ac6, 
    0xbdbcf03d, 0xbd176c3f, 0xbbfb00eb, 0xbdbdd77d, 0xbe5c090c, 0x3b16afde, 0xbda472b2, 0xbc92a0ad, 
    0x3b958d2e, 0xbe12e1a9, 0x3d03c879, 0x3dd9000b, 0x3e61e34e, 0xbb7e4646, 0xbe419cd6, 0xbdda394a, 
    0x3e4f1b07, 0x3ddd86d2, 0x3da162e3, 0x3c5febaa, 0xbdd4563e, 0x3e385ae2, 0xbe3762ac, 0x3d7b0572, 
    0xbc86e3b5, 0xbe05b56d, 0x3e6c8104, 0xbd84394e, 0x3e4d6f1e, 0x3da109ec, 0xbe0132da, 0x3e53571d, 
    0xbdcc5223, 0xbe270bd3, 0xbe135004, 0xbc4cf693, 0xbcf1145b, 0x3d3ba6be, 0x3e655e62, 0x3e10ea36, 
    0xbe325b1b, 0x3e683131, 0xbe6ef418, 0x3d8164b8, 0x3e89bb09, 0xbe80af69, 0xbd38229e, 0x3dcbd5dd, 
    0x3d25fd69, 0x3cb00836, 0x3d1c17f0, 0x3dd18a88, 0x3dc79d27, 0xbd30d31d, 0x3ddc60d0, 0xbd8dd88d, 
    0xbcc8c1e8, 0xbd91e1ef, 0x3e189348, 0xbe497da4, 0x3e5be064, 0x3df2e7ad, 0x3b38b75e, 0x3d91b7a3, 
    0x3e360b6d, 0xbd91158e, 0x3da66053, 0x3e3dac28, 0xbdff87ff, 0x3e294536, 0xbda5ceae, 0x3c5affbd, 
    0xbe33e3ec, 0xbe868764, 0x3ddcaba0, 0xbd5774a1, 0xbd64ce64, 0xbe093d49, 0x3e107c23, 0x3e34ab38, 
    0xbe044151, 0xbdd29a28, 0x3df12dfb, 0xbe3a10c5, 0xbd4992c4, 0x3cf536ff, 0xbcd7e215, 0xbe51104f, 
    0x3e0f1330, 0xbe21a555, 0xbe332379, 0x3de55b87, 0xbd2e9293, 0xbd879450, 0xbe0bcd22, 0x3d78a52d, 
    0xbd31e80d, 0x3d982e25, 0x3e1313af, 0xbc4acc44, 0x3e639d96, 0x3e86f866, 0x3dfb81a0, 0x3dfedc59, 
    0x3e373c1b, 0x3bb4f81c, 0xbe75e0ee, 0xbe6a2ab0, 0x3e133968, 0x3e53a10c, 0xbe071572, 0x3dfc0ce7, 
    0xbe309cbc, 0xbe49efa9, 0xbdd58db3, 0x3e4e2c03, 0x3e11d395, 0xbe0e3597, 0xbd68715f, 0x3e539b55, 
    0xbde6f3e1, 0xbd03c4ca, 0x3e7125e3, 0x3e0c9402, 0xbe0f6fb9, 0xbc81f69a, 0x3e0b8609, 0xbe66e878, 
    0xbe4a55bc, 0x3d7347b2, 0x3b509c2c, 0xbe2e9029, 0xbd593749, 0xbe0e68ab, 0x3e1bd4c0, 0x3e26aaef, 
    0xbdb5ff6d, 0xbe55d78c, 0x3e7baf8a, 0xbe394b1b, 0xbe5db73f, 0xbbab2ac9, 0xbe3d6c05, 0x3e5f2869, 
    0x3d5de9c2, 0xbe4d4c44, 0xbd96dbda, 0x3d31466f, 0x3e5313ef, 0x3b48142c, 0xbe367020, 0x3dbf954e, 
    0xbe726936, 0xbd864023, 0xbe2bfef5, 0x3caf5a9d, 0x3e0181df, 0x3dc9b83d, 0x3db8fec4, 0x3d997ec8, 
    0xbd389586, 0x3b341873, 0xbdcdf3d2, 0xbe78641f, 0x3dfb1da7, 0xbd6b748a, 0xbdf47502, 0x3d493987, 
    0x3e12feb4, 0x3dfbe6c8, 0x3b2e52f6, 0xbde15f11, 0xbe0d3e84, 0xbe9889a5, 0x3d9634be, 0x3bc74647, 
    0x3d6ea7ab, 0xbd2faf2c, 0x3d8fdca1, 0x3c890f94, 0xbdad0958, 0xbe14b063, 0x3c6b56c5, 0x3b3ae49f, 
    0xbe231440, 0xbe4cf78c, 0x3e66b460, 0x3e1173c1, 0xbe8a130f, 0xbe78f3da, 0xbe08d659, 0xbd662fbc, 
    0xbc1c1fce, 0xbdbbe583, 0x3dfb07cb, 0x3e1cb634, 0x3defe936, 0xbe1cfb1e, 0xbd0f7f9c, 0x3da41968, 
    0xbdfdedf2, 0xbd29410e, 0xbe67e2ef, 0x3e1b953f, 0x3cb3a396, 0xbe720c1a, 0x3d63270d, 0xbe1fdd9c, 
    0x3db9ea5f, 0xbcc3c2c0, 0x3cc5ff0f, 0xbe112342, 0x3dd9d09b, 0xbd971f66, 0xbd3ab0e5, 0xbe783c38, 
    0xbd764a35, 0x3e2b88e4, 0x3dc64dc2, 0x3e20c451, 0x3e770c4b, 0xbd84bd24, 0xbe800d5c, 0x3df0542c, 
    0x3dad7db4, 0x3e71b53b, 0xbe029a5d, 0x3e4a798c, 0x3dc3a4ef, 0x3e09cbbf, 0xbe15aa38, 0x3e2cbde7, 
    0xbe3fdc8c, 0xbe5681bb, 0x3db5d32f, 0x3c46e154, 0x3e6c59eb, 0xbdf65fa1, 0x3afdfd0c, 0xbe0cb9ce, 
    0x3e4df9cd, 0x3e7a1de3, 0x3e35a98e, 0xbe53af85, 0x3bb9d2ec, 0xbdbd171a, 0x3d252af9, 0x3dcd97e6, 
    0x3dcc1c61, 0xbdb520c4, 0xbb6722c8, 0xbce9fbc0, 0x3dd3417c, 0x3c906a57, 0xbe770981, 0xbe2c21e5, 
    0xbe219819, 0x3e6b3778, 0xbe3b389c, 0x3e116c29, 0x3d8d5471, 0x3e0b7dd6, 0xbdf9b5e8, 0x3e593724, 
    0xbcbeff6c, 0xbdf8b026, 0x3c976a33, 0xbdb5f372, 0x3e0b63cd, 0xbdbb83e2, 0x3e022064, 0x3e159914, 
    0x3d72e90a, 0xbcf55eb7, 0xbcef8205, 0xbe133f20, 0x3e0e8e1b, 0x3ad5dd78, 0x3badadf8, 0x3ce3df55, 
    0x3d1d5448, 0xbe650f19, 0xbbe3d0ae, 0xbd68a9cf, 0xbe1e9e1d, 0x3d5008e0, 0x3e1c8543, 0xbd0ccf53, 
    0xbe5728a4, 0x3df26c70, 0xbd9c2a2f, 0xbde7383f, 0xbc992da2, 0x3e56aa77, 0x3e752103, 0xbe5739b6, 
    0xbde60b8a, 0xbe041347, 0x3e63b611, 0xbd77c6c1, 0x3db52fe0, 0xbe4d84ca, 0xbe349169, 0x3e09435c, 
    0xbda1e829, 0xbd062c3e, 0xbd12ccaf, 0xbe5ec870, 0xbd309482, 0x3d238232, 0x3e055d18, 0xbd84fb47, 
    0xbbd5b0bc, 0x3d28eb73, 0x3e1dc96f, 0xbc9bf748, 0x3e56b7ed, 0x3e78b464, 0x3d858f4e, 0xbe771745, 
    0xbe0af7ed, 0x3d7e04de, 0xbd8a67c0, 0x3dd25ed8, 0x3e24743a, 0xbe4098e1, 0x3d171b04, 0xbd5aeb57, 
    0xbd815397, 0xbe31e380, 0xbdbd32de, 0x3d92c606, 0xbe0ad423, 0xbc9d2bb9, 0x3cd425a1, 0x3e6921c5, 
    0x3e273100, 0x3e405e7d, 0xbe7bccb6, 0x3e4482e7, 0x3e0fe500, 0xbd9834a1, 0xbd4e6e16, 0x3dc9f20c, 
    0x3e1abe3e, 0xbe378c4d, 0xbe0e28a5, 0xbe6c405b, 0x3c6e18cd, 0xbd8f3f7b, 0x3e381bd6, 0x3e76e332, 
    0xbe2ae805, 0xbe30ae6c, 0x3d300324, 0x3d70f60f, 0xbe342169, 0x3e78ee33, 0x384455ea, 0xbc660a10, 
    0xbe3f9e9c, 0x3d6aa50e, 0xbdcba4a9, 0x3e24fc21, 0xbe60f874, 0xbe2ff9b2, 0xbe1819df, 0xbdab9f45, 
    0x3db8f2c9, 0x3dc98c1d, 0xbddbadaa, 0xbda08657, 0xbd650812, 0x3e3e8b71, 0xbe035f7e, 0xbe14e544, 
    0xbd960f83, 0x3d3e53a7, 0x3d7effa3, 0xbdf327cd, 0x3e3abe15, 0xbe205ce0, 0x3dccbd14, 0xbd36c684, 
    0x3e48853a, 0x3df69f3e, 0x3e444ad5, 0x3e761a51, 0x3db2dc24, 0xbc78f8d6, 0x3e6f8d9c, 0xbd170d80, 
    0x3d91cf16, 0xbe50f981, 0x3e296d76, 0xbd9aafc5, 0x3e04fab3, 0xbe4d8453, 0x3d49a7a9, 0xbdfccc6b, 
    0x3d209132, 0xbc0e5451, 0x3d3a0d03, 0x3e0d49c9, 0xbbdb440f, 0x3e2070c3, 0xbe475e86, 0xbe877daa, 
    0x3e7a0af4, 0x3da0cc3a, 0xbdcbb476, 0xbd9ad3a4, 0xbe0c87f1, 0x3e3996f6, 0xbe3db60b, 0xbb0a6194, 
    0xbe88ba7e, 0x3dfff958, 0x3e4b6f2d, 0xbe1158d2, 0x3e4f8d50, 0x3e66eece, 0xbcfca613, 0xbe0541ef, 
    0xbe348094, 0xbe8c2c62, 0xbe0fdca3, 0xbe433c93, 0x3d20f561, 0x3e49e257, 0x3df1085c, 0x3e1ef0b5, 
    0xbe617fba, 0x3e6d317c, 0xbceb9325, 0xbdcd93f1, 0x3e196e2d, 0xbd2bc96b, 0x3e4571c7, 0x3c72ca31, 
    0xbe19a91f, 0xbdd5d762, 0xbe471d12, 0xbe49cd7b, 0xbd410425, 0x3db95887, 0xbd4e85ac, 0xbe7dc8f0, 
    0x3db2402b, 0x3d0a1bb7, 0xbe4510f8, 0xbd4faf3d, 0xbe33e26a, 0xbe3c5fdc, 0xbe3a53ed, 0x3e1730c5, 
    0x3e50724c, 0x3c150742, 0x3e6f67dd, 0x3d2e7e21, 0x3dfc96d9, 0x3dfe60b5, 0x3dbe37be, 0xbde62fac, 
    0x3e313303, 0xbe83f871, 0x3e3175f0, 0xbcf21af3, 0xbcf702e6, 0x3e717a99, 0x3c0aedf1, 0xbe825f3b, 
    0x3e606ce5, 0xbd486498, 0xbd15b432, 0x3dc05096, 0xbdf74e84, 0x3e3c02d7, 0xbd9a1e17, 0x3d8495e1, 
    0xbe2c785a, 0xbd9253b8, 0x3db7b25f, 0x3e0636fa, 0xbe195edc, 0xbe2fe986, 0xbe5f48d2, 0x3e4726f9, 
    0x3e5d76bb, 0x3da59828, 0x3df9c632, 0x3cbb3db2, 0x3da435c6, 0xbe160adf, 0x3e7fd67d, 0xbdec3ec5, 
    0xbd44049a, 0x3bd22345, 0xbe1b7ff9, 0x3de682d7, 0x3e056fa2, 0x3d4f99ea, 0xbd7ac83d, 0x3e12c02e, 
    0x3d3af968, 0x3e29bd6c, 0xbe5af967, 0x3e5ab52f, 0x3c818793, 0xbc81787b, 0xbe493497, 0x3da51906, 
    0x3e66bf8e, 0x3e5b57a2, 0x3e1f5bfa, 0x3d1bd6c6, 0x3dc2bfc2, 0x3e855118, 0xbbf7e135, 0x3dc86c45, 
    0xbdd4cdf1, 0xbe7ffead, 0x3dd01ca3, 0x3d38347b, 0xbe89c175, 0x3e3efa98, 0x3dd1334f, 0xbe588329, 
    0x3e095bb6, 0x3c67577f, 0x3e380c28, 0xbe861f4b, 0xbe00d5fc, 0xbd2e747e, 0xbe56ed85, 0x3de9fa50, 
    0x3e32e77a, 0x3e1ec96c, 0xbd75697b, 0xbdee343b, 0xbe2fbf30, 0x3d12fdd9, 0xbd5fcbf8, 0x3e32bf03, 
    0x3db5d9b5, 0xbb759d19, 0x3c1e7cc7, 0xbdce7dd6, 0xbdba7261, 0x3d966bdb, 0xbdec34f2, 0xbe78402d
};

static const uint32_t _K31[] = {
    0xbdf48138, 0xbe3c93bb, 0x3da378ab, 0x3e287db7, 0x3e307cbc, 0xbdc40058, 0xbe34cf7b, 0x3ddb1a0a, 
    0xbc989193, 0xbe201f15, 0xbcb49817, 0x3dfb350d, 0xbe88123d, 0x3e494095, 0x3dd5b9af, 0xbdfdf505, 
    0xbe815eab, 0x3e5c65e8, 0xbcb2e9cc, 0xbe0c3f4f, 0xbe6505dc, 0xbba0ed98, 0xbd4cf6cb, 0x3e36dc71, 
    0xbdfba9c3, 0xbe1dbecf, 0xbd9d7878, 0x3e3b8eb4, 0x3b180fb7, 0x3db1ef5d, 0x3e0c5e99, 0x3e3bfa51, 
    0xbe773e66, 0x3e20169e, 0xbe3bef4e, 0xbc81d5b0, 0x3e1aea35, 0x3d6cef2d, 0x3dbd6255, 0xbe498fe0, 
    0xbcb8bd1d, 0xbd447aff, 0x3ca73935, 0xbe3579be, 0x3ded06bf, 0x3e1063c0, 0xbdfc3073, 0x3d641e71, 
    0xbdb5bfdf, 0x3caefbc1, 0xbe0f2e31, 0x3d4747db, 0x3e48626c, 0x3e29b035, 0x3c9d2fb9, 0xbd823427, 
    0x3d84ac70, 0xbd1a7eea, 0xbd8ae730, 0xbde587c5, 0xbe2ef949, 0x3d3474a5, 0x3d73a78c, 0xbe4c2bb2, 
    0x3d9cbd8d, 0x3dfb76a5, 0xbe079922, 0xbdf9588c, 0xbe524ca1, 0xbe53dfca, 0xbe4d3dea, 0xbd36bfba, 
    0x3e0c4de9, 0x3dcedb2e, 0x3d2baf96, 0xbdd7c3b9, 0x3e1af121, 0x3dc80344, 0x3bab0b0e, 0xbda0837b, 
    0xbdf3cae7, 0xbe60f123, 0xbe8259d6, 0xbe7e5e1f, 0x3e23c94d, 0x3e4bcee4, 0xbe1aca94, 0x3e4e7a7c, 
    0xbd0450a8, 0x3e61007d, 0x3e7d6138, 0xbe3b1570, 0x3dc24ad3, 0xbe3e4a50, 0xbe540823, 0xbe42e983, 
    0xbdfed58b, 0xbdc38dd5, 0xbd886d1d, 0xbd17430f, 0xbd08ca41, 0xbe224491, 0xbe631508, 0xbe64641e, 
    0xbdd82592, 0xbe335214, 0xbcf65712, 0x3e4c8617, 0x3e7e16d0, 0x3e814dc6, 0x3e2cbded, 0x3de1f92a, 
    0x3dc86fd6, 0xbe8f4f91, 0xbe034132, 0xbda9a877, 0xbc8e463b, 0x3db3e202, 0xbe864a21, 0xbe3240c4, 
    0x3e489a9c, 0x3d9a6821, 0xbd7889c5, 0x3e469db7, 0xbe62259a, 0x3cc1025f, 0x3e7a5c8d, 0x3d6f7e54, 
    0x3e00b5ff, 0xbd43d77b, 0x3e22aebf, 0xbd4608cd, 0xbe33a92a, 0x3e24d20a, 0xbe15ebea, 0xbe34d60d, 
    0xbdcf35c9, 0x3d81c33a, 0xbe3fa797, 0x3e34c8c1, 0xbe2d144e, 0xbb1dc3b8, 0xbe6c7fde, 0x3d3eef18, 
    0xbe2ffc9b, 0xbe1c3892, 0x3d42fcaa, 0x3dca8f30, 0x3d77ecc8, 0xbb832ddd, 0x3e7205b7, 0x3c898edf, 
    0x3d22af0d, 0x3e6cd092, 0x3e1b4da8, 0xbe6aada6, 0x3ce214d8, 0x3e2e7158, 0xbe83ab30, 0xbcf70a6f, 
    0xbdfce121, 0x3e69bb4c, 0xbe57f6d5, 0x3dcecb08, 0x3dac0ae7, 0x3e227ba1, 0x3e0f20b1, 0xbdf2a427, 
    0x3e64a433, 0x3d9147be, 0x3ea81ee1, 0x3b0cb1c6, 0x3d4444d6, 0x3d75a94a, 0x3c5de7af, 0x3e5f6b5c, 
    0xbe2d6427, 0x3e149fa1, 0xbe143848, 0xbdc80cb3, 0xbe6335a6, 0x3db6b602, 0x3cadb32c, 0x3e46ff36, 
    0xbe13ba00, 0xbd471767, 0x3d05728b, 0xbdb436be, 0x3e65d033, 0x3e1c4876, 0x3e1c969b, 0xbe427971, 
    0x3dea0195, 0xbcba1c3e, 0x3e6beca0, 0xbe7dbf25, 0xbe7ebe7c, 0x3ced2c5e, 0xbe651622, 0xbe275817, 
    0xbc990e85, 0x3db189b0, 0x3d102c72, 0xbd01bf78, 0x3e446ffe, 0xbdbb8fbb, 0x3cc9eba2, 0x3e478035, 
    0x3e81d06a, 0x3ce10e89, 0xbd3bf784, 0x3de74ecf, 0xbdaa7c25, 0xbe15478f, 0x3d66c31a, 0x3e1dbc2e, 
    0xbd9fcdf9, 0x3e235922, 0xbe57fbeb, 0x3d4211b3, 0xbe86c325, 0x3e2fb77d, 0x3e74c76f, 0xbe3abca9, 
    0x3e138f24, 0x3e32f5b6, 0xbe035d1c, 0xbe86c101, 0x3e42e65d, 0xbe6b7339, 0xbe968a8d, 0xbdcbec47, 
    0xbe59a46b, 0x3de170fd, 0xbdecc628, 0x3e4fb6df, 0xbdf8e460, 0xbe600453, 0xbe2a8991, 0xbd2ea111, 
    0x3e07e5ac, 0x3e84637f, 0xbdf22405, 0xbcca665a, 0x3e0ace21, 0xbc06f129, 0x3c4842dc, 0xbe216957, 
    0x3d9578f8, 0xbe0072d3, 0x3e8f39bd, 0x3df8e4b6, 0x3d9e6d75, 0x3e3d2a69, 0xbe20d6f4, 0x3e0b4131, 
    0xbe3e485d, 0x3db42e5c, 0xbd81349c, 0x3dfc869c, 0xbe359a14, 0x3d9b0e8c, 0xbe0bf69f, 0xbe53191c, 
    0x3e1ecf23, 0x3d704e56, 0x3e0104ac, 0xbd322014, 0x3e48a859, 0x3d34cd7c, 0xbe22c9d9, 0xbe4ef41d, 
    0xbdc4ec76, 0xbe595090, 0xbe0e8803, 0x3ca81315, 0xbe5301a9, 0x3e0dbb4d, 0xbdb820db, 0xbcccfdb0, 
    0xbe894ffd, 0x3dcd7b34, 0xbe0ce731, 0xbe11c951, 0xbdeecda7, 0x3d4cc2ac, 0x3cc8101a, 0x3ce58c24, 
    0x3ca7feb7, 0x3da75c42, 0x3df142b6, 0x3df6493a, 0x3db36859, 0x3e1e45cd, 0x3d664099, 0x3e2462a7, 
    0xbcd5e044, 0x3e20b9df, 0xbe56002a, 0xbe29a5c9, 0x3e089207, 0x3e190940, 0x3d4a5516, 0xbd8743b9, 
    0x3daf4264, 0x3e62bc22, 0xbd0b1f6b, 0x3e079e2c, 0xbdb7414e, 0x3e39639c, 0xbe8ddf33, 0x3e794328, 
    0x3e16862b, 0x3e8f8651, 0xbd94e6a9, 0xbe39d3d1, 0xbe3742a1, 0x3e53df17, 0x3d38ed38, 0xbe071681, 
    0xbe35bd20, 0x3e2dfe15, 0xbe185dfe, 0x3e3054a7, 0x3db7aa3e, 0x3e2d39e2, 0xbe6482bc, 0x3e69a73e, 
    0x3c3424a7, 0x3e41eda3, 0xbe74d2df, 0xbd2c0441, 0xbcd1f95d, 0x3d4a702c, 0xbdd37f2e, 0x3d95d3f8, 
    0xbe7893ae, 0x3e69df3f, 0xbe589704, 0x3e8c705a, 0xbe11dc3b, 0xbde5149a, 0xbccdd37d, 0x3d826a19, 
    0xbe421ed4, 0x3e1de167, 0xbd023509, 0xbd025664, 0x3e53088a, 0x3e0c1318, 0x3db4ddfd, 0x3e397425, 
    0x3e39484e, 0xbe5b2831, 0x3e4bf97a, 0x3d067937, 0x3d3db6d0, 0xbe55b881, 0x3e6f7fcb, 0x3d8ecf3e, 
    0x3d27a849, 0xbe3c5a7c, 0x3e7bca8e, 0x3d209cc8, 0xbd6536a1, 0xbd7bc07d, 0xbe1d7c40, 0xbe820ec9, 
    0x3b8c349c, 0xbe45b195, 0xbe18d80b, 0x3e487c16, 0xbe1a16ae, 0x3e514171, 0xbd59e44c, 0xbdaa37d3, 
    0x3c2700a5, 0xbe209183, 0x3e02f0f0, 0x3d8d4ab0, 0x3e2b3cf2, 0xbe652201, 0x3e252d8d, 0xbe97c60f, 
    0xbdbb67d8, 0xbe0a902f, 0xbd6eb54f, 0x3d7496bd, 0x3d99abae, 0xbc122f56, 0x3e21286a, 0x3c1db3a2, 
    0xbe191600, 0x3d406a7b, 0x3e2f7938, 0xbe2b0120, 0x3d704cd3, 0xbd946648, 0xbdf88756, 0x3d712965, 
    0x3d230fe2, 0x3e6f2cad, 0x3dbf7745, 0xbda79123, 0xbdafccb0, 0xbe72b9be, 0x3dfbde01, 0xbe1972d1, 
    0x3d7986e0, 0x3d931607, 0xbe1e5720, 0xbd037ff4, 0xbe5f6c6c, 0xbe3372f8, 0xbcf3b4cf, 0xbbe06813, 
    0x3e1f7003, 0xbbbfc48a, 0x3c91e82b, 0x3c7ac00f, 0xbe52a4b4, 0x3d9612a1, 0xbd289819, 0xbd2cba6a, 
    0x3df2931d, 0x3e2685ed, 0x3e0c1ccc, 0x3e06f344, 0xbe303ba6, 0xbd31e1b5, 0x3bcbf782, 0xbe1be98a, 
    0x3e4583bc, 0xbd6dd25b, 0x3e0c99ca, 0xbd97acbb, 0xbc9eb46a, 0xbd17d159, 0x3e66fb2f, 0x3c079781, 
    0xbe3de450, 0x3e42a604, 0xbc6a9d88, 0xbe4e0b73, 0xbe2034ac, 0xbde41e96, 0xbe94bd2a, 0xbdacecf8, 
    0xbe0da6c2, 0x3d539f89, 0xbdf2e117, 0xbd2ba56a, 0xbd117b13, 0xbe1bd5ad, 0xbdf21e6a, 0xbe6796df, 
    0xbdcebb8c, 0x3ce7567d, 0xbe998a0d, 0xbe15aade, 0x3df88448, 0x3e8c2d7f, 0x3e382960, 0xbe307bea, 
    0xbe5d54fb, 0xbe876884, 0x3caccc16, 0x3e176e13, 0x3dff1d73, 0xbc9c3578, 0xbe0e82cf, 0x3a38bd1b, 
    0x3dbeaa0e, 0xbd9af1f1, 0x3cd1283e, 0xbdd09436, 0x3ce9dddf, 0xbe259239, 0xbe793e52, 0x3d9ab2a5, 
    0x3e0f9759, 0xbe01d655, 0xbd956167, 0x3d8f6d22, 0x3e595739, 0xbd2c8012, 0x3db498dc, 0x3dac52a9, 
    0x3e50664c, 0x3e5b0d72, 0x3e7443ee, 0x3e449899, 0x3e4367d3, 0xbd0dc2de, 0x3e89c210, 0xbd87a3ce, 
    0xbd817a83, 0x3e0c0b88, 0x3e4b2ce9, 0x3e5c922f, 0xbe0206a1, 0x3d9e466a, 0xbe200238, 0x3df79230, 
    0x3db41bfd, 0xbe550507, 0x3b82d63e, 0x3e803c94, 0x3ca2673a, 0x3e62ddfd, 0x3b3839b8, 0xbe548dfc, 
    0xbe6aea76, 0x3e88e9ad, 0xbe2424fb, 0x3e947368, 0xbcdd89be, 0xbe337a72, 0xbdaa644b, 0xbe4d121c, 
    0xbe467af8, 0xbe10fd72, 0x3e3038f3, 0xbe5cb466, 0x3d274c18, 0x3df5cfc6, 0xbdbbd36f, 0xbe57a6ea, 
    0x3e1b6b77, 0x3dce66d4, 0xbe8b9cd9, 0xbe092ade, 0xbe17677a, 0xbd655d2b, 0xbd87718e, 0x3e0fec21, 
    0xbe3b9f5d, 0xbdc6a3e6, 0x3e39170a, 0xbe7bfd8b, 0xbdd27e64, 0x3dfa51a8, 0x3e214200, 0xbe0c8dd9, 
    0xbe4deaad, 0xbe302e86, 0x3e77aa2e, 0xbc56f93f, 0x3e72f145, 0xbde3b291, 0xbe0c43a9, 0xbdaec239, 
    0x3e7abb9e, 0xbdd3b62c, 0xbe380632, 0xbe4935fb, 0xbe620a4a, 0xbe272079, 0xbddefa17, 0xbe581a2f, 
    0x3e29f3ed, 0x3e42e64c, 0x3e37fab9, 0xbe0d557c, 0x3c228c05, 0xbe23c5a7, 0x3e20a0b2, 0x3cf6e7e3, 
    0xbe3c333a, 0x3e624ea0, 0xbe6b8439, 0xbe5cfb76, 0xbe374388, 0xbddb6b13, 0xbc1fca93, 0x3dc0191c, 
    0x3c48cc2f, 0x3dae1d0f, 0xbe832902, 0x3e1c4e7d, 0x3d942c50, 0x3d97f00f, 0x3d95b509, 0xbe33550c, 
    0xbe22535e, 0x3d6f7ee2, 0x3c7b0ebb, 0x3e32efae, 0x3e62562a, 0xbc81785b, 0xbe1b889f, 0xbe209f39, 
    0x3e8f6c7f, 0xbe9cafe6, 0xbe702e90, 0x3bcf24e2, 0x3d9ed57a, 0x3bd24ad6, 0xbdb2a328, 0x3d99a2ea, 
    0x3e3367f2, 0x3ca93d5f, 0xbe349150, 0x3dba2631, 0xbe145c95, 0xbe33118b, 0x3d934c75, 0xbd800349, 
    0x3c4575ae, 0xbe6542a8, 0x3e491bc2, 0xbe532d31, 0x3d4de00c, 0x3d7e8635, 0xbe0b2f70, 0x3de1ed1d, 
    0xbe035247, 0xbdaaefff, 0x3d4c10e0, 0x3c2200f2, 0xbdfb99af, 0x3e586e44, 0xbe10ff39, 0x3ded5920, 
    0xbe88eb6f, 0xbda7abc5, 0xbe64a127, 0x3e977226, 0xbe4cbc74, 0xbd6efadf, 0x3d616b05, 0x3dc398c2, 
    0xbdb05460, 0xbe84bfa8, 0xbe3e5e52, 0xbccf48c1, 0x3d0d922c, 0xbdff2f76, 0xbd4d62df, 0xbe3afc6b, 
    0xbd8200a7, 0xbd8f88a6, 0xbe06df0a, 0xbe3bb3ac, 0x3e639ab3, 0xbdfcdff4, 0xbe1bdad6, 0xbe3890bc, 
    0x3c541df1, 0xbe092499, 0xbe2ab904, 0xbe309578, 0x3e80fef9, 0xbe787b37, 0xbb99b623, 0xbe81b92c, 
    0xbcd98030, 0xbdeb2c70, 0x3dfc11bb, 0x3d9e717b, 0xbd37b43b, 0xbda0977a, 0xbcd3debb, 0xbe3a7076, 
    0xbe230f40, 0xbe04a026, 0xbe300537, 0x3dda5245, 0xbd7fa11b, 0xbcff04a3, 0xbe54af22, 0x3e42d1cd, 
    0xbd83f94d, 0x3e5f6de2, 0x3dac72f6, 0x3e32e932, 0x3dd6974b, 0xbca9cf94, 0x3dd5b863, 0x3e33b76d, 
    0xbe1d6f70, 0x3dc18521, 0x3b80c5fe, 0xbd73dca8, 0xbd648d56, 0x3ce4d186, 0x3e6929ae, 0xbe005d1f, 
    0x3cca2e18, 0xbc469459, 0xbe3fd5c8, 0xba3ab95a, 0x3e38271c, 0xbd9ca640, 0xbe5419d6, 0xbd51c369, 
    0x3e4c8609, 0x3d85f2b5, 0x3e2628f3, 0xbe1f11a1, 0x3e173d4f, 0x3d960701, 0x3e50a6e6, 0x3e16380d, 
    0xbd305dce, 0xb8da064d, 0x3e369541, 0xbe63091f, 0xbbd7fdfb, 0x3e1bcdde, 0x3cc7e784, 0x3d6596fe, 
    0x3ccf2f27, 0x3dd30a4d, 0x3dc45cf6, 0xbe6466de, 0xbe09beac, 0x3e57ddb7, 0xbe268aff, 0x3e47f015, 
    0x3dbbf257, 0xbe484352, 0x3dea38f1, 0xbd95cb0c, 0x3e2470a9, 0xbe485472, 0xbe7cb87b, 0xbd19ca33, 
    0x3e16c56a, 0x3e08bef4, 0x3e3c156e, 0xbe6a5a57, 0x3e81d5a7, 0x3e274455, 0x3bcf4006, 0xbe48ee9f, 
    0xbea001b9, 0x3d993ed0, 0xbe0f8dc9, 0xbd88fec6, 0x3d786141, 0x3e76206e, 0xbe4edeb8, 0xbc10afe2, 
    0xbdacb34f, 0x3e59978f, 0x3d2c51a3, 0xbd7aad78, 0xbe02bc01, 0x3da8b75d, 0x3da768ce, 0x3e081869, 
    0xbe29b753, 0x3e5a2316, 0x3e597b98, 0x3e09f891, 0x3d972b52, 0x3e3f0c27, 0xbdc00c53, 0x3def8cb4, 
    0x3e6ca8f7, 0xbd311c2b, 0x3e137056, 0xbe072613, 0xbd1f8476, 0xbe503acd, 0xbd92e16e, 0xbe8ac188
};

static const uint32_t _K33[] = {
    0x3ff9b3a7, 0x3fd57f45, 0x3fafe651, 0x3fa759c8, 0x3fa61c3b, 0x3fc9c8fd, 0x3fec096b, 0x4001d7f7, 
    0x407404af, 0x4011f986, 0x3fad553b, 0x4005cd8b, 0x400f2eaa, 0x3fdf5913, 0x403c6fd0, 0x3feab6d4
};

static const uint32_t _K34[] = {
    0x3f3d1bea, 0x3eed1740, 0xbf3be462, 0x3f59111d, 0xbf872c7c, 0x3f1e8f58, 0x3ebce992, 0x3f40cacf, 
    0xbf057a85, 0x3daf6936, 0x3f5d29cd, 0xbecb282c, 0xbe89a1a8, 0x3e93c77c, 0x3e473244, 0x3e4b35b0
};

static const uint32_t _K40[] = {
    0x3e596c14, 0xbe18a918, 0xbdda78de, 0x3e59c20b, 0x3e3b85c8, 0x3caa7e61, 0xbe2dfaa8, 0x3e4c9081, 
    0xbe06e229, 0xbd523833, 0x3da286b2, 0xbe53346e, 0x3d756549, 0x3d338da9, 0x3d9ce738, 0xbe48b3aa, 
    0x3e15b44f, 0x3d06aa1c, 0xbe351db3, 0xbdc4d685, 0x3cfe5455, 0xbd7fd7f0, 0x3dc603af, 0xbdd350c4, 
    0x3e1cb029, 0xbe0c92c2, 0x3e6f2516, 0xbe3b0776, 0xbdc58ca7, 0x3b833835, 0x3e1c749b, 0x3dc920d5, 
    0xbda44ba8, 0x3e241627, 0xbe0a2146, 0xbd2765f0, 0x3e186dcb, 0xbd3fd8b4, 0xbe467038, 0x3e104bfd, 
    0x3d9a75dd, 0x3b22aeee, 0xbe56982e, 0xbd2c13d8, 0xbd6271a3, 0x3e62fc7e, 0xbe25d796, 0xbe03b05a, 
    0x3e1ec379, 0x3d6fbf62, 0x3dbadf57, 0xbc8a77d1, 0x3def3ad4, 0xbe02cb43, 0x3e5cdb83, 0xbe1b5777, 
    0x3db25e06, 0x3e57f8cb, 0xbca9da32, 0x3e23730f, 0xbe0db8a2, 0x3d0a5a2b, 0x3e3cc751, 0x3da02f98, 
    0x3e3cfcb0, 0x3ddfd699, 0x3e2cbbd5, 0xbe599c6b, 0xbd170dd2, 0x3c62c006, 0xbd56b0e0, 0x3cad0d33, 
    0x3d9654fe, 0xbe2b0053, 0xbc2fe53f, 0xbe6c76c0, 0x3db4901a, 0xbdfc0d27, 0xbcc3778b, 0x3e12365b, 
    0xbd9da63f, 0x3dba14ac, 0xbd1bec8a, 0xbd716f76, 0x3dc1c4b7, 0xbd7be691, 0x3e3bd4ba, 0xbdc0a7c7, 
    0x3d96f606, 0xbc7b9b60, 0xbe4fa576, 0x3dc540d2, 0x3d374d3d, 0x3cd407c8, 0x3db1bb57, 0xbe229a59, 
    0x3c6dd221, 0xbdd38cdf, 0x3e1772d7, 0x3d52a85f, 0xbe185a02, 0xbdaf82c8, 0xbdcb6839, 0x3e33c558, 
    0x3e6c8ca9, 0xbe0e433f, 0xbd2dd615, 0xbe13312b, 0xbd36fc5a, 0xbdd26eb8, 0x3e76f618, 0xbe150090, 
    0xbc9d6c38, 0xbcf3ac30, 0xbe0d3834, 0x3e132229, 0x3e1523b2, 0x3d5b7609, 0xbe0c4ecb, 0x3e076c22, 
    0x3cb67af4, 0xbd8a92aa, 0x3d9c82e9, 0xbe105924, 0xbdfa5b19, 0xbd5ad461, 0x3e0466d7, 0xbdde2df5, 
    0xbdd805ef, 0x3e36e040, 0x3d228581, 0xbe314f5f, 0x3a92df17, 0x3e03731a, 0xbddf7836, 0x3e0eac75, 
    0x3db30184, 0x3e210c74, 0x3e45b555, 0x3dad46e2, 0xbd9524fe, 0x3d15697f, 0x3d807848, 0xbe161af2, 
    0xbdcc7f73, 0x3d516a18, 0x3d8364ca, 0xbcb3b14c, 0xbe361e7f, 0x3deeeb1c, 0xbd8ac882, 0xbcdfe484, 
    0xbe023c52, 0x3e09e282, 0xbe4f7717, 0x3decc3cd, 0xbe494a2f, 0x3daa7667, 0x3c91c48a, 0xbdf2277d, 
    0xbdfc0846, 0x3e33b6fa, 0x3e357739, 0x3d82f217, 0x3e043943, 0x3d44d0ee, 0x3bbc0d57, 0xbe55c86a, 
    0xbde6dbc4, 0x3cf86948, 0x3ca88241, 0xbdf89ba2, 0xbd9bc8cd, 0xbdafadbd, 0xbe1fae26, 0x3da658ce, 
    0xbe6080db, 0x3d3d4283, 0xbd7d3361, 0x3e1450ce, 0x3dede392, 0xbcc2549a, 0x3e10c6cf, 0xbda7ba74, 
    0xbe16d6ca, 0xbd87cd83, 0x3d031fd8, 0xbe28d914, 0xbe1c68dd, 0x3cebae1b, 0xbd0ed494, 0xbd876902, 
    0xbe24cb70, 0x3dbbc229, 0x3ca5b293, 0x3e5306f5, 0xbde14672, 0xbd4ce270, 0xbc7e731a, 0x3cda96fd, 
    0x3d858f7f, 0xbd9dc7a0, 0x3e564f1d, 0x3d81f109, 0xbdfb95eb, 0x3d1db3a9, 0xbd9c20f4, 0xbda39611, 
    0xbe0c3a45, 0x3e32c46a, 0x3e2e7960, 0xbc906d2c, 0xbd20c780, 0xbe675274, 0x3e2a512c, 0xbe28bd3b, 
    0x3cecbf6b, 0x3dcf6fb5, 0xbe278cfe, 0xbd5420a6, 0x3e2d2f38, 0x3e23a209, 0xbe345afd, 0x3d89f268, 
    0x3d8eb358, 0xbde39ec0, 0x3df2045e, 0x3da66253, 0xbdf5586d, 0x3d07a8ba, 0x3e4f015a, 0xbddcc279, 
    0xbd9175ac, 0xbe0755c0, 0x3c9e05fd, 0x3e17dd24, 0xbe2e1bcc, 0x3d2f740a, 0xbcf95537, 0x3e075fad, 
    0xbcf31045, 0x3d2da8c3, 0xbd064984, 0xbdd9ec46, 0xbe2d9c11, 0x3dd0cbc5, 0xbbf5deb4, 0xbc140cea, 
    0x3dcc5a4e, 0xbd6c56db, 0x3dd5583b, 0x3e12a0ba, 0xbd2a4658, 0xbe0e5b9f, 0x3e18b403, 0x3db11086, 
    0x3e04e0a8, 0x3d385cae, 0xbc6132a9, 0x3d5aa5a6, 0x3e40c2da, 0x3daaf82d, 0x3cf6b966, 0x3d4b6a29, 
    0x3df4efc0, 0xbe2ade3d, 0x3e2b8069, 0x3e438270, 0x3e0d3165, 0x3d80eb04, 0xbe0a4fde, 0xbe4c14b2, 
    0x3e2eec09, 0x3ddd9753, 0xbe088f5e, 0x3dd876fe, 0xbd382d5b, 0x3d56accb, 0x3e083a58, 0xbd093368, 
    0xbe278113, 0xbe21544e, 0x3e044bb2, 0xbe450389, 0xbe576a11, 0x3e3acb83, 0x3e3d85c2, 0x3e17d846, 
    0xbe59cb82, 0xbe3665b5, 0xbd76e54a, 0x3c878c2d, 0xbe60f24d, 0x3dfe5443, 0x3da64c6d, 0xbe0a6713, 
    0x3cf56707, 0xbcf0299c, 0x3e2605ea, 0xbd4f1dce, 0xbe152f4d, 0xbdb3ea3d, 0x3de558a4, 0x3e164e49, 
    0x3c52d393, 0xbdaac879, 0x3de99196, 0xbe276a87, 0x3d065977, 0xbe245703, 0xbe346608, 0xbe256caa, 
    0xbd84e935, 0xbc71c50b, 0x3c34d0f0, 0xbd7c2f5d, 0xbdb9c744, 0x3e1f3c01, 0x3e4098ce, 0x37b582f9, 
    0x3c949394, 0xbe102587, 0x3e28e89a, 0xbcf6874b, 0x3dd8cc05, 0xbd26ac91, 0xbd7f0d8f, 0xbcb5dada, 
    0x3c33ee69, 0xbd0b67eb, 0xbd97f79e, 0xbc8f149c, 0x3e22ca2b, 0x3e42ff29, 0x3e1fe431, 0x3da7531c, 
    0xbe4244e8, 0xbde5bc07, 0x3e758d57, 0xbe32e274, 0xbc31464a, 0x3da9720b, 0xbc8a8523, 0x3e46844e, 
    0x3e0be97a, 0xbe090268, 0x3e2dab2a, 0xbcd86d2c, 0x3d800039, 0xbc0e072d, 0xbd71e5d3, 0xbe04b00c, 
    0x3d861f6d, 0x3d24cdb0, 0xbe093104, 0x3d9f4a12, 0x3d6ba794, 0x3ca97c1c, 0xbd580489, 0x3cd02c4a, 
    0x3dc89264, 0x3e6e4709, 0xbdde02ba, 0xbe551aa0, 0xbdabc092, 0x3ce071b8, 0x3d03de9f, 0x3da61059, 
    0xbdea4f97, 0xbcbdc794, 0x3e184fb9, 0xbd852e77, 0xbd864633, 0x3e6c3d7e, 0x3de2ef64, 0xbc5b3e33, 
    0x3e5a6f4b, 0xbe20dca3, 0xbd801e81, 0xbd417936, 0x3d6eccb4, 0x3c69d0f2, 0xbdb7bc75, 0x3e20f48f, 
    0x3e67d6e3, 0x3d8ed6e1, 0x3d45477b, 0xbd9cefa9, 0xbcda2952, 0xbdbe5b01, 0x3e1c68cb, 0x3e45d5b4, 
    0x3de8aa3b, 0xbe279ba5, 0x3bea1abb, 0x3d84f930, 0xbd0f1567, 0xbe2d6972, 0x3d83afed, 0xbe05c1d4, 
    0x3cca8b8f, 0xbe4c8a25, 0x3d868483, 0xbe09a9b6, 0x3e19bd2d, 0xbe490d9a, 0x3e2088f9, 0x3e2b4e7f, 
    0xbe275109, 0x3e425022, 0xbe32426f, 0x3daa74ac, 0xbdd55f2e, 0x3ce2a5b8, 0x3dea1bfd, 0x3c8041bf, 
    0xbd7691d2, 0xbdef025a, 0x3cf4b032, 0xbe6695f0, 0xbc53e90c, 0x3ccae5aa, 0xbd0e813f, 0x3cab6542, 
    0x3e2dc10a, 0x3db77647, 0xbe16ca49, 0xbe2d4b39, 0xbd368803, 0x3dd4a0ce, 0xbd619995, 0x3c86f1c2, 
    0xbdb38aee, 0x3d2df6ee, 0xbca709d8, 0xbe432205, 0x3da49dfe, 0x39d8a8b4, 0xbd014c42, 0xbe522dfd, 
    0xbcef9742, 0xbd58b346, 0xbd96adf9, 0x3dbe1c8e, 0xbdf3aebc, 0xbde3a12a, 0xbe59c85d, 0xbe1b73e3, 
    0x3d5741f5, 0x3e2be31c, 0xbe1aa69f, 0xbe21220f, 0x3c257ba5, 0x3cace617, 0x3e09b74a, 0x3cbabb7c, 
    0xbe0089d4, 0xbcd22541, 0xbdf64721, 0x3d6ae409, 0xbc4fbc27, 0xbda57f85, 0xbe62adab, 0x3d6b830c, 
    0xbe0b287f, 0x3e3c1833, 0x3e60e8e0, 0xbcb9dfa1, 0xbc7f1ada, 0xbd4781c8, 0xbc90456e, 0xbcd019f7, 
    0x3e363b55, 0xbdfd87bd, 0x3c789819, 0xbdc7912c, 0x3e197198, 0xbe41d1aa, 0xbe2f02a0, 0xbcdfa2b2, 
    0xbe05bc43, 0xbda296eb, 0x3d50bc33, 0x3e433468, 0xbdf103c8, 0x3cb3e93d, 0x3d6aa1c2, 0x3ddb8d26, 
    0x3db78c75, 0xbcb40b8d, 0xbe049537, 0xbd77bc1e, 0xbdcd30b8, 0xbe2da8bf, 0xbe3a4892, 0xbdd54da2, 
    0xbe2d757e, 0x3d4173c1, 0x3dafdc15, 0xbda2097d, 0xbe360c66, 0x3b7a851d, 0x3d2ef02c, 0x3e0e42b8, 
    0x3dae0fa3, 0x3e0ec0fa, 0xbe3a5930, 0xbe1e3e30, 0x3e02676c, 0xbdd6ef1c, 0x3d994bac, 0x3e219805, 
    0xbe02bc3d, 0xbdcfa9ae, 0x3d11113e, 0xbd38e146, 0xbd778b2e, 0x3d864aa6, 0x3df7616b, 0x3d0c84e3, 
    0x3de9bf35, 0x3dc01e97, 0x3ddbb4e0, 0x3dfd2a84, 0x3e3e0877, 0x3da96a5a, 0xbe179f61, 0x3d410167, 
    0xbe00dbe5, 0xbd93f9dd, 0x3dab4f94, 0x3e152068, 0x3ddb9af4, 0xbd5d7bd6, 0x3d6d28a1, 0xbda3fc6e, 
    0xbde4ea1f, 0x3d82c603, 0xbd30e051, 0xbe676b3b, 0x3d84ac6a, 0x3d81e9b2, 0x3dd73da8, 0x3e3a53d6, 
    0xbe6a90e8, 0x3dc19c50, 0xbddee42a, 0xbdc59f4e, 0x3dbc2edb, 0x3cbfd5ca, 0xbe40a01d, 0xbd9fc400, 
    0xbda009b7, 0xbdf2e7cf, 0xbd4669c4, 0xbdc71bdc, 0xbe62765e, 0xbd991a51, 0x3d90e068, 0x3e1c8f07, 
    0xbe3bf6b4, 0x3e16ab5a, 0xbdbdca0c, 0xbe330d9e, 0xbdde7851, 0xbccb124c, 0x3da47c19, 0xbd14bd41, 
    0x3e247174, 0x3e42bb0f, 0x3e24a1ad, 0x3cf39e75, 0x3e288401, 0x3cd90e85, 0x3e1fe6e1, 0x3e5e3c0d, 
    0x3e268b90, 0xbe3b4937, 0x3d0fbd73, 0xbdac99ea, 0xbdf35be2, 0xbb80a9b2, 0xbd90f268, 0xbdc1f55d, 
    0xbd891d8f, 0xbd4a3ee8, 0xbe52f7ee, 0x3e1dc0a7, 0x3de9c752, 0x3e4ef3e8, 0x3e3fa780, 0x3ca54550, 
    0x3e7a988e, 0x3e301c0e, 0x3cacb29f, 0x3e1e9df2, 0x3d9d3a72, 0x3cf5098c, 0xbcf6f489, 0x3ac060f7, 
    0xbe30cb88, 0xbe5aaca4, 0x3de365b6, 0xbdf2eed9, 0xbdf1c78b, 0x3b351fc9, 0x3e2ef6d5, 0xbd5ee352, 
    0x3e385bc7, 0xbd00da5b, 0xbe3140e5, 0xbdc9c66f, 0xbdd322ed, 0x3e14518b, 0x3df3b523, 0xbd340441, 
    0xbe13ac3c, 0xbde8c27c, 0x3d1cb567, 0x3d750d44, 0x3d96e151, 0xbe0945b5, 0x3e50174a, 0xbdfe8468, 
    0xbcc9135c, 0xbdde840f, 0xbdb03fb0, 0x3dd958ff, 0xbbfd086d, 0xbdff0224, 0x3e0c8189, 0xbbee8182, 
    0x3c0ee9f9, 0xbd1c4969, 0x3e0dc8fb, 0xbe15d2b0, 0x3e26352e, 0xbe03eecb, 0xbe57423b, 0x3cdc2073, 
    0xbe006f03, 0x3d59b4b8, 0x3e3fa2da, 0x3e19615c, 0xbdab260a, 0xbcde67c1, 0x3dd5d753, 0xbe128e8a, 
    0xbd8e41ed, 0x3d55128c, 0x3c474a53, 0x3e50c671, 0xbd9a121a, 0xbd41d822, 0x3d39e5d1, 0xbcc27429, 
    0xbdccb91c, 0x3d50a2bd, 0xbe3f808d, 0x3d5a2322, 0xbc538df6, 0x3dab1c74, 0xbd08671b, 0xbcedc9ac, 
    0x3e070c22, 0xbe25e263, 0x3d64f010, 0x3d9661f8, 0xbd3dd248, 0x3de05176, 0xbe55526a, 0x3cfabdcd, 
    0xbe5c9cf7, 0xbe2ad2ba, 0x3d389fb0, 0x3e2d9041, 0x3d1fa82a, 0x3db4ab78, 0x3d11d387, 0xbe414a29, 
    0xbd944209, 0x3e0433fd, 0xbd993144, 0xbe4851e4, 0x3e226ccf, 0xbe4e8bfe, 0xbd8ec0f3, 0xbd4ea487, 
    0xbd6765d9, 0x3e3de9e0, 0x3c9c9a92, 0xbe1e1e95, 0xbdc3d992, 0xbd7da041, 0xbe1cc03b, 0xbde1101d, 
    0xbdb9e795, 0x3d13c80b, 0xbd6eae90, 0x3e21f912, 0xbda6a76e, 0xbd52aafc, 0xbe08ead7, 0x3d3b13f8, 
    0x3d347780, 0xbd093241, 0x3dcb6d74, 0x3d849eb8, 0x3e217b7a, 0x3e00eaf0, 0xbe54b85f, 0xbd6e95ad, 
    0xbc354e52, 0xbe2cedac, 0x3d6f0e09, 0xbe21a04c, 0xbd25e283, 0x3dde06f7, 0x3d50bd60, 0xbe0639da, 
    0x3d8e7c2b, 0xbd94e060, 0xbe0f3812, 0xbd9521cf, 0x3d351611, 0xbd17c4c4, 0x3e0671b7, 0xbd84646c, 
    0x3dcbd062, 0x3e14b556, 0xbe4154bc, 0xbda3abe7, 0xbe170273, 0x3e0a1475, 0x3e3ea8ba, 0x3dd185ea, 
    0x3e6f87b1, 0xbdd8439a, 0xbd158b1f, 0x3dccd29f, 0xbe73424d, 0xbdd352dd, 0x3e0f0fdd, 0xbd4e6dcf, 
    0x3d8ebda3, 0xbd4c0a60, 0xbe1d102d, 0x3d81219a, 0xbda6de29, 0xbe406220, 0xbdab6845, 0xbd610d8e, 
    0xbdaad86b, 0xbb8c51df, 0xbcbc129b, 0xbd8c89ab, 0xbd6ff9a2, 0xbe0f1eb8, 0x3d678575, 0xbdb21c15, 
    0xbcc743fe, 0xbe70a6c5, 0xbd467e29, 0xbe09c489, 0x3e2b7fa4, 0x3dc6d461, 0x3e4e9333, 0xbde691bd, 
    0x3d9ec2a1, 0xbd8825ac, 0x3cb531f7, 0xbdaf64a9, 0xbe59ca1f, 0x3e46600b, 0xbe09e37e, 0x3c8f7ab1, 
    0xbe078414, 0x3c5e355c, 0x3d036e80, 0x3b6cc5d4, 0x3dc5a60e, 0xbcd76228, 0xbc1b6d63, 0x3e08edac, 
    0x3e4f5905, 0xbda4478c, 0x3dd57a97, 0x3e22d04f, 0x3d5f0d99, 0xbc6d02bb, 0x3d2a3044, 0xbd536f3e, 
    0xbe3412e4, 0x3e1fe27d, 0x3db7d9d7, 0xbe311338, 0x3c0157f9, 0xbe137ffe, 0xbd91cc6c, 0x3e2fdb8e, 
    0xbda2f489, 0x3e086ac0, 0xbcdb3d77, 0xbd9b041f, 0xbdcc35d4, 0x3e2844a1, 0xbcc35028, 0x3cc837e7, 
    0x3e53c13c, 0x3d9d7105, 0x3d9dd112, 0x3d9c279a, 0xbcedeb8f, 0xbd800fda, 0xbe07854c, 0x3d9cfc14, 
    0x3d7e4073, 0x3dda19ef, 0xbc99fd96, 0x3d571f1a, 0xbcf964e9, 0x3dcef09b, 0xbdc3b612, 0x3db785a4, 
    0x3d4d947d, 0x3dc74cae, 0xbe06572c, 0xbc66696e, 0xbe361682, 0x3cac2da5, 0xbe3ff33a, 0x3cf6067f, 
    0xbd41bf68, 0x3de7dbdd, 0x3e4778bf, 0xbe2ebdd0, 0xbe4207f8, 0x3e553b4d, 0x3ded2f94, 0x3e24b5c7, 
    0xbda8a377, 0xbe4ded19, 0x3d789afb, 0x3de3027e, 0x3d95b9d3, 0x3e6699f6, 0x3e1dd453, 0x3dd32ba5, 
    0xbe141385, 0xbe6db71c, 0xbd7c5243, 0xbd821ee5, 0x3e395904, 0x3d20cbab, 0xbe390b22, 0x3db73fc3, 
    0x3e2e1b7d, 0x3e205862, 0x3dcd51f3, 0xbe0858c5, 0x3d5eecb9, 0x3e29a1a6, 0xbcb16bb3, 0xbe3f99e8, 
    0xbde7e4c0, 0xbd72b5f8, 0x3dadbee6, 0xbce3574d, 0xbde333f3, 0x3dc66648, 0x3e1ae814, 0x3dae3432, 
    0xbe1e527c, 0x3db680c0, 0xbbb53cca, 0x3d39b9aa, 0x3d8a5243, 0x3e066fae, 0x3e5af0a2, 0xbd9a22be, 
    0xbd838fbc, 0x3e29a9ca, 0xbdb77956, 0x3d4979ea, 0x3ddebf3f, 0xbc69a529, 0x3dbf8c8b, 0x3d914d8b, 
    0x3da7902f, 0x3c8968b8, 0x3df509ab, 0xbb8cd345, 0xbd2bdef2, 0xbde064b7, 0x3c4aa0d3, 0x3da2c529, 
    0xbe673f0b, 0x3d650e92, 0xbe337d72, 0x3c3bb990, 0xbe0ba0b9, 0xbda9d456, 0x3db2b480, 0x3cfcab93, 
    0x3d96b56f, 0x3dd6db36, 0x3d600d68, 0xbe42d50b, 0x3e0b3603, 0x3e4b1c63, 0xbdd0da39, 0x3d7a028a, 
    0xbd91b8e9, 0xbe3127c0, 0x3df22b7d, 0x3e3199f9, 0xbd8dafaf, 0xbdd26e5c, 0xbdbe09ce, 0x3d6db05d, 
    0xbdd5f307, 0xbd61b639, 0xbcc67b9d, 0x3df40ef7, 0x3cd4f433, 0xbd82cab0, 0xbdef4754, 0x3df172b4, 
    0x3dc1dd27, 0x3e24823c, 0xbce2afb0, 0xbd900662, 0xbd7a6083, 0x3d98b0a2, 0x3dc9b149, 0xbdd32712, 
    0xbe033f2b, 0xbe53e5b6, 0xbdba909f, 0xbe26d6d1, 0xbe191554, 0xbe51b11e, 0x3e1c24f7, 0x3dba8773, 
    0x3d0dd965, 0x3c98712f, 0xbdea5ae5, 0x3d9f6a75, 0x3cba7c85, 0xbdeb171e, 0x3e17b689, 0x3d4cfad4, 
    0xbd718b2b, 0xbe34d24e, 0x3c9a1de6, 0x3e650b35, 0xbe291abf, 0xbdf68c71, 0x3c0ff534, 0x3dd3f03f, 
    0xbe2a2fb0, 0x3e3f432d, 0xbcda280f, 0x3e165987, 0xbdc0d68a, 0xbc3b048d, 0xbcfb5610, 0xbde7e9fc, 
    0xbd1177af, 0x3e466716, 0x3da66dc9, 0xbe159ef9, 0xbe1f45b8, 0x3e0e204f, 0xbcb68cb7, 0x3dd44466, 
    0x3d37a12b, 0xbe1fd8d8, 0x3e328974, 0x3cdde255, 0x3ddab9af, 0x3dca8f97, 0xbc978148, 0x3e5e24a1, 
    0x3d4f8caf, 0x3d49daaf, 0xbdfdefdf, 0x3e4747a8, 0x3e16f784, 0x3d7cf07e, 0x3e4d1ee4, 0xbe1e79f1, 
    0x3d9a524f, 0x3dd840a9, 0x3d03efc8, 0xbe411b55, 0x3d85cd5b, 0xbd872149, 0x3e22f570, 0xbd8e4b4a, 
    0xbe323d01, 0xbd810f40, 0x3c01b029, 0xbd902290, 0xbe5a2cb8, 0xbd62e4ab, 0x3b876e4e, 0x3de926b4, 
    0x3d89bd2f, 0xbe34be9b, 0x3e332eb8, 0xbe5053ea, 0x3e44ca19, 0x3dd50e3d, 0xbcd92c72, 0x3d13ba73, 
    0x3e4af021, 0x3d316e55, 0x3d66afd9, 0xbe1c3dc2, 0xbd2e117a, 0x3d9323e3, 0x3e04ce39, 0x3d895bda, 
    0x3d7cca25, 0x3e2facc6, 0x3cbc40d5, 0xbe0a0be5, 0x3abda8e7, 0x3e0b7f80, 0xbc094f7a, 0x3b136ccd, 
    0xbda6897d, 0xbd87142b, 0xbd4b99c1, 0xbe2ca459, 0xbda144b9, 0x3e1de7a5, 0xbe3fb70a, 0xbceaaef2, 
    0xbe35819b, 0xbe0503b7, 0xbe365fa8, 0xbd9d8014, 0xbe151ce3, 0x3ccda452, 0xbcf673ce, 0xbbabdead, 
    0x3d8b5d0e, 0x3c840b7c, 0x3d30adf9, 0xbe5e9f35, 0xbda0feac, 0xbe5a5e6a, 0xbe3eb66f, 0x3d8d2c22, 
    0xbd3806c5, 0xbcdd8314, 0x3e11bde5, 0xbe340f16, 0x3c956503, 0xbe113afd, 0x3d13a3a6, 0x3cce80d7, 
    0xbdbb91d2, 0xbd815cf6, 0xbe15aae9, 0x3da7602f, 0xbdb77575, 0xbd204676, 0xbdaab648, 0xbe1da8e1, 
    0xbe23a25b, 0xbd0f1026, 0x3e40763e, 0xbd2170dd, 0x3ca9f81c, 0xbdfde5c6, 0x3d53c3b6, 0x3cfed4f6, 
    0xbcbe4878, 0x3e427a52, 0xbd981b07, 0xbd601152, 0xbde647ac, 0x3db277d8, 0xbd9ae3b1, 0xbe0842c0, 
    0x3e192880, 0x3e0949d6, 0x3e14a5f8, 0xbe4736f3, 0x3e29b3a5, 0x3d8ce39b, 0xbe18b27c, 0xbdc5ae6d, 
    0x3c3937de, 0xbda67633, 0xbdd7165d, 0x3d8b9d85, 0xbcdbbf97, 0x3e2e8f8f, 0x3d94156c, 0x3d9fbf3e, 
    0xbdd6c1d5, 0xbd9e76ad, 0xbcb7bc1c, 0xbe0486ba, 0xbd3c2162, 0xbcc32ddd, 0xbe216956, 0x3d2735f5, 
    0xbda2abc1, 0x3e22fdf4, 0x3d99f86d, 0x3e248ecd, 0x3db24886, 0xbc29fb93, 0xbe51a549, 0x3e200f95, 
    0x3e540e4f, 0x3b6a63fd, 0xbd59fecb, 0x3ceb1c1c, 0xbd53c6df, 0xbc469d44, 0x3d3538a5, 0x3e15a110, 
    0xbdf0fc46, 0xbe4d319d, 0xbdb402b5, 0x3d82c868, 0xbd5ecee3, 0xbd787c56, 0xbcc259a0, 0x3cef5563, 
    0xbe3ee32f, 0xbd849cea, 0x3e3cdfc8, 0x3e23f7c9, 0xbdcedb89, 0xbde39b3f, 0xbe2106b6, 0xbe11ff28, 
    0xbe039b5f, 0x3e29b9d7, 0x3ddfa954, 0x3e0af038, 0x3c956637, 0x3d0ac77f, 0x3e25a80a, 0x3d0d6513, 
    0xbe3098c7, 0xbd4b6b25, 0x3e0a054f, 0x3e29a83f, 0xbde519d1, 0xbdaaee02, 0x3e21cc28, 0xbe03b47c, 
    0x3dbff249, 0xbcd89882, 0xbdd3d657, 0xbd689e40, 0xbe3ae882, 0x3ca1bb94, 0xbd87f623, 0xbe0ab8b3, 
    0x3df2d383, 0xbe59c648, 0x3d8e6b2d, 0xbe00441d, 0xbe488c36, 0xbdea0c85, 0x3d8d4c19, 0x3e038e15, 
    0xbd248e78, 0xbd6dc344, 0x3d65b7ad, 0x3d12f66a, 0x3cf5c531, 0x3cfddd1f, 0x3d920ea8, 0x3e8db529, 
    0xbdcac12e, 0xbe204efd, 0xbccc8ee2, 0x3e13d3d4, 0x3d294ef4, 0xbe02bc8b, 0xbda5b5fb, 0x3db1e4a5, 
    0xbde15ea5, 0xbd50852a, 0xbb0c65a7, 0xbe14febe, 0xbe8d8a55, 0xbe2432bb, 0xbe4be123, 0x3de9d550, 
    0x3cc6186f, 0xbe2fc0d8, 0x3cbf21c8, 0x3e5eaac6, 0xbdb1bc48, 0x3aadb494, 0xbdbd3b2c, 0x3e138bee, 
    0xbe07dacc, 0xbdb4b8e4, 0x3d8500e3, 0x3e17c4dd, 0x3e268e23, 0xbcba208f, 0xbe215029, 0x3da6d89b, 
    0x3e2e3ce9, 0xbe62d162, 0xbcf52b81, 0xbe0a14de, 0x3e212a4c, 0x3d618985, 0xbdec5118, 0xbc8eaaa2, 
    0x3e2e96e4, 0x3e0a109b, 0x3cbef472, 0x3e6fb84b, 0x3c6e179b, 0xbddc642d, 0x3e05dc49, 0x3c1d77d7, 
    0x3e09d924, 0x3da4c5e3, 0xbe03f21a, 0x3e5d0917, 0xbdc0ba71, 0xbc8702d5, 0xbda5b58a, 0x3c5b1f10, 
    0x3de6e832, 0x3e0bcc5d, 0x3d4b3dca, 0x3c5fb1f3, 0xbe1c2e91, 0x3df98ba1, 0xbe5bff23, 0xbdbd8c7f, 
    0x3dcda78b, 0xbe4a7702, 0x3dc7a5e2, 0x3c2f5815, 0xba4c69f9, 0x3c295ff1, 0x3cd98cb7, 0x3d3258b9, 
    0x3c562c90, 0xbddf3eb6, 0xbe191d0b, 0x3cb96681, 0x3b41c63e, 0xbe80a4cd, 0xbe406b2c, 0x3d1798e3, 
    0x3d0638c1, 0xbdb82d20, 0xbe1fa0ae, 0x3d92ab6a, 0x3cd4d3f0, 0x3dffadf8, 0xbe20219c, 0xbd0975e7, 
    0x3bc36cb0, 0x3de65256, 0xbe7519e5, 0xbe35896e, 0x3c79fc8f, 0x3d3ce98f, 0xbe40e4b5, 0x3e2ac5e5, 
    0x3bda76a1, 0xbe2979e2, 0xbdfa0bc7, 0xbe54e317, 0xbc5b1f54, 0x3d515100, 0xbe355113, 0x3df529e0, 
    0xbca586b6, 0x3e0bcc6b, 0x3d7a820c, 0xbe0677bc, 0x3e4504e2, 0xbd89a53a, 0x3ce03882, 0xbdcb7650, 
    0x3e2208f4, 0xbdb4f965, 0x3df873b2, 0x3e08ad37, 0x3e0fd5f3, 0x3e2387c8, 0x3e0d6eec, 0xbe32a6aa, 
    0xbe0b74c9, 0xbe092b07, 0x3d6949d0, 0x3d8b8851, 0x3dc830ca, 0xbe519ba0, 0x3e430a86, 0xbd472c15, 
    0xbda2f047, 0xbc8a44ca, 0x3dedf7d5, 0xbe46631d, 0x3d5f81d8, 0x3e2227f8, 0x3c410df4, 0x3d8ab95e, 
    0x3de66b91, 0xbe19ecb5, 0xbe235a5c, 0xbbc811af, 0xbe2f796e, 0xbe04cd8b, 0x3df39547, 0x38e4a096, 
    0x3e31f971, 0x3cdd7be1, 0x3d116bb7, 0xbe1b32ff, 0xbe339712, 0x3d3aab71, 0xbe1153ce, 0x3d52c003, 
    0x3e242379, 0xbe29af4c, 0x3e545719, 0xbe574625, 0x3dee33d4, 0xbd774c62, 0x3e1bac42, 0xbd711d5d, 
    0xbe4b0eb4, 0xbe3e767c, 0xbc183874, 0xbdad0a7d, 0xbe0f3801, 0x3c1c0699, 0x3e26b100, 0x3dd5b937, 
    0x3e2cebcf, 0x3d3c4101, 0x3d152c26, 0xbd2754e1, 0x3e23ebc1, 0xbcf60f35, 0x3e188c21, 0xbcfc8dfa, 
    0xbcba03fd, 0xbc3bb3b3, 0xbdf24ac1, 0x3daa5d53, 0x3ddacaf5, 0xbbe9d0c9, 0x3bbee430, 0xbe3b9fd5, 
    0x3de229cc, 0xbe45c281, 0xbdc98eab, 0x3db55f2c, 0x3c8a4db1, 0xbe5b61d2, 0x3a8786f5, 0x3e4fdb4b, 
    0x3dd5fa4b, 0x3e23c8f6, 0xbdbae683, 0xbe3fb993, 0x3e427d4c, 0xbde4bda6, 0x3c6ba40a, 0xbdad032e, 
    0xbd943d8a, 0x3e49db48, 0xbda86b86, 0x3cde0f49, 0xbe008645, 0x3dd7ed0d, 0x3e30a336, 0xbb8620b4, 
    0xbe25dca2, 0x3d0d9364, 0x3e11dd97, 0x3e455fd4, 0x3dd4f953, 0xbdf1d13f, 0x3e144663, 0x3ddfc061, 
    0x3e37077a, 0xbe536c86, 0x3e3b4e24, 0x3d4b3fd9, 0xbc6d8fdc, 0xbe2162a7, 0x3e3adfc1, 0xbe08007b, 
    0x3cb022bc, 0x3e072d4b, 0x3dc0881e, 0xbe2c93d1, 0x3e1983b5, 0xbe0494e1, 0xbe510784, 0xbd973b8a, 
    0x3e2dd6f2, 0x3e1ca177, 0x3e279ac0, 0xbe0aa735, 0xbdfdad4b, 0xbe39b0d2, 0xbdaea220, 0xbe0afd35, 
    0xbd36dfc2, 0xbddf6122, 0x3e3233f9, 0x3e5bcf5d, 0x3c4cf248, 0x3e5ac089, 0xbd04137c, 0xbe129b9d, 
    0xbe024d0c, 0xbe675b43, 0xbd84b1db, 0xbe20af9b, 0xbda49eb8, 0x3e588414, 0x3de9d314, 0xbe23d6e1, 
    0x3e232664, 0xbe339869, 0xbdb589aa, 0xbe172eb4, 0x3e175b54, 0x3e5b69e0, 0x3e021ee6, 0x3dde7050, 
    0xbd89c690, 0xbd824dd0, 0x3de86f36, 0x3e112196, 0x3e02feb2, 0xbe0120a1, 0xbe1b1a2b, 0x3d7e4b2b, 
    0xbd538e16, 0x3b3b7266, 0xbc8bb033, 0xbe20ce41, 0xbe33c0dd, 0xbe2be2f7, 0x3e3a4831, 0xbd3592fb, 
    0xbdf1d19d, 0x3d9fc323, 0x3e24a923, 0x3e05deb7, 0x3c35dfb0, 0xbdcde130, 0x3dca80a0, 0x3e67b52b, 
    0xbdbf7fc8, 0x3d875ca9, 0x3d9d8acc, 0x3dd7f968, 0x3e14dd1d, 0xbdabf3ae, 0x3d962564, 0x3d280c36, 
    0xbe302554, 0x3e5460d7, 0xbe5188ed, 0xbd9067c7, 0xbdf4a312, 0x3e02d58f, 0x39ee19bd, 0xbc5c5d53, 
    0xbd9e4cba, 0x3d47004b, 0xbda5e9ab, 0xbdbe0c4d, 0x3ddc52aa, 0xbd07b72f, 0xbe5069a3, 0x3e2c8363, 
    0x3d162380, 0xbcbc8082, 0x3e62a25a, 0xbe38f612, 0xbe109084, 0xbe42d054, 0xbd7e7e94, 0xbe2196e4, 
    0xbda3c69d, 0xbe44194e, 0x3cb1f9e0, 0x3c41c32c, 0xbbc3a5d6, 0xbd28ba0a, 0x3d95a5eb, 0x3e2ead63, 
    0x3e23d15b, 0x3e0d0600, 0xbd811791, 0xbd64d00e, 0x3dba4b6b, 0xbc0050a6, 0xbd1af7aa, 0xbe31a8c3, 
    0x3ddd187c, 0xbe125341, 0x3dd751d3, 0xbe4554ca, 0xbe268760, 0xbe7f3f25, 0xbe0b39cf, 0xbe050cd8, 
    0xbdcd23ab, 0xbcbd7e53, 0x3d973ae9, 0x3d65cf1e, 0xbddb88ae, 0xbdde49b6, 0xbe4ac70c, 0xbe17ffc9
};

static const uint32_t _K42[] = {
    0xbdc7b28f, 0x3cb319ee, 0xbe2b4ca4, 0xbe0230ac, 0xbc9e417c, 0xbd7440ba, 0xbe481eea, 0x3da0b89e, 
    0x3b5516e7, 0xbd6a465c, 0x3de0306b, 0xbdf4d693, 0x3dc3b57c, 0x3d8eafb2, 0x3e194cd5, 0x3da4b1f3, 
    0x3d68f5c2, 0x3c0e9aa9, 0xbddecb24, 0xbdbafd7b, 0xbe14cc87, 0x3e2951ad, 0xbdc46a05, 0x3d12fdb6, 
    0x3db466c1, 0x3e659e12, 0xbca81f79, 0xbe1d3062, 0xbe1d7c17, 0x3dc8196f, 0x3e27dd37, 0xbda14216, 
    0xbe1373b0, 0xbe171387, 0x3ad862c1, 0x3d4c5719, 0xbcecbb54, 0xbcf2d86a, 0xbcbbdb92, 0xbcab0f18, 
    0x3bda1369, 0x3dd9580a, 0x3d852db1, 0xbd88f2b6, 0x3dcd602b, 0xbca42156, 0x3d1d1eaa, 0x3e261a6e, 
    0x3d6df4a6, 0xbc0b8550, 0xbe230a1e, 0x3dfa7158, 0xbe488c32, 0xbde0a857, 0xbd976ec7, 0x3d606297, 
    0xbe124cf6, 0xbd14af0c, 0xbdcc8100, 0xbdd72603, 0xbdb21e57, 0xbe2da90f, 0x3d35a0ee, 0xbd116895, 
    0x3cb276d1, 0xbda19124, 0xbdbfd138, 0xbdb1e945, 0x3d7a1275, 0x3de7aae7, 0x3ba40d1c, 0xbde483de, 
    0xbdc25ec1, 0xbdaa0675, 0x3e24047b, 0xbcde9589, 0x3d906bf8, 0x3d674bcf, 0x3d874a23, 0x3e23fb80, 
    0xbcaea8d2, 0x3d39ebad, 0x3dfd20ea, 0x3bf3d21b, 0xbdea2540, 0xbdd64dea, 0xbe067f17, 0x3e173bbc, 
    0xbd6eac22, 0x3d3a9a2b, 0xbceda567, 0x3dde64ca, 0xbd971a2d, 0x3d7193c0, 0xbdcd371d, 0x3e13d647, 
    0xbd20d5bf, 0x3da4b780, 0x3dabf858, 0xbe2c8e80, 0x3d3ece7f, 0x3e12d940, 0x3d481126, 0x3dc24273, 
    0x3db249d4, 0x3dc5330f, 0xbda297e5, 0xbd800c95, 0xbcd5cf66, 0x3dc78763, 0xbb59157e, 0x3dc758c4, 
    0xbe02301a, 0x3d5f5584, 0x3db5f756, 0x3d9ebef7, 0xba1c1d59, 0x3be0054d, 0x3e2e3db0, 0x3d1674a2, 
    0xbda59e9f, 0x3e35cd1e, 0x3ddbcad1, 0xbd9878ca, 0x3e27676c, 0x3d0bcddd, 0x3dcce368, 0xbdbafe85, 
    0xbc82aaa5, 0xbe0250d2, 0x3e33c804, 0xbdddaa51, 0xbde1a382, 0xbda8f645, 0xbde9a5db, 0x3dab4d15, 
    0x3d822807, 0xbca9b18d, 0xbd39e251, 0xbde0e919, 0xbd2bfd1a, 0xbdf2c23e, 0xbddae026, 0xbe297a6a, 
    0xbd377a1a, 0xbdf5bdec, 0xbdeaf70b, 0x3e262011, 0xbdb6c6a8, 0xbe053e1f, 0x3d117280, 0xbe19f06d, 
    0xbdd7f286, 0x3e2a937b, 0x3e70acc0, 0x3e2c30ab, 0x3d0d9b6f, 0x3da0c9df, 0xbe2b8cda, 0xbd3e6e77, 
    0xbddcf4e4, 0x3def2bc3, 0xbcaca67e, 0xbe670e7a, 0x3d2858c8, 0xbe280ffb, 0xbe10720d, 0xbdaaf73f, 
    0x3e35f0c5, 0x3e5b6f86, 0xbda44a98, 0xbe0091f6, 0xbd4eb618, 0x3d4edb95, 0xbd38a6f1, 0x3d86efa7, 
    0x3d38c2b6, 0xbe21885a, 0x3dc73830, 0x3da0d05c, 0xbc888edb, 0xbd8b63f8, 0x3e05d8c7, 0x3d9796e2, 
    0x3cdc2604, 0x3d0644cd, 0x3e229a27, 0xbe4888a0, 0x3da35b81, 0x3e225244, 0x3db8101d, 0xbc933346, 
    0xbdd47ca2, 0xbcfcbeba, 0x3db2c7e6, 0x3d81eb99, 0x3d4fd8a1, 0x3d4a94a1, 0xbdd97529, 0x3dbcfd06, 
    0xbd622db9, 0x3d9e457c, 0xbb1eea28, 0xbbcd5d9b, 0x3d430da8, 0xbe062d13, 0x3da46927, 0x3e0d0193, 
    0x3e236300, 0xbe1e4d4b, 0x3e2579f3, 0xbe14468f, 0xbe2dd32b, 0x3df0aba7, 0xbd329ce7, 0x3dbd7009, 
    0xbb33c368, 0x3e229f26, 0xbd1aca74, 0xbe05adbd, 0x3d88e344, 0x3db448d8, 0x3d9533f4, 0xbc831aec, 
    0x3e0026be, 0x3d26e72a, 0xbe22bb32, 0x3df78193, 0x3de0056c, 0x3c3914a1, 0x3d68671c, 0x3e3039ab, 
    0x3d6b1922, 0xbdfb5469, 0xbd614459, 0xbe25a65b, 0xbd8f4b97, 0xbe0cf70d, 0xbdb95673, 0x3dcc655f, 
    0xbd9af105, 0xbc65b936, 0x3b453971, 0xbe1bdf9d, 0x3cc947fa, 0x3ccf07f2, 0xbd7196a5, 0xbd591e45, 
    0xbddb2e05, 0xbe1ec4f9, 0x3e03bf95, 0x3e0ca88f, 0x3e1cbc10, 0xbdee017f, 0x3ccca3c6, 0xbe220897, 
    0x3d924b40, 0xbd4cd851, 0xbdc9be9a, 0xbdc67134, 0x3e24c8d1, 0x3d05e616, 0xbe309fbf, 0x3e28b74e, 
    0x3e203943, 0xbe5caab7, 0x3e31e671, 0x3d9ddd66, 0x3df3a5e4, 0x3cead1e1, 0xbe0549f8, 0x3dfcb716, 
    0x3bda632f, 0xbdfbb38d, 0xbd1145b5, 0xbddda195, 0x3d789a4b, 0x3e2ba38c, 0x3d13b67d, 0x3dcdeec7, 
    0x3d615352, 0x3d75ce0f, 0xbcf7d094, 0xbc92cfc8, 0xbda4e098, 0xbe229c5d, 0x3de6d482, 0xbd28f1e7, 
    0x3c3090bd, 0xbe185953, 0xbe10727f, 0x3e32d292, 0x3d145484, 0xbe1930e1, 0x3ddef5c4, 0xbda2c2c3, 
    0xbdb05e9d, 0xbdd4dc5d, 0x3e278c51, 0x3e4c4eb0, 0xbd0ec19b, 0x3c203f76, 0x3d1e0ef0, 0xbd5e5675, 
    0xbcafedac, 0x3e2085eb, 0x3d946fb1, 0x3d58c277, 0xbd14c452, 0xbcf85897, 0x3de6135f, 0xbde6aecf, 
    0xbcca3189, 0xbda30327, 0xbe0edc5f, 0xbdb57d31, 0x3d61e019, 0x3d624df1, 0xbdfec805, 0xbe531389, 
    0xbe457541, 0x3e08d0e0, 0x3d661392, 0x3e28aa32, 0x3db42d0f, 0xbdab318c, 0x3d6ef554, 0x3d30c2d7, 
    0xbdda7d1e, 0xbde1094b, 0x3db41c5e, 0xbd849ab1, 0x3e02680e, 0xbe125e9d, 0x3d2f350c, 0xbd82d8d0, 
    0x3e3d88fb, 0xbe1f1d7c, 0x3db212ef, 0x3dd6127b, 0xbe099e93, 0x3dfb5e04, 0xbdb8ef1e, 0x3dab5c2f, 
    0xbe20ea39, 0x3e33a6bc, 0xbd8f38ab, 0xbdc30bfe, 0x3c173d9a, 0xbd7ced64, 0x3e0ad520, 0x3c462783, 
    0xbcb181a7, 0xbe025ec0, 0x3dcc9ede, 0x3daf989f, 0xbcaf01e4, 0xbe006df4, 0x3e3015ba, 0xbd980017, 
    0xbded099d, 0x3d9839e9, 0xbd021161, 0x3c18ec66, 0xbccdf9b0, 0xbd9f2d56, 0x3dc5d9ca, 0xbd9fbdf0, 
    0x3dbd5eb1, 0x3c4058f9, 0x3cb89572, 0x3de3a113, 0x3daa296b, 0xbe4a9109, 0xbe2b1a8c, 0x3d3a54bb, 
    0xbe0f3118, 0xbdb264d6, 0x3dee72ce, 0xbd8f16a5, 0x3db71050, 0xbd11546f, 0xbe290208, 0x3d43994d, 
    0x3d9f561e, 0xbe139d5e, 0xbdaac413, 0x3e5b48cc, 0x3e5f3006, 0x3c07e8b4, 0x3d3e4a4e, 0xbd979489, 
    0xbe2d2afa, 0x3df025dc, 0x3c4c1ef5, 0x3d4799b7, 0x3b8b7a70, 0x3cafc403, 0x3cf963de, 0x3da6315a, 
    0xbe2ce178, 0xbc5df458, 0x3d98c247, 0x3dbbb1f8, 0x3caced58, 0x3dc8aa76, 0x3d7132b3, 0x3e0782d5, 
    0x3e37d72e, 0x3a92ff01, 0xbdf15e36, 0xbc0147d1, 0x3c4ef471, 0xbddfb08a, 0xbc3cb9ca, 0xbe12d73e, 
    0x3a4142e6, 0x3e15ef52, 0xbe179651, 0x3c8e7320, 0x3b39fd58, 0xbc3040f5, 0xbd23b38f, 0x3d3b0deb, 
    0x3cd98835, 0x3d094fd6, 0x3e13b0e9, 0x3db5cb53, 0xbd97470f, 0x3d57a09c, 0xbc9bfabd, 0xbe484e71, 
    0xbdc2c30b, 0xbdc99d4e, 0xbe23652f, 0xbe1732c6, 0x3e279b16, 0x3e4734e9, 0xbdf2dfbf, 0x3d3f2257, 
    0x3dadbff0, 0x3e19fa36, 0xbdfab46f, 0xbe02c2d6, 0xbc480274, 0x3d976cbf, 0xbc616163, 0xbc50b0c7, 
    0x3dc641ee, 0xbda9b969, 0x3d9f98cc, 0x3d7f5163, 0x3d9d209d, 0xbc53346e, 0x3d2819bd, 0x3d8d3fae, 
    0xbe2ea73d, 0xbdaf1da4, 0x3c0a4ebd, 0xbb478e27, 0x3cf7eb49, 0xbd8dfff5, 0x3e29b394, 0xbdb971f3, 
    0x3e7ed7e6, 0xbb7432eb, 0xbda52eb0, 0xbe109d39, 0x3b597fc9, 0xbe22451b, 0xbdd819c9, 0xbdb0eb98, 
    0x3c37f0ee, 0xbe0aff9c, 0xbda0f0af, 0x3e05e26e, 0x3c97a1e5, 0xbe20ae76, 0x3d6354e0, 0x3e212fdd, 
    0x3d2d87cf, 0x3d84cbea, 0x3d93b934, 0x3d0d9a76, 0x3d2ddbdd, 0xbda0694b, 0xbd0e1af1, 0x3df97496, 
    0x3d6d37a0, 0x3dd0c0cb, 0x3d494580, 0xbd4e7f88, 0xbdca567e, 0xbd0e9068, 0x3d99f9fd, 0xbd9cf9c6, 
    0xbd38a9c2, 0xbdba5b25, 0xbe317899, 0xbcdfee68, 0xbe5f9b27, 0xbd9ba522, 0xbcdfc916, 0x3d3baef1, 
    0x3e1dbb09, 0x3cbb001f, 0x3e345e2b, 0x3c9077a2, 0x3d99b569, 0xbd4d81db, 0x3d185165, 0x3e1585a3, 
    0xbe2a59b7, 0xbd84325f, 0xbdafd7c9, 0x3dc64b52, 0x3dc70b9b, 0x3d1be074, 0x3dcd92ee, 0x3dead309, 
    0xbdb43cf5, 0x3e3c4930, 0x3e0f51e9, 0x3da859ad, 0x3c03efe4, 0xbe0ae893, 0x3cd8d7b7, 0xbd84b0e9, 
    0xbcc56ff3, 0xbd584862, 0xbdce2cea, 0x3db94daa, 0xbb944aec, 0x3de811aa, 0x3e014792, 0x3da9247d, 
    0x3e0577e1, 0x3bf07d38, 0x3e2ffb6c, 0x3db64fe0, 0x3dff3c68, 0xbe61852d, 0xbe1c01da, 0xbd4093e9, 
    0xbdc363a4, 0xbe375e9f, 0xbe131f95, 0x3d89ced3, 0xbde2d3de, 0x3d43bf2b, 0x3e101a48, 0x3e177a66, 
    0x3e136d7d, 0xbdd828f6, 0x3c13964d, 0x3db991cc, 0xbaf9c654, 0xbcd3ae55, 0xbd9ce12e, 0x3e004e5d, 
    0x3e619d8c, 0xbdac9e30, 0xbbe85289, 0xbc5f1868, 0x3cc21966, 0x3d07340b, 0xbd14a853, 0xbd1f1b5d, 
    0x3c103a33, 0x3d2e57f1, 0xbd6c7f03, 0xbe4b33b2, 0xbdcb7c19, 0x3d89b66e, 0xbdeb674f, 0x3e39e303, 
    0x3db205a5, 0xbde4d80d, 0x3d8196b9, 0x3dd37f4b, 0x3e613a36, 0x3e0378db, 0xbe1004ed, 0x3c864e0d, 
    0x3ccd854c, 0xbc8e2a5d, 0x3da90275, 0xbc5be720, 0x3dc940b9, 0x3d7c762f, 0x3a81d273, 0xbdd327f5, 
    0x3d881eb0, 0x3caf9621, 0xbda2e3cb, 0xbe3096d0, 0x3e45930f, 0xbe3d399e, 0xbdfb7278, 0xbcd19bf4, 
    0xbe1f1e42, 0x3d44402d, 0xbda0d135, 0x3d8fecd3, 0x3d67ef4b, 0x3e0eca77, 0x3ddd5065, 0x3e001f47, 
    0xbd9bd366, 0x3c9c1eb7, 0xbe368722, 0xbbc5d276, 0xbd559277, 0x3ddb98c7, 0xbdbea692, 0x3e0c0b78, 
    0xbaa984c9, 0x3c6c80a9, 0x3c6dae4b, 0xbe33c4c4, 0x3dba3326, 0x3d7266d0, 0xbd743a9d, 0xbe1f521e, 
    0xbd524a64, 0x3dda783d, 0xbdaaea7d, 0x3d150fcb, 0x3d047747, 0x3de908a0, 0x3dd2e594, 0x3df2d5b8, 
    0xbd81b263, 0xbb06914d, 0xbe2e2c68, 0xbe0ca595, 0xbc915429, 0xbd3a7bcc, 0x3d498a38, 0x3d89774b, 
    0x3c1ffeff, 0x3d4adbda, 0x3e0a14b8, 0x3c5b6554, 0xbdf91ede, 0x3e040eed, 0xba38a8e9, 0xbc967975, 
    0xbd633af8, 0x3c5a94b7, 0xbe3c7aec, 0xbe1deba4, 0x3dde5908, 0xbdf7fb3d, 0xbdd6d922, 0xbdecd926, 
    0xbe128ff4, 0xbded4803, 0xbdf7cde9, 0x3ddbfc90, 0xbd524d16, 0xbdea8cc2, 0x3cf0b54c, 0x3d852d85, 
    0x3b394f63, 0xbb423465, 0x3dc48676, 0x3d9a0bf7, 0xbe08eb0e, 0x3d80f488, 0xbe032d02, 0xbe223c02, 
    0xbd54d490, 0x3d60df63, 0xbd9aee05, 0x3e047a00, 0x3de61ceb, 0xbdf424d0, 0xbce40f21, 0xbdda6098, 
    0x3d11d582, 0x3dd8a07a, 0x3e0afeb2, 0x3cdefc4e, 0x3e0955f2, 0xbdcd9bd1, 0xbd88b5f0, 0x3de718f9, 
    0x3d3ec600, 0xbe2efac9, 0xbe48835c, 0xbbe8121f, 0xbb888a5b, 0xbd6f8998, 0xbd960c95, 0x3a416dd3, 
    0xbda7f2fa, 0x3d601b93, 0xbd5a814e, 0xbe0b46af, 0xbdac05c9, 0x3cf4d8af, 0xbd602ce5, 0x3db5aaaa, 
    0x3d339363, 0xbe0ef66b, 0x3e16c833, 0x3e1883b8, 0xbd87cd3e, 0xbe2c5fe1, 0x3e272cde, 0xbe276bf4, 
    0x3e378da3, 0x3e0a4d91, 0x3e2ea6b1, 0xbd44adc4, 0xbe349150, 0xbd63b3b4, 0x3e21f7ed, 0x3dd5954a, 
    0x3d3412de, 0x3d836323, 0xbe3f6dec, 0x3e105798, 0xbe208fc0, 0x3dde0a5a, 0x3de88f30, 0xbe1abc20, 
    0x3e1fe5c7, 0xbce59f2d, 0xbde9445f, 0x3de760c8, 0x3cf75f66, 0xbe00dbe6, 0x3d67c88e, 0xbd225b8f, 
    0x3dcd66de, 0x3e1552ea, 0xbe03fa67, 0xbd4de8c0, 0x3cb1577d, 0xbe670fcb, 0x3d098c41, 0xbddbb219, 
    0x3d91b808, 0x3df9a829, 0xbdebe78c, 0xbe329383, 0xbdaf8af1, 0x3e0a6bb1, 0xbd0eacf7, 0xbe094b58, 
    0x3d76c175, 0xbe06ea72, 0xbe1b7922, 0x3e249d8c, 0x3de9f1d8, 0x3ba5fcca, 0xbd7b9698, 0x3d032dec, 
    0x3b37bbc1, 0xbd720071, 0xbe2f2d82, 0xbe3b30b2, 0xbe2355a9, 0x3e0293cc, 0x3d4ac075, 0xbe1bb06d, 
    0x3e012f6e, 0x3def67a4, 0xbe349dc7, 0x3ca5c248, 0x3dc8b98b, 0x3d277a04, 0x3d2b367a, 0xbc00b6ad, 
    0xbbcd612d, 0x3d28f9d5, 0xbc406061, 0x3de6ec4b, 0x3d0affa9, 0x3d24f0d6, 0x3d76b297, 0x3e1355e2, 
    0xbcdb80b4, 0x3dd67ef7, 0xbe3adecf, 0x3e0bec32, 0xbd9d9c18, 0x3e37233f, 0x3d931cce, 0x3d227159, 
    0xbd395e4f, 0x3d49a145, 0x3d493bc9, 0xbd61ef69, 0x3e02ee98, 0xbe14bf5a, 0xbdd0c0c6, 0x3e254077, 
    0xbdb4c518, 0xbd96f22c, 0xbd7c6a7c, 0xbcd41e94, 0xbe132cb6, 0xbb8a1cdc, 0xbcbd51e3, 0x3dcf96b2, 
    0x3de3c832, 0x3e2060cc, 0xbdad62b5, 0x3d80de02, 0xbe462d0d, 0x3dcffe19, 0xbd8ba247, 0xbd2e0cd1, 
    0x3e274ca2, 0xbd53cca2, 0xbe05663d, 0xbddbc921, 0xbdef2615, 0x3e3c38ef, 0x3de3714d, 0xbd1985f5, 
    0xbc9e0d86, 0xbdc47769, 0x3e2c4093, 0x3df5a86e, 0x39f003e9, 0xbde2dd4b, 0x3dfaa516, 0x3e023680, 
    0x3c061aea, 0xbd839845, 0x3c45fafb, 0xbd91d443, 0xbc8bd1a8, 0xbe484565, 0x3e1d1e6b, 0x3dadb3d4, 
    0xbde370b5, 0xbd460686, 0xbdf25353, 0xbda10144, 0x3da6a120, 0xbdb63858, 0x3deda6dd, 0x3d1200fb, 
    0xbce4311b, 0x3e13f5c6, 0xbdbab443, 0x3d1cc477, 0x3d6680dc, 0x3d8eb6f3, 0xbde63ac4, 0xbd3438f2, 
    0x3acfb7e0, 0xbc5c1115, 0x3daf54b6, 0xbd2c77eb, 0x3e28d28f, 0xbda20f2f, 0x3df4e05b, 0xbe1e103e, 
    0xbe254b5d, 0xbd9fe175, 0xbe19db2f, 0x3d439efb, 0xbd2a3fb1, 0x3d96ea20, 0x3cfdf7c0, 0x3e139564, 
    0xbe052ed4, 0xbd940040, 0xbd8baa3e, 0xbc039598, 0xbe0298c1, 0xbcc42b54, 0x3de52373, 0x3dff3bef, 
    0xbdd23220, 0x3de3673d, 0xbd9a0a1d, 0x3ca0e68b, 0xbe356e70, 0xbdcf0d77, 0xbd474ec1, 0x3e395c16, 
    0xbccda172, 0x3e4237dc, 0xbd9af3a7, 0xbc3474a7, 0x3ddc0a4f, 0x3e1a3981, 0xbe038ad0, 0xbdcc75b4, 
    0x3d1ad672, 0xbe190a7f, 0x3e16f4c0, 0xbd2b9fdd, 0xbe26b471, 0xbc24fcf6, 0x3c9517f8, 0xbe01639d, 
    0xbcfaf6a4, 0xbd7e2fd0, 0x3d89e504, 0xbe36387d, 0x3d09a84b, 0xb9bc74ee, 0x3dc17f6c, 0xbd236bc9, 
    0x3dc5caee, 0x3d55a105, 0xbd8dcf98, 0xbdace54e, 0xbd8389b4, 0x3e2f014b, 0xbda1eff1, 0x3dbf61d1, 
    0x3e1968f1, 0x3cfc9a07, 0xbde98a1c, 0xbddf7eb7, 0x3d0f5423, 0x3c927b88, 0x3dd269e7, 0x3d68d5ec, 
    0x3d40bd39, 0xbd9b7ab9, 0xbe18d0dd, 0xbe1b74a0, 0x3da97a00, 0xbe0820eb, 0xbe5a6c0e, 0x3e36f98c, 
    0xbd8cd298, 0x3b6d2d4e, 0x3e179dce, 0x3e087131, 0x3da33ca2, 0x3da1e326, 0xbe202ecb, 0xbe054937, 
    0xbd146700, 0x3c1fa874, 0x3ce098d6, 0xbd31f354, 0xbe12519d, 0xb9487683, 0xbe449954, 0x3e3cacd6, 
    0xbe0c3a96, 0xbda9a05d, 0x3e3cc5f2, 0x3dd61849, 0xbe31d10b, 0x3e0a82b8, 0xbd2e5cb2, 0xbd1d7475, 
    0x3d1d9044, 0x3b86a3be, 0x3ce991f2, 0x3cdca545, 0x3da94ed7, 0xbddf038a, 0x3d417369, 0xbd79f470, 
    0xbdd9ef8f, 0x3d78cbe3, 0x3bf56207, 0xbc46c3ad, 0x3d6491d7, 0x3e17da8e, 0x3cc81c91, 0xbe29805c, 
    0x3e53460c, 0xbd9c4e7c, 0xbd7bd478, 0xbdb5e393, 0x3dcdf0e8, 0x3d79036d, 0xbd7af2da, 0x3dabb0d5, 
    0xbd3f91e0, 0x3dafdd20, 0xbe13e6f5, 0x3b877271, 0xbdee5070, 0x3d5cda22, 0xbde6c306, 0x3d03d7e1, 
    0xbdeeba7f, 0x3d0e8b43, 0x3de22b73, 0x3e7277b3, 0xbd195aed, 0xbe3853f9, 0x3e48d54f, 0xbe2a9941, 
    0x3cf9185d, 0x3cc0f4f9, 0xbdb86c29, 0x3bbd721b, 0xbd2e55fb, 0xbdcadba1, 0x3d90f84a, 0xbceba81a, 
    0x3dd38595, 0xbdca27c0, 0x3be757cb, 0xbcee9984, 0x3dd38296, 0x3e0952f0, 0x3c2ca9b1, 0x3e3753d4, 
    0xbe34e307, 0xbe26de68, 0xbe3279ca, 0x3dc614a0, 0xbd27b465, 0xbe0ec0a3, 0x3e47b67b, 0x3dc8c17e, 
    0xbd1a8b45, 0xbe05e482, 0xbd82422a, 0x3e392342, 0x3e07c827, 0x3caee54c, 0xbd93c997, 0xbdce3529, 
    0xbd13c0a9, 0xbd9e1ba4, 0xbd40b1b0, 0x3e33d0c3, 0xbe539e76, 0x3db99da7, 0xbd970a2e, 0x3cfe6bc0, 
    0x3d2cbbc0, 0xbe08f867, 0xbdc5cd19, 0x3e070185, 0xbdc85ea1, 0xbd9785d7, 0xbdd6316c, 0xbdd5e0f5, 
    0xbd7a2808, 0xbe102370, 0x3de057c7, 0xbcd0bd10, 0xbe1b9e11, 0xbdfee846, 0x3d2412f6, 0xbe26070c, 
    0xbd911a0d, 0xbd66a94e, 0xbc9e533d, 0xbce10065, 0x3e0a15d0, 0xba74e66b, 0x3dfcdcb3, 0x3ce2c165, 
    0x3dc527fc, 0x3dd8ce5b, 0x3cd64fca, 0xbce4d550, 0xbd6effcd, 0xbe0f17e1, 0x3dd1e75a, 0x3d2d647d, 
    0xbcb9ec8d, 0x3cea69e5, 0xbcdaf49a, 0x3e0009c8, 0xbcc8f6eb, 0xbdf144ea, 0xbd057ea4, 0xbe2473d2, 
    0xbd5af0c0, 0xbe179e2b, 0x3d7d3852, 0xbe2c8114, 0xbdcb5ccc, 0xbcaab899, 0xbdcbc53b, 0xbe1b182c, 
    0xbe08b158, 0xbdda8a0c, 0xbd4ee29d, 0x3e4d84c7, 0x3df0a85e, 0xbdf20f54, 0x3e2d7fef, 0x3d1bea44, 
    0xbe03e736, 0x3d540d60, 0xbc7b670e, 0x3d8887aa, 0x3e01c45b, 0x3e05e0a7, 0xbda8f2b8, 0xbbe6346f, 
    0xbdbbb861, 0x3e389c61, 0x3dee6fca, 0xbdd40786, 0xbd0897f1, 0xbd568c34, 0x3daccee4, 0x3db1a2f2, 
    0x3be1af12, 0xbe146eca, 0xbd00b7ef, 0xbda2e62a, 0x3dae910b, 0x3e22adfc, 0x3dd48ecc, 0x3b9ab1fc, 
    0xbe2f7318, 0xbd7d86a5, 0xbc30292b, 0x3d994a0d, 0x3daef186, 0x3d978ad9, 0xbdac7d29, 0x3e0196d4, 
    0xbe432514, 0x3c0f5d55, 0x3c89c89e, 0x3cc95eb9, 0xbe42f8c2, 0x3cd8721a, 0x3ddd9625, 0x3d1c6b8b, 
    0x3da5b5d6, 0x3d2a8e95, 0x3e034782, 0x3e0c82c0, 0xbbf284e4, 0x3dbcb535, 0x3b871b67, 0xbc01245a, 
    0xbe1e8e4b, 0x3ccbca97, 0xbd261bb1, 0xbe0de4e4, 0xbd9c6cd8, 0xbe012806, 0xbdf528d6, 0xbbc6eb45, 
    0x3cd7794f, 0x3e15819c, 0x3c564f5e, 0x3e3cc1a0, 0xbd94eb5c, 0x3d9552ab, 0xbd47fbe8, 0xbdc725dd, 
    0xbd876ec8, 0x3d7c6ecf, 0xbd500352, 0xbd8e3430, 0x3d706274, 0xbdf56840, 0xbe28d162, 0xbe4b8a2b, 
    0xbd1c0fb2, 0x3df7909b, 0x3dd3dbf4, 0xbdc43798, 0x3d5b5802, 0x3bb66060, 0x3e3a95aa, 0x3cdcee1c, 
    0x3da0462d, 0x3dc125de, 0x3d9377a2, 0x3ddd02b8, 0x3dbc6d84, 0x3d29e6b1, 0x3c8e6f1b, 0x3dc8f686, 
    0xbd557647, 0xbe17dde3, 0x3db10fca, 0x3db72ea8, 0x3dddb67f, 0x3de53cc1, 0xbc6de6f6, 0xbde7a356, 
    0xbd527eb0, 0xbd6e9568, 0x3d121003, 0x3d4a2478, 0x3da1a9f5, 0x3d223040, 0x3e1daf1f, 0xba45da63, 
    0x3e02e4c4, 0xbe308f12, 0x3d05217d, 0xbe20a975, 0xbc94bfb9, 0xbdeed812, 0xbe0a8d0d, 0x3de7d784, 
    0xbcf3650d, 0xbde8a530, 0xbd2a9273, 0xbbccd804, 0x3de8e61f, 0x3d0a182d, 0xbdc9c77e, 0xbcb6099e, 
    0x3d22fa06, 0xbcbd802d, 0x3df426e9, 0x3db23901, 0x3e102322, 0xbc3810c0, 0xbdca46ab, 0xbcf20c2b, 
    0xbe6e92bb, 0xbd6c5664, 0xbe2a8166, 0xbdc14c26, 0x3deacb60, 0x3db67e2a, 0x3e37a744, 0xbd83cc66, 
    0xbd4564ee, 0x3df7fb92, 0xbd4b30f1, 0x3d1048e7, 0x3dca0a3c, 0x3df39bdc, 0xbd7d905c, 0xbc8913d0, 
    0xbda7d201, 0x3dc7bf5e, 0x3e13a964, 0x3e21bc7f, 0xbe80646c, 0x3e5255ec, 0xbd4bf089, 0x3d2d2695, 
    0x3e279e01, 0xbddaf69c, 0xbd6f7c16, 0x3d9c5a96, 0x3d3d1ce1, 0x3e1dd389, 0xbd9acb7d, 0xbe480122, 
    0xbe4954f2, 0x3e0eb15c, 0xbd3c16bb, 0x3d8af1e5, 0x3e0bdf9b, 0x3dc1c877, 0xbe08ab76, 0xbdc45efd, 
    0x3dcdc26b, 0x3d2f333b, 0xbd4d6ef5, 0xbde6c24a, 0x3e00cec4, 0xbda80e9d, 0xbd0e9247, 0xbd92c8c5, 
    0x3d883cb6, 0xbc42312d, 0xbce86860, 0x3ddf8794, 0x3df65250, 0x3dfc8601, 0xbde091e0, 0x3c699042, 
    0x3e4ab495, 0x3e0847ec, 0x3df836e4, 0xbd8a3afc, 0xbe592f95, 0xbd4f277a, 0xbd8163b3, 0x3d3f5383, 
    0x3c9442c0, 0xbcc62d01, 0xbd60dd6a, 0x3db6dc24, 0x3d961d07, 0x3cfb05d4, 0xbdcd8cd5, 0xbe1bee32, 
    0xbda14d94, 0x3b890b9f, 0x3e1264d8, 0xbe313338, 0x3db50bc9, 0x39aa3553, 0x3dd249d6, 0xbd8d3777, 
    0xbe4e17e3, 0xbdc9318e, 0x3e3ed4b8, 0xbe2bb323, 0x3d1ea557, 0xbe2b1a03, 0xbe2babb3, 0xbdcaa638, 
    0x3ca55f5a, 0xbc6c4adb, 0x3d9797ad, 0xbcce499c, 0x3e1978f6, 0xbe11eef9, 0x3d9f9bd5, 0xbe0e92fd, 
    0x3e26af64, 0x3c4599a0, 0xbdbdb751, 0xbe1bd690, 0xbd808a1e, 0x3dc04ecc, 0x3d536bb3, 0x3d6750a3, 
    0xbd946ddf, 0xbe0124af, 0x3ddddf52, 0x3d2df2b0, 0xbdd1a3a3, 0x3d9c27d3, 0xbe3023be, 0xbdea65ca, 
    0x3dffd36f, 0x3c5f10bf, 0x3dac2a20, 0xbe27333f, 0xbd742283, 0xbe18c752, 0xbe023ca5, 0xbddb5a87, 
    0x3d9d3168, 0x3d8447de, 0xbcb1b687, 0x3c9c139c, 0x3e33cf5a, 0xbb91cbc3, 0x3d5aa084, 0xbda93c11, 
    0x3d798ee6, 0xbdc7bdab, 0x3e33a963, 0x3d32ca81, 0x3c2452ee, 0x3d88500c, 0x3cbcef83, 0x3d085b44, 
    0x3d976c4a, 0xbdf6e478, 0x3ba6273b, 0x3e21615e, 0xbe081040, 0xbe56aabb, 0x3d961b03, 0xbc8f6a8a, 
    0x3d8825be, 0xbe079223, 0xbbb9d7a4, 0xbe4c0e41, 0x3d456fb5, 0xbd9ab451, 0xbe05cf6d, 0xbd852336, 
    0xbdb5f261, 0xbb9b6f70, 0xbdbd84f7, 0xbcea43b7, 0x3d04c124, 0xbe11c0d5, 0x3e2fec75, 0xbe244fe0, 
    0xbd491a42, 0x3df08f40, 0x3d5c402e, 0x3d12ba9c, 0xbe344fe9, 0xbe0bc2e4, 0x3d203afa, 0xbdcac4d8, 
    0x3d9da7f2, 0xbdd30287, 0xbd1b01aa, 0x3e0510a0, 0xbd4d0329, 0xbdc79e73, 0x3d155a6a, 0x3dd3130d, 
    0x3d1635a7, 0xbc8f694a, 0x3df134f5, 0x3d27620c, 0xbb53dcf2, 0xbd8d9630, 0xbb2647fa, 0xbe1417e9, 
    0xbd38596f, 0xbc4e50c6, 0xbd0a7f28, 0x3e2af85f, 0xbd8d61ba, 0xbe09d480, 0xbe3946ce, 0x3e369128, 
    0xbe0b7884, 0xbde90f43, 0xbdb92153, 0x3e14410c, 0xbd99b07d, 0x3cb9600a, 0x3ac11dc0, 0x3cda41ac, 
    0xbe081012, 0xbdb89db9, 0xbd9bebb3, 0xbe21188c, 0x3da2a50a, 0x3d6425b4, 0x3b5a6d0c, 0x3d627ce1, 
    0x3d6c91d6, 0x3dab1bc4, 0xbd7d277e, 0x3dc32cd3, 0xbd09d23e, 0x3dbf4e96, 0x3d8ebfe1, 0xbd8d47c8, 
    0x3d2e0d89, 0xbd95631d, 0xbe0a8aa8, 0x3e143db1, 0xbd3c32d5, 0xbd63a74f, 0x3dc106c3, 0xbd927a27, 
    0xbe0e4165, 0xbe04e645, 0x3dbddb2b, 0x3d555113, 0xbe24fd0c, 0xbdd03a09, 0xbcd8afc1, 0xbd71a8a2, 
    0xbccee378, 0x3e2b71c4, 0x3e06de17, 0xbe1fc78b, 0x3d65f38e, 0x3ddd2660, 0x3c86b6f0, 0x3d2a4ee0, 
    0x3bedd83d, 0xbda3dd67, 0x3e4686a8, 0x3de54f86, 0x3cd0f703, 0xbd4f338b, 0x3d92d2ae, 0xbdf679c0, 
    0x3dca592d, 0x3dddfd9a, 0xbda575fd, 0xbca573a9, 0x3c8de093, 0xbe31f729, 0xbdd9f5be, 0x3dacd100, 
    0x3d7cd070, 0x3e1b5dec, 0xbdf294f4, 0xbd0f350f, 0xba869251, 0x3de9ced3, 0x3c47868d, 0x3e1cbeb9, 
    0x3c569449, 0x3dde2e28, 0x3d4621a2, 0x3d8b571c, 0xbd845677, 0x3d8ba345, 0x3ddb7711, 0x3cfa3424, 
    0xbcb61db3, 0x3d4d4f33, 0x3e09b1ad, 0x3d87fd49, 0xbdad25bc, 0x3d100d4e, 0x3dcbe94c, 0x3e051d38, 
    0xbdcb6b3c, 0x3d36a718, 0xbe0056b6, 0x3e07e1f6, 0xbe325f32, 0xbe75fb78, 0x3d675680, 0x3cb01196, 
    0xbddaa7be, 0x3e0d7396, 0x3e51e934, 0xbdb6ab49, 0x3e0a26f3, 0x3ca9ab15, 0x3e215d71, 0xbe07a659, 
    0xbd735425, 0xbd07f2b7, 0x3d0ae4b4, 0x3daa749b, 0x3d85b561, 0xbd523188, 0xbd16b644, 0x3d525d85, 
    0x3df5934d, 0xbe5321e6, 0x3db7407f, 0xbc363f1d, 0x3d3a56be, 0xbc8088e9, 0x3c9ed856, 0x3dabd065, 
    0xbd76d308, 0x3d6c6fc7, 0xbe1372a6, 0xbd605ed7, 0xbe1ef60d, 0x3e0e9146, 0xbccb9389, 0x3c67fe37, 
    0x3d1105a7, 0x3ccb49c1, 0x3cc330cb, 0xbe43e062, 0xbbf75e5f, 0x3de13091, 0xbda2cf7a, 0xbe05be1e, 
    0x3e1a92e6, 0xbd394d09, 0x3ddfb952, 0xbd8232dc, 0x3d4d82b7, 0xbb8b7dbc, 0xbc928f5c, 0xbc4f674c, 
    0x3e130b26, 0x3e15c02b, 0x3dca08c2, 0x3dee5820, 0x3e0a9df3, 0xbe0cd724, 0x3ce8293d, 0xbda8dc0a, 
    0x3dcd1c25, 0x3e202519, 0xbe20e568, 0xbde24f13, 0xbcaff0b9, 0x3dec50b4, 0xbd60ab5b, 0x3e386aee, 
    0x3d49b2b0, 0xbe13070f, 0x3d81f5f3, 0xbdb4cf3f, 0x3cfece6c, 0x3dd71105, 0x3d1dd869, 0x3e31357d, 
    0x3df537da, 0x3cdd32e4, 0x3df45868, 0xbdd6b50c, 0x3c474150, 0xbd9ef39e, 0xbe167de2, 0x3db5b419, 
    0xbd692721, 0xbe2cb610, 0x3e3d229e, 0x3d866e7f, 0x3d17b835, 0xbe188ef8, 0xbdae675e, 0xbd608c6f, 
    0x3df1264c, 0x3e2f4a1f, 0xbe004b02, 0x3e1c9835, 0x3c67e416, 0x3cd2b96b, 0xbc46cc58, 0xbe18f335, 
    0x3e132b52, 0xbdaaa96d, 0xbdf2816b, 0xbdef059d, 0x3d60c708, 0x3db2a30d, 0xbde854f6, 0x3c24a18d, 
    0x3d53484d, 0x3e5ed204, 0xbcedb80e, 0x3d82859f, 0x3dc49c2d, 0xbe094ceb, 0x3d32c976, 0x3d8b7bc3, 
    0x3ceeb04a, 0x3e0bab62, 0xbe1b6633, 0x3cba3685, 0xbe08afcc, 0xbd838098, 0xbe0f3fe0, 0x3daf5fbc, 
    0xbdcaa349, 0x3d9a38c4, 0xbe37cef9, 0xbd2d8b36, 0xbcca7b55, 0xbe3666a2, 0x3dfd5d4f, 0xbe04ec53, 
    0xbdfe7cdc, 0x3da3a83c, 0x3e0e769f, 0x3d0fe77b, 0x3c8956a2, 0x3d92d87d, 0xbdd4d6c8, 0xbd909731, 
    0x3e33ec88, 0x3e398ee7, 0xbd378039, 0xbdcd8f16, 0xbde62c88, 0xbd587eb2, 0xbcfd5c94, 0xbc825800, 
    0x3cfad153, 0x3cb46a5f, 0xbd87d24a, 0x3e136578, 0xbd02da09, 0xbdb0357b, 0xbddfbdb8, 0xbd360455, 
    0xbe1b42a3, 0xbd6453e5, 0xbdbaeb5d, 0x3e2667c1, 0xbe40d948, 0xbe743a12, 0xbde616c9, 0x3d875c39, 
    0xbd067eb1, 0xbaa1d525, 0xbd6bd084, 0x3e3381e0, 0x3dea20fc, 0xbd4972f0, 0x3d60e826, 0xbd8dac48, 
    0x3d1744ed, 0x3dae00b9, 0x3dec4577, 0xbe02dccd, 0x3cdc5fd6, 0x3d67946f, 0x3d98af80, 0xbddeec07, 
    0xbc65231b, 0x3e08c1d3, 0x3db01292, 0xbd6782ce, 0x3d610b90, 0xbd46f7e8, 0xbe1c991b, 0xbe2a740a, 
    0xbd8b83af, 0xbe15e820, 0x3ba96004, 0x3deb35ef, 0xbdf6074b, 0xbe15725c, 0x3e13b33f, 0xbe1eee9f, 
    0xbe0ceac5, 0x3e0a944f, 0x3d6d0c34, 0x3dc136a0, 0xbd487c34, 0xbdbd22e1, 0xbde79cd1, 0x3caa094b, 
    0xbd054396, 0x3dbcb2f3, 0xbe043451, 0x3e3a9a51, 0x3d414ac7, 0x3dce23da, 0x3dc697be, 0xbdda968a, 
    0x3d6f37a3, 0xbc9b363c, 0x3c942fa0, 0x3e16b2c6, 0x3c980a8f, 0xbde2e140, 0x3b2f23fa, 0xbd851644, 
    0xbc2ffb1e, 0x3dccf86e, 0xbc1e5f84, 0xbe15ddca, 0x3dbefad6, 0x3e14821a, 0xbe3698c2, 0x3d858bb5, 
    0x3c8fe13e, 0x3d8d408e, 0xbe1f8531, 0x3dd93130, 0x3e1b16f3, 0x3d60346b, 0xbdbd98da, 0x3e1da6de, 
    0x3cd5be6d, 0x3e2430ef, 0xbe163f30, 0xbde288a0, 0xbe097dc7, 0xbdd2d2b5, 0x3c2fb7c2, 0xbbf10dcf, 
    0xbe12d983, 0xbd5cd1fe, 0x3b50c867, 0xbdd3d8e5, 0x3da2dbde, 0x3e2f59ec, 0xbddbd667, 0xbddfce85, 
    0xbe0ee755, 0x3e2cdcc6, 0x3b96f9db, 0xbe072d81, 0xbe45cd56, 0xbd659cc1, 0xbda40c05, 0x3e2bb5bb, 
    0xbe07c271, 0xbcbe1b99, 0x3ca6f353, 0xbe002a66, 0x3e1fe596, 0x3cfd25a1, 0xbba4d369, 0x3d8d4bac, 
    0xbdcf1fd1, 0x3d76f276, 0x3e2cff07, 0x3ddcc67e, 0x3cfc170e, 0x3e21e8f0, 0x3d53ced3, 0x3da85398, 
    0xbb6cdf00, 0xbd88d2e3, 0x3dd03016, 0xbdc379bd, 0x3c90ab34, 0x3c8bf945, 0x3c310289, 0x3d93c74b, 
    0x3dfdbe56, 0xbd8948f4, 0xbd5b2974, 0xbd498c62, 0xbd0d7d4f, 0xbca5d31d, 0xbe68de05, 0x3d1fc365, 
    0xbda27315, 0xbe5dde28, 0x3da4490b, 0x3deb2919, 0xbd8777a7, 0x3c1d2869, 0xbd446cec, 0xbd8ebdc5, 
    0xbdcde369, 0x3bb345e0, 0x3d7a42b2, 0xbe1ea116, 0x3e10c306, 0x3d2c4bf6, 0x3dd4b9ec, 0x3cd1f34b, 
    0xbe1fc30d, 0x3e3ae5a5, 0xbdfe80f4, 0xbcc70dc7, 0xbddbf98e, 0xbd08a74c, 0x3dc64b65, 0x3e161d5f, 
    0xbde41cf6, 0xbd2bd597, 0x3e3ba8ca, 0xbdc9a3f4, 0xbd46fede, 0x3db6b7c4, 0xbb12c708, 0x3e2acce1, 
    0xbc6327e4, 0xbc857b7d, 0x3d81d4a9, 0xbd9c043c, 0x3d541c05, 0x3e24d756, 0x3cf59ba5, 0xbdae5792, 
    0xbbe5f256, 0xbd2dd9fb, 0x3dbbbcfc, 0x3b5f6e51, 0xbcfd81e5, 0xbde92623, 0xbe09c257, 0x3df35f18, 
    0xbe0bca9c, 0x3e32f2d5, 0x3d0680f7, 0x3d769c49, 0x3df95b71, 0x3dd63d78, 0xbe3251a9, 0xbd003fc8, 
    0xbd11ceec, 0xbd4c8d75, 0x3dbd58d3, 0x3e212b8a, 0xbe01ded6, 0xbc6accad, 0xbe019949, 0xbd9ba634, 
    0xbdad9895, 0xbd9ed36f, 0xbdcf6388, 0x3e0263d3, 0xbe200168, 0x3e1116e2, 0x3caef543, 0xbe2e80a0, 
    0xbe07b9ee, 0x3e430d83, 0xbe079a4f, 0xbe4f5fbd, 0xbd1cc34a, 0xbcfd8b6b, 0xbe2b8e8c, 0xbd62ecdb, 
    0xbe206bed, 0x3e1383e6, 0xbc2def6e, 0x3d827146, 0xbe176a6a, 0x3d4ac3c8, 0x3d97033d, 0x3d4f5dad, 
    0x3c0d8746, 0xbc233a7e, 0x3d75a1c7, 0xbc655d5c, 0xbd36984d, 0xbe488709, 0xbdebb013, 0x3c0aabba, 
    0xbdfcf329, 0x3dfd9145, 0x3d2c3e54, 0x3e194f63, 0x3d36049e, 0x3e26e616, 0xbbd147af, 0xbdaea56e, 
    0x3d9e2a59, 0x3d176d68, 0xbe2b8efb, 0x3d96f00c, 0x3daaa845, 0xbdd0b573, 0xbd204c26, 0xbd90bb1e, 
    0xbd011cba, 0x3e6c240c, 0x3e2e6bf6, 0x3cc1cea1, 0x3e0c7398, 0xbe6c7758, 0xbc5b62cb, 0x3caf63fd, 
    0x3ca04205, 0xbd9e6b08, 0xbca0c0a8, 0xbdf98904, 0xbb2f4a4d, 0xbe252d80, 0xbddcabfd, 0xbde2f1e7, 
    0xbe12d99d, 0x3e184bca, 0x3e106630, 0xbdb97beb, 0x3d0e7776, 0x3ded6fdf, 0x3d24919b, 0x3d98ba17, 
    0x3e20e972, 0xbddab9d4, 0xbe189679, 0xbc325fd6, 0x3e0d51b7, 0x3da01b99, 0x3e0326b6, 0xbdf721c6, 
    0xbd82d334, 0x3df5daf8, 0x3da77a65, 0x3c7adec0, 0x3e04147c, 0x3e049088, 0x3e227465, 0xbd53ce56, 
    0xbe55cdb2, 0xbda24f17, 0x3e254277, 0xbd5f2719, 0x3ddc97f2, 0xbc821962, 0xbd8fa23c, 0xbe33f756, 
    0x3d9e5e18, 0x3d9d87da, 0x3c9215ba, 0x3db97339, 0x3d9250e1, 0x3e0bb548, 0x3dac1e6f, 0x3d32c4a8, 
    0xbda83593, 0x3d0a95f4, 0xbe4a3626, 0x3db7b784, 0x3d0c3e76, 0xbd37e805, 0x3e44c681, 0xbe332ac6, 
    0x3d1907e5, 0x3d9fde7c, 0x3dbefe80, 0xbcb74f26, 0xbdf33d73, 0xbe2d2f03, 0x3dd7b5cd, 0x3ccf77b0, 
    0xbc9b5a7d, 0x3d155386, 0xbd9ba7ea, 0xbbf2824e, 0xbda6c05a, 0xbd2f9e4d, 0xbe560056, 0x3d99fea4, 
    0x3e16d032, 0xbdda4f5c, 0x3b581a15, 0xbdceb6a4, 0xbe1faf88, 0x3dd7827b, 0x3ce80a33, 0x3e1cd06e, 
    0x3c1e7b5e, 0xbe115c53, 0xbdaef5c0, 0xbda6728f, 0x3c607684, 0x3d6d1e77, 0x3deda352, 0xbda675e3, 
    0xbd079457, 0xbc2788e8, 0x3cee58a8, 0x3dbdc8f3, 0x3baf962e, 0xba5b407a, 0x3d6a4c79, 0xbcd108ae, 
    0x3e59f358, 0x3c1b8294, 0xbde1a879, 0x3d9aded9, 0xbe4e6e53, 0xbe1166a2, 0x3e1309b4, 0x3de62ee8, 
    0xbde6874f, 0x3d431348, 0x3d5c53bd, 0xbdf71e86, 0x3d934b7f, 0x3d9993b7, 0x3ccffe2e, 0x3d443b82, 
    0x3e09bd19, 0x3e409cd1, 0x3bcc0b19, 0xbceeee18, 0x3e178fcd, 0x3cd4f79a, 0xbe226c8d, 0xbd1388c4, 
    0xbe2a3252, 0x3d87ea2e, 0xbdc31c0d, 0xbe07aa21, 0x3d7a1bf5, 0xbcc9fbd4, 0x3dd8a5da, 0x3d87cb25, 
    0x3dd64306, 0xbe45d12a, 0xbda8d172, 0xbe1c0103, 0xbe1977e8, 0x3e308966, 0x3dbe5804, 0xbd927cb2, 
    0x3e059dd9, 0xbe249980, 0xbbab7eaf, 0xbda714d5, 0xbe3194bf, 0x3e0d5690, 0xbdb54de4, 0x3dce88a5, 
    0x3e2d36ea, 0xbdd3e603, 0x3ad4de47, 0xbd0f8957, 0x3d41af53, 0xbe2f1907, 0xbe1bb8f3, 0x38eb5743, 
    0x3e21584b, 0x3d33834c, 0xbe1d7214, 0xbd7e8151, 0xbd2f4b83, 0xbdb0da4f, 0xbd9e855e, 0x3e2e8c0e, 
    0x3becbec4, 0xbd8acffd, 0xbd91809b, 0xbe1fa38a, 0x3e25e42c, 0x3c99cc33, 0xbdf1e1a4, 0x3e2de825, 
    0x3d22b3c0, 0x3d94a819, 0xbde472d6, 0x3dfb7d54, 0x3cebbc10, 0xbdd27e4b, 0x3d891599, 0x3bae3ba6, 
    0x3d323f13, 0x3deb348a, 0xbbcc4b74, 0xbd244c94, 0xbdf89252, 0xbd2e14ff, 0x3d771b3a, 0xbdb20e41, 
    0xbe12c851, 0xbd7014d0, 0x3bf47970, 0x3e2d666d, 0xbdbb7cf8, 0x3e0c106c, 0xbca162b1, 0x3d958396, 
    0x3e33b5b1, 0x3cf9a969, 0xbd0bab96, 0x3e16da13, 0xbdf8d5bf, 0x3e073ca8, 0xbd7a3657, 0xbdba79bd, 
    0x3e00b009, 0xbe25d033, 0xbe232221, 0x3dfb8519, 0x3da99f64, 0x3d7d68dd, 0xbe24c0ce, 0xbe685fe2, 
    0xbd43d5ff, 0x3df90057, 0x3dc938ec, 0xbd0d98ed, 0x3d3f6716, 0x3d0c66ed, 0x3d7f7350, 0xb9d5d130, 
    0xbd9535af, 0x3d8b274a, 0xbdf51b57, 0x3ab320a0, 0xbe4dc13d, 0xbd0854ab, 0x3d3f7c62, 0xbc47f522, 
    0x3e4b3672, 0xbd1fb25a, 0x3ddd3b15, 0xbe0d4932, 0x3d332f41, 0x3e3f7d10, 0xbe34ec17, 0x3d5d4988, 
    0x3d840737, 0x3dfd0765, 0x3e008678, 0x3de4f29b, 0xbe25410c, 0x3da11501, 0x3cf2c8aa, 0xbdaf2ba4, 
    0x3db5d93f, 0xbddbd486, 0xbda9d8a1, 0xbcd6ced3, 0xbb2e2ddb, 0xbe136d74, 0x3e148789, 0xbdba3f8d, 
    0xbdbb281c, 0x3de2b95f, 0x3da9099f, 0x3de78213, 0xbda31b6b, 0xbd37ef72, 0xbddeef2d, 0x3dcd4c30, 
    0xbe10a791, 0xbcc34ff3, 0x3cfc8b8a, 0x3bfefa2e, 0xbdbc1e69, 0xbda00db9, 0xbd0526e3, 0x3cc91182, 
    0xbd6c7905, 0xbd6cb62c, 0xbdd46851, 0xbe2055db, 0xbc9de3c3, 0x3e410c66, 0x3e2487ec, 0xbe587229, 
    0xbdbf0c19, 0x3d28ee62, 0xbcd8c660, 0xbe0abbb8, 0x3e2508c5, 0x3c1329dc, 0xbd9b2995, 0x3db27548, 
    0xbd9d01ad, 0xbd46a7c1, 0x3dff7a5b, 0x3e2de672, 0xbe663b19, 0xbdfca87b, 0xbd3d4613, 0x3d654fd5, 
    0xbe1e29c4, 0x3e0e6956, 0x3dddbb78, 0xbca70ea6, 0xbdb36696, 0x3d91bdce, 0x3dd5fc65, 0xbddf779b, 
    0x3ddd3707, 0xbd7e3235, 0xbd35831b, 0xbdf7823b, 0x3e1dcede, 0xbc664c77, 0xbe321e99, 0x3d8ca143, 
    0x3d3cb0e3, 0xbcebce22, 0xbdb0c897, 0x3e16343c, 0xbe49e3f7, 0xbc9bed8c, 0xbe26465b, 0x3d693756, 
    0x3b840c17, 0x3bec6d28, 0xbe05e6cd, 0xbc72ddbb, 0xbe1d1e34, 0x3e2b55c9, 0xbd3935a1, 0x3e02dd89, 
    0x3ddbafd8, 0xbe3f0f20, 0xbe0e034d, 0x3caa5f3b, 0x3cc7b6d0, 0xbdcb0755, 0xbda57fd8, 0x3d2fbf41, 
    0xbdb42701, 0xbc10d792, 0xbdc7ed83, 0x3deb6202, 0x3ad2ae92, 0x3de9c6be, 0xbca5ace1, 0xbe462601, 
    0xbe0a5640, 0x3c186c79, 0xbe206d83, 0x3dcfbcef, 0x3d75799c, 0xbdbf1f3e, 0xbd3cd063, 0x3dba70dd, 
    0xbde30ac5, 0xbc178998, 0x3dbde04d, 0xbd9b2998, 0x3d97eda3, 0x3da81cfc, 0xbe3cce5a, 0xbe0c022e, 
    0xbd38d2b7, 0xbdd292dd, 0x3dcc5cde, 0x3e166945, 0xbd63a4b5, 0xbdcb12a8, 0xbe25525b, 0xbdbd18eb, 
    0xbd698596, 0x3da8b1ca, 0xbceddeba, 0x3d938701, 0xbdaa6062, 0xbd4aa5d5, 0xbdb55192, 0xbd5672df, 
    0xbddb2999, 0xbd4b6cc8, 0xbe2867a3, 0xbd2309b2, 0xbe18ba0e, 0x3e12d265, 0x3d8e01cd, 0x3dc50263, 
    0x3e16fdf0, 0x3e239a3b, 0x3e275906, 0x3e130738, 0xbde9f945, 0x3cc6228c, 0xbdcbc383, 0xbe0ad1a4, 
    0xbbbb4639, 0x3d15ec8e, 0x3bfc70b4, 0x3df76595, 0x3c8fec0b, 0xbe63cbf6, 0x3d476773, 0x3d64197b, 
    0x3e1f0a7d, 0x3e57e215, 0x3d46820b, 0x3de337b9, 0x3b277dc6, 0xbe376ce8, 0x3d7e79b8, 0xbd3fad3a, 
    0xbd2ee145, 0x3d9c02af, 0x3d40c05b, 0xbd103cef, 0xbbba8017, 0x3d5becc5, 0x3e701a1f, 0x3dcba5d3, 
    0x3d80a2cd, 0x3dfb33e7, 0x3e250d2b, 0x3c83f9e5, 0x3c40dd4d, 0xbda18514, 0x3ddb5a1f, 0x3de61c45, 
    0x3dc0eba6, 0xbdecc690, 0x3d2c4aa9, 0xbc61d66d, 0x3d2f7c48, 0xbd9babcc, 0xbd96d9b1, 0x3d8c9d54, 
    0x3d0fe369, 0x3e407f83, 0xbdbe69dc, 0x3dc39337, 0xbe281416, 0xbd9506bc, 0xbd0b6bdf, 0xbdcece51, 
    0xbe1b32a2, 0xbca34799, 0x3de0b16e, 0x3d58c88e, 0xbd872335, 0x3da828bb, 0xbdac61a7, 0x3da96d1a, 
    0xbd55195e, 0xbd626eba, 0xbc8c0955, 0xbddc3e52, 0x3dfa8556, 0xbe051cc4, 0xbe21136d, 0xbdfe4c87, 
    0x3e0c6679, 0x3d82a894, 0xbd43b3af, 0xbe06d14f, 0x3daea6bf, 0xbd761614, 0xbdc1b2b8, 0xbd9e18cd, 
    0x3da40bc3, 0xbd7af65b, 0x3cd1b502, 0xbe2f3740, 0xbd707bfe, 0x3e23344e, 0x3e0d320d, 0xbcdf14e5, 
    0x3e287e65, 0xbddaf746, 0x3df04045, 0xbd9834f2, 0xbdcc73e0, 0x3da6e85b, 0xbddebbb1, 0x3e0712ec, 
    0x3dd7e11e, 0x3c26b202, 0xbce94276, 0xbd9cb43e, 0x3da53634, 0x3e1b3730, 0xbdacb748, 0x3e444c5a, 
    0xbd90020b, 0xbd7036c0, 0x3dc5c1fe, 0x3e1da495, 0xbdde9229, 0x3db6eea8, 0x3dddbb21, 0xbe19de15, 
    0x3e0dedfb, 0xbe35e52d, 0xbe4bef0c, 0xbc30e965, 0xbe151a10, 0xbabc0251, 0x3e18e0f2, 0x3d9c55c4, 
    0x3d34835d, 0x3e09957e, 0xbcd3d113, 0x3d820489, 0x3d84d25a, 0x3c58c682, 0xbdce91be, 0x3d22c54f, 
    0x3d2b3973, 0xbcd976f1, 0xbd9773a9, 0xbe2847f7, 0xbdbca340, 0x3de72048, 0x3d88c909, 0xbd2ba720, 
    0x3e04d6f3, 0xbddefe76, 0x3da85e24, 0x3c976cc7, 0x3d95300e, 0x3df833ee, 0x3da20c71, 0x3dd0da96, 
    0xbe0a6707, 0xbdefb663, 0x3e13fe7f, 0x3e268aab, 0xbbf5807c, 0x3d0b8c13, 0xbc44cd20, 0x3e0709b6, 
    0xbde1d21e, 0x3e4515aa, 0x3dff411d, 0xbd9ef183, 0xbd509ca9, 0x3d20834a, 0x3de1059b, 0x3c5805f9, 
    0x3df38154, 0x3d69b3a9, 0x3babb26c, 0x3d2c16f5, 0xbc776211, 0xba8ad356, 0xbcac7157, 0xbe11f6e6, 
    0xbcc8dc33, 0xbdf677fb, 0xbe1e8cfb, 0x3e3008dd, 0xbdd5b72e, 0x3d9a8f6d, 0xbdbf4480, 0xbd3576ca, 
    0xbd12cebc, 0xbd58489d, 0x3d96ef58, 0x3e2e1157, 0xbd3014dd, 0x3e00bec8, 0x385d8886, 0x3d23571b, 
    0x3da17c89, 0xbc6eff9f, 0x3dce58b4, 0xbda47435, 0x3d00321f, 0xbdc083e8, 0x3df49423, 0x3e099c84, 
    0x3e458d93, 0xbe273ae6, 0xbd620ea6, 0xbceaef1b, 0xbd17f993, 0x3c9686f6, 0x3bee90c4, 0xbe03c8ed, 
    0xbe020971, 0x3d9f4216, 0x3e194b73, 0x3e0e9c86, 0x3d7f3a13, 0x3b5c886f, 0xbe00de03, 0xbe0ad253, 
    0xbda47dab, 0xbd24d238, 0x3b0355ce, 0xbe166e11, 0x3d930e78, 0x3d8e499e, 0x3db82e86, 0xbd7e5cd3, 
    0x3de5a7ef, 0xbd3e2cbc, 0xbe04cc00, 0x3cdde058, 0xbdfa97d5, 0xbdd84cde, 0x3c852a81, 0x3d35d5b0, 
    0x3c8d25dc, 0x3a0eb199, 0xbd5aae55, 0x3dc837f2, 0xbd16bea7, 0x3dec4985, 0x3dba9e01, 0xbd5f7589, 
    0xbd19f312, 0xbbed08e7, 0x3da40844, 0xbda52d78, 0xbe2b2e9c, 0xbe00ecc6, 0x3d0e7d1b, 0x3d210e3d, 
    0xbd974466, 0xbc78cdcc, 0xbd9347e1, 0xbdfdaa1b, 0xbce63708, 0x3e131d73, 0xbdcf1a3c, 0xbe4bca6b, 
    0xbd8ab413, 0xbd6b2079, 0xbdeabe96, 0x3dcbead6, 0xbde17d6a, 0xbd1f0cfc, 0xbe25e17c, 0x3d6eaf35, 
    0x3dc57cf1, 0xbe1044c0, 0xbd1ea065, 0x3ce5e7a0, 0xbd1fdd5d, 0x3d74c73f, 0xbd828d1a, 0x3c880dea, 
    0x3e24ed4c, 0xbe25bfe7, 0x3d90aea0, 0xbc064f68, 0x3cf071da, 0xbdebbe5d, 0x3ca80601, 0x3a7e461b, 
    0xbe0ae098, 0xbe0c3b44, 0x3c3b0327, 0xbd78a1cb, 0xbe3e7b94, 0xbe1ea55f, 0x3db04e7e, 0x3d8476c6, 
    0xbca5d590, 0xbd129eb2, 0x3daca121, 0x3df8fff1, 0x3d1f87fd, 0xbbcce081, 0x3de01f96, 0xbe332166, 
    0x3e0764c4, 0x3e5f91e5, 0xbe00f0e2, 0xbdec78f0, 0x3ce17da8, 0xbdb8d829, 0x3e1933b3, 0x3d1d570b, 
    0x3d800bd2, 0xbdb49b34, 0xbe033178, 0x3d746d97, 0x3c1cef57, 0x3d24ab26, 0xbd1d364d, 0x3cbd0fe9, 
    0xbd826024, 0x3c497eea, 0xbe6f5d0a, 0xbc379746, 0x3bc45496, 0xbd9a2455, 0x3d1f51f0, 0xbd6a13b9, 
    0x3c809c93, 0xbd7ded44, 0xbe14af88, 0x3e367dd5, 0x3d39f7b6, 0xbe002fcf, 0x3dadd0b9, 0xbcac479d, 
    0x3de2ba53, 0xbdd95ce9, 0xbd8d03cf, 0xbd3022cf, 0x3da98e66, 0xbdb883cb, 0xbe220494, 0x3de1f853, 
    0xbb2efaa7, 0x3c82ecad, 0x3db2f77e, 0x3d20f46a, 0xbd4c3fb0, 0x3e434f5e, 0xbdf9b7f7, 0xbe25cbb6, 
    0x3ca47c49, 0x3c8103f1, 0xbc71a444, 0xbd7ae701, 0xbd998f41, 0xbcd19bd9, 0x3d023d56, 0x3dc0f369, 
    0x3da7f9f8, 0xbc90905f, 0xbd152210, 0x3d3434b0, 0xbd661f1a, 0xbcadd3c6, 0xbe06d116, 0x3ca3e3c0, 
    0xbd2934d0, 0x3d3028e2, 0x3d9872f9, 0x3e0bc8a4, 0xbe15273b, 0x3e0fd669, 0xbe34a07d, 0xbdbdc9df, 
    0x3d9a097b, 0xbd265c24, 0x3dba6b59, 0x3cc17b04, 0x3e030c9d, 0x3d86f65a, 0xbd03fc29, 0xbdf84ac5, 
    0xbd85e1b2, 0xbde028e3, 0xbe59b047, 0x3e067db8, 0xbe0ede09, 0x3c734f30, 0x3df8e532, 0xbe3e990a, 
    0xbdc4c2ae, 0x3e0cf6e1, 0xbdfad79a, 0xbd93a804, 0x3dc04f84, 0x3d2f2820, 0x3e23c5c6, 0xbdc3cd26, 
    0xbdf664b9, 0x3d8f6aa6, 0xbe06eefc, 0xbcab971c, 0xbc02cb21, 0xbd813558, 0x3e0e6124, 0x3deb3abf, 
    0x3c89620e, 0x3daf46cf, 0xbd809d86, 0xbe094e61, 0xbb2e3b04, 0x3d3f36a7, 0x3d921c3c, 0xbe2f9a91, 
    0x3ddbcb6b, 0xbcf17b99, 0x3d44ef9f, 0xbd55f9bb, 0x3cb96be1, 0x3e159897, 0x3acfadea, 0x3e1430e3, 
    0x3ddc7b2c, 0x3df58c50, 0x3d73cfcc, 0x3c5cd2bf, 0x3da9e389, 0xbe0748d9, 0xbd8a67d1, 0xbccc8b37, 
    0xb98c999f, 0x3d2f0a9b, 0xbdb8c108, 0x3bc8b09d, 0xbdbf9527, 0xbe03ad7e, 0xbe10841f, 0x3d9be7c3, 
    0xbd87562d, 0xbd79c46c, 0xbcc02088, 0x3d488a2f, 0x3d1924cb, 0x3e2db554, 0x39f4766a, 0xbdd76e27, 
    0xbe3b5574, 0xbde42e0e, 0x3d8a6e30, 0xbdce2729, 0xbd86fb01, 0xbd562dbe, 0xbe1e1d25, 0x3d75cb60, 
    0x3d67798b, 0x3d89546e, 0xbe04ed55, 0xbe280dc8, 0x3e07558c, 0x3d0c606c, 0x3dd07916, 0x3d2a20cd, 
    0xbc521814, 0xbd1d4111, 0xbd93347a, 0xbe12874c, 0x3e10381d, 0x3c29d881, 0x3c0f4fbf, 0xbc618334, 
    0xbe2a6ca6, 0x3dadf3f0, 0xbc0426b8, 0xbe05d653, 0xbe2d0606, 0xbdf8b5a2, 0x3d6571e5, 0xbe363489, 
    0x3e275996, 0xbd030fdc, 0x3d3fdb72, 0x3d8252aa, 0x3e10e4e5, 0xbde4b50e, 0xbe655330, 0x3d836d7b, 
    0x3d3c35f8, 0xbdbdc99c, 0x3df85062, 0x3de8d0e7, 0xbc2d9138, 0x3a526630, 0xbcdbdf36, 0x3dd1fd1a, 
    0xbdf0e1ac, 0xbd79da42, 0xbe52d95a, 0x3e1d7bc2, 0xbd5430fd, 0xbe02a8f4, 0x3d148cd9, 0x3c78b81a, 
    0x3cc1e3ab, 0xbd06f466, 0x3e19da4f, 0x3d9eb159, 0xbe06b02f, 0xbcf1996e, 0xbce1f48d, 0xbe31acce, 
    0x3dd3831e, 0xbda7dd2c, 0xbe0df233, 0x3d27f7a1, 0xbda4015d, 0xbd9e776a, 0x3e003bfe, 0x3cd6bf22, 
    0x3c4d97a7, 0xbdd12a99, 0xbde20814, 0xbd5d7baa, 0xbd391e2f, 0xbe21e0e8, 0x3d0f59f0, 0x3d6f0552, 
    0x3e125ae6, 0xbd8a4222, 0x3d7649d0, 0x3d99ed02, 0x3dd8240f, 0x3d741466, 0xbe1a7e94, 0xbe26ce77, 
    0x3dec3330, 0x3d6c0854, 0x3bf3bc4f, 0xbd722251, 0xbd80b88f, 0x3d9be33e, 0xbd9dd5fa, 0xbd80bae7, 
    0xbda0cfb7, 0x3d00bdc6, 0xbe1201d1, 0x3dfb86dc, 0x3d2923dd, 0xbd49109b, 0x3d659ce0, 0x3e3fa53e, 
    0xbc90c2b1, 0xbbb8a042, 0xbce8638d, 0x3e136387, 0xbe397253, 0xbd1a1ee7, 0xbd2d6156, 0x3e2b27df, 
    0xbdfedd13, 0x3d23ec16, 0x3e0769ac, 0xbdf653d2, 0xbe1ed515, 0xbcd3bd3a, 0xbe1dd8e8, 0xbd99b821, 
    0x3e07d869, 0x3e2d9790, 0x3d653026, 0xbe02faf5, 0x3e3fef5c, 0x3db37ac5, 0xbdc9d8d4, 0x3d11162c, 
    0xbdc46287, 0x3e20df52, 0xbc1419bf, 0xbdd46bb3, 0xbe50529c, 0x3e57852e, 0x3d92fe34, 0xbe01380a, 
    0x3d10acf0, 0x3e055f2b, 0x3aca90ac, 0x3d950611, 0x3db93d39, 0x3e139c04, 0x3cb86345, 0x3dff8d74, 
    0xbdc5af38, 0x3e395a74, 0x3d977520, 0xbd2775e0, 0xbda7bd62, 0xbe0d1d36, 0x3afa82e6, 0x3c876068, 
    0x3d7e487b, 0xbda510e5, 0x3d9cb708, 0x3dea7276, 0xbd1ec8fa, 0x3e02bbef, 0xbdc8c590, 0x3d4549cc, 
    0x3e2105e9, 0xbded7f4f, 0xbdf42b78, 0x3e1bf009, 0xbe3125ab, 0xbe0fd6da, 0x3df4d791, 0xbca0b790, 
    0x3e3554c3, 0x3e06c65d, 0x3dae046b, 0xbd875db0, 0xbe2a1899, 0xbd0ae934, 0x3ceb69b5, 0x3b93a552, 
    0xbd282dec, 0xbda2642a, 0xbdc55091, 0xbc97176b, 0x3d710198, 0xbd031f1b, 0x3e2c6af6, 0x3dc358b4, 
    0x3c3d3aff, 0xbdd4e8f4, 0xbe00faab, 0x3d395f5f, 0xbda3a2b0, 0xbe3cdc89, 0x3dc40a02, 0x3dddb0d2, 
    0xbd65f07f, 0x3c4b14f8, 0x3d3f51c0, 0xbdb573d5, 0x3cb7be1e, 0xbdf75e0a, 0xbc269ca6, 0x3c400315, 
    0x3e64654f, 0xbe02401f, 0x3e037668, 0xbb8ae9cb, 0xbd1d7671, 0x3e1c144e, 0x3da84553, 0x3cc43b35, 
    0x3d94ca74, 0x3d94a356, 0x3d36d391, 0x3cce21a6, 0x3e1594c5, 0x3d987055, 0x3e188c67, 0x3df5bbc2, 
    0x3e023c0e, 0x3dbe1371, 0x3d982fe1, 0xb99f6e8b, 0x3e2da428, 0xbe20d6dc, 0x3d9e07f7, 0x3bfb51e2, 
    0xbda908f2, 0x3e394ece, 0xbd706e27, 0x3e22e9d4, 0xbd96f16c, 0x3d59e13f, 0x3e1a366b, 0xbdeacd45, 
    0xbe3a5a54, 0xbc96d276, 0xbe220b5f, 0xbb5e5773, 0xbdf0d29b, 0xbe18ccab, 0xbcf675fa, 0xbca1d67c, 
    0xbdb87992, 0x3cb00381, 0xbc4e9e15, 0xbe4fc776, 0x3d83a21d, 0x3df58492, 0xbcc00c40, 0x3d946aef, 
    0x3d8410b5, 0x3dd65ded, 0xbe16a99a, 0x3c446106, 0xbe06a159, 0x3dd2b290, 0x3d3360df, 0x3d187eac, 
    0xbe13b306, 0x3e624986, 0xbd77e42f, 0xbd2a6cc5, 0x3e015e5e, 0xbc9e8169, 0x3dca5e3e, 0xbd5dd16d, 
    0x3cea7bea, 0x3c8898f2, 0xbe04db97, 0x3d9ea537, 0x3df2ed7f, 0xbc3c2a36, 0xbd2dedfd, 0xbd01b4d7, 
    0xbe320a75, 0xbe098f6e, 0xbcc97eb0, 0xbe2bd423, 0xbe1594ca, 0xbe2f3c1f, 0x3e0d583a, 0xbdaf0eb3, 
    0xbd8291cd, 0xbe11bca1, 0xbe40c9cc, 0x3e36c21b, 0x3dcb8424, 0xbd9411f4, 0xbcddb190, 0xbe201de4, 
    0x3ce8d91f, 0x3b70910e, 0x3d844e0d, 0x3e101142, 0x3dcc4efc, 0xbe07b6cf, 0x3e1bb736, 0xbce452ef, 
    0x3ddb1c9a, 0xbdb83d56, 0x3d7e7ae9, 0x3dce7734, 0x3d101fef, 0xbdc4d913, 0x3da61593, 0x3de9d0f2, 
    0xbdb0e328, 0xbcaccf59, 0x3cad4efe, 0x3c7bf8f8, 0x3e38f9b0, 0x3c93c37d, 0x3cde7903, 0x3c0236bd, 
    0xbdced52c, 0x3d627ebe, 0xbe2102a0, 0xbe0c4a63, 0x3d07c3ee, 0xbe2b015e, 0xbe3dd2fd, 0x3d02377e, 
    0xbe3082ae, 0xbd9f64b8, 0x3e1cbf9a, 0xbe20ce67, 0xbe3175e2, 0xbd875b1f, 0x3d482138, 0x3d40f271, 
    0x3cd468c6, 0xbdca257b, 0xbdc97bb9, 0x3df17c35, 0x3c8b5de8, 0x3e1d8360, 0x3de66b37, 0x3cfc4664, 
    0xbddb5d27, 0xbbacce00, 0xbdd84a16, 0x3e429593, 0xbdc0994d, 0x3da7116a, 0x3c90c023, 0x3c18d0b8
};

static const uint32_t _K44[] = {
    0x3fcb5123, 0x3ff08b45, 0x40023555, 0x3fd276a3, 0x4020a8fd, 0x3fbff091, 0x3fe1ab0a, 0x3fdb46d4, 
    0x3fe8437a, 0x3fdc47ad, 0x3fdfe72f, 0x3fdd21d7, 0x3fb69859, 0x40011b60, 0x3fb32a94, 0x3fbd27b1, 
    0x3fe72ef9, 0x3fd6f030, 0x400b97ab, 0x3fcfdb51, 0x4003a5b7, 0x3fe6f55c, 0x3fd6e068, 0x3fced1db, 
    0x3fca83ca, 0x40123e28, 0x3fdc82ef, 0x3fde54e4, 0x3fbfe4ef, 0x3fd4bebf, 0x3fe78668, 0x3fc663e8
};

static const uint32_t _K45[] = {
    0x3e64a1b1, 0x3c17e230, 0xbf865e9c, 0xbdbe7204, 0x3ea5be06, 0x3fb1f408, 0xbf8f9f16, 0x3fc9369c, 
    0x3fab73f8, 0xbe7e8464, 0x3edafd42, 0x3e86c1c8, 0xbd4896ec, 0xbe5a9286, 0x3ea031a0, 0x3f912e1d, 
    0xbfa19c2d, 0x3e90e19a, 0xbfac4aff, 0xbf2cb16b, 0x3f683019, 0xbeccb3a6, 0xbf084a6a, 0x3f178456, 
    0x3f80e1b9, 0xbe38362b, 0x3e69e0e0, 0x3e5e690a, 0xbf87d9e1, 0x3ec957f5, 0x3f5e5068, 0x3e8d5a08
};

static const uint32_t _K51[] = {
    0x3e508b15, 0xbe28d748, 0x3e799e63, 0xbea26d5d, 0xbea689cc, 0xbe94e3aa, 0x3ecd8547, 0x3deebc4a, 
    0xbed8e657, 0x3e94e98c, 0x3d9a6c1d, 0xbd7a85c9, 0x3de26641, 0x3ca809f2, 0xbe3b85eb, 0x3dcd11e0, 
    0x3e07231b, 0xbee7278c, 0x3ea8060d, 0xbe12bd1e, 0xbef1cf4d, 0x3b327485, 0x3bb454eb, 0x3e73f1b3, 
    0xbe9c1428, 0x3e06c9b5, 0xbdeb160d, 0x3d9cd8b2, 0x3eb9a2e2, 0x3e9248bc, 0xbe51f7c8, 0x3e2af8a5, 
    0xbe8d4ac3, 0x3d3da4c6, 0x3d18b2e7, 0x3dbf537c, 0x3d86a63a, 0xbe330c4d, 0x3d644fa5, 0x3ea8ed59, 
    0x3db942be, 0xbe4a9de5, 0x3e3c1edd, 0x3e9653ef, 0xbd692146, 0xbe0114c6, 0xbe0be0e5, 0x3ea34686, 
    0x3cc748c3, 0xbda4b789, 0x3e0e05af, 0xbed91cd4, 0xbe1b297d, 0xbec48049, 0xbe0a6677, 0xbe40a443, 
    0xbdee05a8, 0x3edb25ad, 0xbe6f42c8, 0xbe654ac1, 0xbe4ed446, 0xbe188a97, 0xbc86ccbe, 0x3ea8103e
};

static const uint32_t _K53[] = {
    0xbd126234, 0x3d126232
};

// Memory mapped buffers
#define _K11             ((int *)_K11)                       // s32[32] (128 bytes) 
#define _K18             ((float *)_K18)                     // f32[13,3,30] (4680 bytes) 
#define _K19             ((float *)_K19)                     // f32[13] (52 bytes) 
#define _K22             ((float *)_K22)                     // f32[16,3,13] (2496 bytes) 
#define _K24             ((float *)_K24)                     // f32[16] (64 bytes) 
#define _K25             ((float *)_K25)                     // f32[16] (64 bytes) 
#define _K29             ((float *)_K29)                     // f32[16,3,16] (3072 bytes) 
#define _K31             ((float *)_K31)                     // f32[16,3,16] (3072 bytes) 
#define _K33             ((float *)_K33)                     // f32[16] (64 bytes) 
#define _K34             ((float *)_K34)                     // f32[16] (64 bytes) 
#define _K4              ((float *)_K4)                      // f32[512] (2048 bytes) 
#define _K40             ((float *)_K40)                     // f32[32,3,16] (6144 bytes) 
#define _K42             ((float *)_K42)                     // f32[32,3,32] (12288 bytes) 
#define _K44             ((float *)_K44)                     // f32[32] (128 bytes) 
#define _K45             ((float *)_K45)                     // f32[32] (128 bytes) 
#define _K51             ((float *)_K51)                     // f32[2,32] (256 bytes) 
#define _K53             ((float *)_K53)                     // f32[2] (8 bytes) 
#define _K16             ((int8_t *)(_state + 0x000008d0))   // s8[6208] (6208 bytes) 
#define _K3              ((int8_t *)(_state + 0x00000000))   // s8[2256] (2256 bytes) 
#define _K7              ((int *)(_state + 0x00002110))      // s32[24] (96 bytes) 
#define _K8              ((float *)(_state + 0x00002170))    // f32[258] (1032 bytes) 
#define _K10             ((float *)(_buffer + 0x00000000))   // f32[257] (1028 bytes) 
#define _K12             ((float *)(_buffer + 0x00000404))   // f32[30] (120 bytes) 
#define _K13             ((float *)(_buffer + 0x00000000))   // f32[30] (120 bytes) 
#define _K14             ((float *)(_buffer + 0x00000078))   // f32[30] (120 bytes) 
#define _K15             ((float *)(_buffer + 0x00000000))   // f32[50,30] (6000 bytes) 
#define _K2              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K20             ((float *)(_buffer + 0x00001770))   // f32[24,13] (1248 bytes) 
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K23             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K26             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K27             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K28             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K30             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K32             ((float *)(_buffer + 0x00000300))   // f32[12,16] (768 bytes) 
#define _K35             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K36             ((float *)(_buffer + 0x00000000))   // f32[12,16] (768 bytes) 
#define _K38             ((float *)(_buffer + 0x00000300))   // f32[6,16] (384 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[6,32] (768 bytes) 
#define _K41             ((float *)(_buffer + 0x00000300))   // f32[6,32] (768 bytes) 
#define _K43             ((float *)(_buffer + 0x00000300))   // f32[6,32] (768 bytes) 
#define _K46             ((float *)(_buffer + 0x00000000))   // f32[6,32] (768 bytes) 
#define _K47             ((float *)(_buffer + 0x00000000))   // f32[6,32] (768 bytes) 
#define _K49             ((float *)(_buffer + 0x00000300))   // f32[3,32] (384 bytes) 
#define _K5              ((float *)(_buffer + 0x00000800))   // f32[512] (2048 bytes) 
#define _K50             ((float *)(_buffer + 0x00000000))   // f32[32] (128 bytes) 
#define _K52             ((float *)(_buffer + 0x00000080))   // f32[2] (8 bytes) 
#define _K54             ((float *)(_buffer + 0x00000000))   // f32[2] (8 bytes) 
#define _K6              ((float *)(_buffer + 0x00001000))   // f32[257,2] (2056 bytes) 
#define _K9              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 

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
	int input_size;					// Number of bytes in each input chunk
	int window_count;				// Number of input chunks in output window.
} fixwin_t;

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
* @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NODATA (-1) is no data is available.
*/
static inline int fixwin_dequeuef32(void* restrict handle, void* restrict dst, int stride_count)
{
	fixwin_t* fep = (fixwin_t*)handle;

	const int stride_bytes = stride_count * fep->input_size;
	const int size = fep->window_count * fep->input_size;
	if (cbuffer_get_used(&fep->data_buffer) >= size) {
		if (cbuffer_copyto(&fep->data_buffer, dst, size, 0) != 0)
			return IPWIN_RET_NOMEM;

		if (cbuffer_advance(&fep->data_buffer, stride_bytes) != 0)
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
 * @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NOMEM (-2) if internal buffer is out of memory.
 */
static inline int fixwin_enqueuef32(void* restrict handle, const void* restrict data)
{
	fixwin_t* fep = (fixwin_t*)handle;

	if (cbuffer_enqueue(&fep->data_buffer, data, fep->input_size) != 0)
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

static inline void mul_f32(
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
						output[index] = a[index] * b[x * m * r + y * r + z];
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
	
	cbuffer_init(&fep->data_buffer, mem, data_buffer);
}

#define __RETURN_ERROR(_exp) do { int __ret = (_exp); if(__ret < 0) return __ret; } while(0)
#define __RETURN_ERROR_BREAK_EMPTY(_exp) {  int __ret = (_exp); if(__ret == -1) break; if(__ret < 0) return __ret;  } 

int IMAI_dequeue(float *restrict data_out) {    
    while(1) {
        __RETURN_ERROR_BREAK_EMPTY(fixwin_dequeuef32(_K3, _K2, 320));
        hannmul_f32(_K2, _K4, _K5, 512, 1);
        rdft_ndim_f32(_K5, _K6, 1, 512, 1, _K7, _K8, _K9);
        norm_f32(_K6, 1, 2, 257, _K10);
        mel_f32(_K10, _K11, 257, 1, 30, _K12);
        clip_f32(_K12, 30, 0.000316227766016, 3.40282347E+38, _K13);
        loge_f32(_K13, 30, _K14);
        __RETURN_ERROR_BREAK_EMPTY(fixwin_enqueuef32(_K16, _K14));
    }
    __RETURN_ERROR(fixwin_dequeuef32(_K16, _K15, 6));
    conv1d_flat_f32(_K15, _K18, _K20, 0, 1500, 24, 13, 60, 90);
    add_f32(_K20, _K19, 1, 1, 1, 24, 13, _K20);
    conv1d_flat_f32(_K20, _K22, _K21, 0, 312, 12, 16, 26, 39);
    mul_f32(_K21, _K24, 1, 1, 1, 12, 16, _K26);
    add_f32(_K26, _K25, 1, 1, 1, 12, 16, _K23);
    relu_f32(_K23, 192, _K27);
    conv1d_flat_f32(_K27, _K29, _K28, 16, 208, 12, 16, 16, 48);
    conv1d_flat_f32(_K28, _K31, _K30, 16, 208, 12, 16, 16, 48);
    mul_f32(_K30, _K33, 1, 1, 1, 12, 16, _K35);
    add_f32(_K35, _K34, 1, 1, 1, 12, 16, _K32);
    relu_f32(_K32, 192, _K36);
    maxpool1d_valid_f32(_K36, 2, 2, 16, 6, _K38);
    conv1d_flat_f32(_K38, _K40, _K39, 16, 112, 6, 32, 16, 48);
    conv1d_flat_f32(_K39, _K42, _K41, 32, 224, 6, 32, 32, 96);
    mul_f32(_K41, _K44, 1, 1, 1, 6, 32, _K46);
    add_f32(_K46, _K45, 1, 1, 1, 6, 32, _K43);
    relu_f32(_K43, 192, _K47);
    maxpool1d_valid_f32(_K47, 2, 2, 32, 3, _K49);
    globav1d_f32(_K49, 3, 32, _K50);
    dott_f32(_K51, _K50, _K52, 32, 2, 1);
    add_f32(_K52, _K53, 1, 1, 1, 1, 2, _K54);
    softmax_f32(_K54, 2, data_out);
    return 0;
}

int IMAI_enqueue(const float *restrict data_in) {    
    __RETURN_ERROR(fixwin_enqueuef32(_K3, data_in));
    return 0;
}

void IMAI_init(void) {    
    fixwin_initf32(_K3, 4, 512);
    fixwin_initf32(_K16, 120, 50);
}

