#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>

struct result {
    int errors, correct;
};

void foo(const std::string& str, unsigned int n ){
    for (size_t i = 0; i < n; i++)
    {
        std::cout << str <<std::endl;
    } 
}

template<class T>
void type_name(const T& value){
    const T* p_value = &value;
    std::cout << '\n' << "Entered value type is " << typeid(*p_value).name() << '\n';
}