#include <iostream>

int main() {
    size_t countA = 0, countE = 0, countI = 0;
    char ch;
    while (std::cin.get(ch)) 
    {
        if (ch == 'a' || ch == 'A') 
            ++countA;
        else if (ch == 'e' || ch == 'E') 
            ++countE;
        else if (ch == 'i' || ch == 'I')
            ++countI;
    }
    std::cout << "# a-chars: " << countA
              << ", # e-chars: " << countE
              << ", # i-chars: " << countI << std::endl;
}