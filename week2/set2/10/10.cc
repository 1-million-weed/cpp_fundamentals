#include <iostream>
#include <string>
using namespace std;

int main() {
string s = " ";
string str;
cin >> str;
if (str[0] == s[0])                       //remove the first and last char
  str.erase(0);                           //from the string if it is white
if (str[str.size()] == s[0])              //space by comparing it to the 
  str.erase(str.size());                  //string containing only a space.
cout << "`" << str << "'" << "\n";  
}