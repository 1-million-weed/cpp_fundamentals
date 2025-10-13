#include "sum.h"

void sum(size_t argc, char *argv[], int dummy) 
{
    int total = 0;
    for (size_t arg = 1; arg < argc; ++arg) 
        total += stoi(argv[arg]);  // sum up the arguments after conversion to int
    cout <<"Sum of int: "<< total << "\n";
}