#include <iostream>

char const text[] = 
R"R(
^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)R";

int main()
{
     std::cout << text << '\n';
}