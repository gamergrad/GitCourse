#include <iostream>
#include <vector>
#include "header.h"

int main(){
std::cout << "Hello world" << std::endl;

std::vector<int> rand_ints;
std::vector<std::string> reset_string;

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

std::cout << j.begin <<'\t'<< j.end << std::endl;

reset_string.push_back("Here is the strating point for git reset");
reset_string.push_back("Let's test Git reset --soft HEAD");
reset_string.push_back("Let's test Git reset --mixed HEAD");

for(auto i: reset_string)
std::cout << i << std::endl;


return 0;
}