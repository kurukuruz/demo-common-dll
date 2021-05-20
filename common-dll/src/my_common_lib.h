#ifndef MY_COMMON_FUNC_H
#define MY_COMMON_FUNC_H

#ifdef EXPORTING_MY_COMMON_FUNC
#define MY_COMMON_FUNC_DECL_KWD __declspec(dllexport)
#else
#define MY_COMMON_FUNC_DECL_KWD __declspec(dllimport)
#endif

extern "C" MY_COMMON_FUNC_DECL_KWD bool __stdcall my_func_a(
    const char* in_str,
    char* out_str
);

#endif