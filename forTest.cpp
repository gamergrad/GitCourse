#include <iostream>
#include <vector>
#include "header.h"

int main(){
std::cout << "Hello world" << std::endl;

std::vector<int> rand_ints;

sektor j;
int YES;

j.begin = 10;
j.end = 20;

for (size_t i = 0; i < 30; i++)
{
    rand_ints.push_back(rand()%100);
    
    if(rand_ints[i]%2)
    std::cout << "==============NO NO NO======================" << std::endl;
}

for (auto i : rand_ints)
{
    std::cout << i << std::endl;
    if(i%2)
    std::cout << "====================YES YES YES==============" << std::endl;
}

std::cout << j.begin <<'\t'<< j.end;

return 0;
}