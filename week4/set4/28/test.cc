#include "line.h"
#include <iostream>

int main()
{
    Line line;
    
    std::cout << "Enter lines (Ctrl+D to end):\n";
    
    while (line.getLine())
    {
        std::cout << "Line contains non-whitespace characters.\n";
        std::cout << "Substrings: ";
        
        std::string substring;
        while (!(substring = line.next()).empty())
        {
            std::cout << "[" << substring << "] ";
        }
        std::cout << "\n\n";
    }
    
    std::cout << "Empty line or end of input.\n";
    return 0;
}