#include <string>
#include <string.h>
#include <iostream>

#define hw ("Hello, World!")

using namespace std;

std::string greet = hw;


int main(int argc, char *argv[])
{
    printf("%s\n", std::string_view(hw).data());
}