#include <iostream>
#include <vector>

int main(){
std::cout << "Hello world" << std::endl;

std::vector<int> rand_ints;

for (size_t i = 0; i < 300; i++)
{
    rand_ints.push_back(rand()%100);
}

for (auto i : rand_ints)
{
    std::cout << i << std::endl;
}


return 0;
}