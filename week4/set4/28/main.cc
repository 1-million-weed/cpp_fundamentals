#include "line.h"
#include <iostream>

int main()
{
    Line line;
    while (line.getLine())
    {
        string word;
        while (!(word = line.next()).empty())
            cout << word << '\n';
    }
}