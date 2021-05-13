#include <iostream>
#include <vector>
#include "header.h"

int main(){
std::cout << "Hello world" << std::endl;

std::vector<int> rand_ints;

sektor j;

j.begin = 10;
j.end = 20;

for (size_t i = 0; i < 300; i++)
{
    rand_ints.push_back(rand()%100);
}

for (auto i : rand_ints)
{
    std::cout << i << std::endl;
}

std::cout << j.begin <<'\t'<< j.end;

return 0;
}