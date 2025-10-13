#include <iostream>
#include <bitset>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) 
{
    int value = atoi(argv[1]);
    unsigned int bits = static_cast<unsigned int>(value);

    bitset<32> binary(bits);
    cout << value << " = " << binary.to_string() << " = ";
    bool first = true;
    for (int i = 31; i >= 0; --i) 
    {
        if (binary[i]) 
        {
            if (first == false)
                cout << " + ";
            if (i == 31 && value < 0)
                cout << "-2147483648"; // 2^31
            else
                cout << to_string(1 << i);
            first = false;
        }
    }
    cout << "\n";
}
