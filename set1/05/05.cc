#include <iostream>

int main() 
{
    std::cout << "Hello\cWorld\n"; // This will give a compiler warning because we are demonstrating the use of an unknown escape sequence.
}