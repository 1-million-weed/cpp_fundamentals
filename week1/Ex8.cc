#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main(int argc, char* argv[])
{
    size_t ip4 = (stoul(argv[1]) << 24) | (stoul(argv[2]) << 16) | (stoul(argv[3]) << 8) | stoul(argv[4]);
    size_t mask = ~0UL;
    size_t netmask = stoul(argv[5]);
    mask <<= (32 - netmask);
    ip4 &= mask;
    cout << (ip4 >> 24) << "." 
         << (ip4 >> 16 & 0xFF) << "." 
         << (ip4 >> 8 & 0xFF) << "." 
         << (ip4 & 0xFF) << "\n";
}
