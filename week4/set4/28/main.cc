#include "line.h"
#include <iostream>

int main()
{
    Line line;
    
    while (line.getLine())
    {
        std::string word;
        while (!(word = line.next()).empty())
        {
            std::cout << word << '\n';
        }
    }
    
    return 0;
}