#pragma once

#include <string>

struct sektor {
    int begin, end;
};

void foo(const std::string& str, unsigned int n ){
    for (size_t i = 0; i < n; i++)
    {
        std::cout << str <<std::endl;
    } 
}