#include "my_common_lib.h"
#include <iostream>

bool my_func_a(const char* in_str, char* out_str) {
    std::cout << "in_str: " << in_str << std::endl;
    strcpy(out_str, "日本語(とASCII)を含む文字列");
    return (strlen(in_str) < 5);
}
