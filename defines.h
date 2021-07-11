#ifndef DEFINES_H
#define DEFINES_H


//#define USE_CRYPTOPP
#ifndef USE_CRYPTOPP
    //#define USE_PYTHON_CRYPTO
#endif













//                               sanity checks

#ifdef USE_CRYPTOPP
    #ifdef USE_PYTHON_CRYPTO
        Can_not_use_both_python_crypto_and_cryptopp;
    #endif
#endif
#ifndef USE_CRYPTOPP
    #ifndef USE_PYTHON_CRYPTO
        //Have_to_use_either_python_crypto_or_cryptopp;
    #endif
#endif
#endif // DEFINES_H
