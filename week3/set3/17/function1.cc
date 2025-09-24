#include "sum.h"

void sum(int argc, char *argv[]) 
{
    int total = 0;
    for (int arg = 1; arg < argc; ++arg) 
        total += stoi(argv[arg]);  // sum up the arguments after conversion to int
    cout <<"Sum of int: "<< total << "\n";
}