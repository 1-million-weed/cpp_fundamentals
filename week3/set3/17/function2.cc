#include "sum.h"

void sum(size_t argc, char *argv[], double dummy) 
{
    double total = 0;
    for (size_t arg = 1; arg < argc; ++arg) 
        total += stod(argv[arg]);  // sum up the arguments after conversion to double
    cout <<"Sum of doubles: "<< total << "\n";
}