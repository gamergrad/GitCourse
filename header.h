#pragma once

#include <string>

struct result {
    int errors, correct;
};

void foo(const std::string& str, unsigned int n ){
    for (size_t i = 0; i < n; i++)
    {
        std::cout << str <<std::endl;
    } 
}