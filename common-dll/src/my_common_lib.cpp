#include "my_common_lib.h"
#include <iostream>

bool my_func_a(const char* in_str, char* out_str) {
    std::cout << "in_str: " << in_str << std::endl;
    strcpy(out_str, "output arg is updated.");
    return (strlen(in_str) < 5);
}
