#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main(int argc, char* argv[])
{
    // convert the octets into an unsigned value and combine them into a single 32-bit value
    size_t ip4 = (stoul(argv[1]) << 24) | (stoul(argv[2]) << 16) | (stoul(argv[3]) << 8) | stoul(argv[4]);
    // initialise all bits of the mask to 1
    size_t mask = ~0UL;
    size_t netmask = stoul(argv[5]);
    // shift left to keep the upper netmask bits
    mask <<= (32 - netmask);
    // zero out the bits
    ip4 &= mask;
    // print the network addres in the dotted format
    cout << (ip4 >> 24) << "." 
         << (ip4 >> 16 & 0xFF) << "." 
         << (ip4 >> 8 & 0xFF) << "." 
         << (ip4 & 0xFF) << "\n";
}