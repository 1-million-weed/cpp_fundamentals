#include <iostream>

char const text[] = 
R"R(
^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";

// R"(...)"  can be used when the string
// you want to output does not contain )"
// otherwise your string will end prematurely

int main()
{
     std::cout <<text;
}