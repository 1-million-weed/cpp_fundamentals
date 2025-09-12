#include <iostream>

using namespace std;

int main () 
{
    int value;
    cin >> value;
    
    cout << ((value % 2 != 0) ? "odd" : "even") << '\n';    // If the remainder of value divided by 2 is not zero, it is odd.
    cout << ((value & 1) ? "odd" : "even") << '\n';         // The least significant bit of an int determines its parity.  
    cout << (((value / 2) * 2 == value)  ? "even" : "odd") << '\n'; // If the division of the value by two does not equal the value, it is odd.
    cout << ((value ^ 1) == value + 1 ? "even" : "odd") << '\n';     // XOR flips the last bit; if result is value+1, original was even.
    cout << (((value >> 1) << 1) == value ? "even" : "odd") << '\n';  // Right shift removes last bit, left shift adds 0; if equal, was even.
    cout << ((value | 1) == value ? "odd" : "even") << '\n';          // OR with 1 sets last bit; if unchanged, was already odd.

}   