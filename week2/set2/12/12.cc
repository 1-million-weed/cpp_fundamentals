#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) 
{
    string number = argv[1];
    size_t sum = 0;
    for (char c : number)
        sum += c - '0';
    while (sum >= 10)
    {
        size_t new_sum = 0;
        while (sum > 0)
        {
            new_sum += sum % 10;
            sum = sum / 10;
        }
        sum = new_sum;
    }
    if (sum == 3 || sum == 6 || sum == 9)
        cout << "divisible by 3\n";
    else
        cout << "not divisible by 3\n";
}