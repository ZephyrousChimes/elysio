//
// Created by kronos on 7/20/25.
//

#pragma once

#if defined(_WIN32) || defined(_WIN64)
    #define EL_PLATFORM_WINDOWS
#elif defined(__linux__)
    #define EL_PLATFORM_LINUX
#else
    #error "Unsupported platform: Only Windows and Linux are supported"
#endif

#ifdef EL_PLATFORM_WINDOWS
    #ifdef EL_BUILD_DLL
        #define EL_API __declspec(dllexport)
    #else
        #define EL_API __declspec(dllimport)
    #endif
#elif defined(EL_PLATFORM_LINUX)
    #define EL_API __attribute__((visibility("default")))
#else
    #define EL_API
#endif