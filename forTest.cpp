#include "header.h"

int main(){
std::cout << "GIT COURSE START" << std::endl;

std::vector<int> rand_ints;
std::vector<std::string> reset_string;

result j;

j.errors = 0;
j.correct = 0;

std::cout << "LOADING";
for (size_t i = 0; i < 30; i++)
{
    rand_ints.push_back(rand()%100);
    
    if(rand_ints[i]%2)
    std::cout << "...";
}
std::cout << "COMPLETE!" << std::endl;


for (auto i : rand_ints)
{
    std::cout << i << std::endl;
    if(i%2){
    std::cout << "Find error. Check log: line"<< (i+rand()%10) << std::endl;
    ++j.errors;
    }
    else
    ++j.correct;
}

std::cout << "RESULT: Erros find " << j.errors <<'\t'<< "Correct files: "<<j.correct << std::endl;

reset_string.push_back("Here is the strating point for git reset");
reset_string.push_back("Let's test Git reset --soft HEAD");
reset_string.push_back("Let's test Git reset --mixed HEAD");
reset_string.push_back("Let's test Git reset --mixed HARD");

std::cout << '\n' << "TESTING CHECKOUT" << std::endl;

for(auto i: reset_string)
std::cout << i << std::endl;

std::string text ="GIT CHECKOUT TEST OK";
std::string text2 ="TEST GIT REMOTE SSH CONNECT";

foo(text, 7);
foo(text2,5);


type_name(j);

//finish_message();

return 0;
}