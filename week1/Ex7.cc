#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) 
{
    cout << "hello " 
         << (argc == 1 ? "world" : (argc == 2 ? argv[1] : argv[stoul(argv[1])])) 
         << endl;
    // to call this program so that it displays the 1st argument without specifing
    // a single character, you use as the first argument 1. This way, no matter
    // how many arguments you have, the argument which will be printed is 1 (the first argument).
}