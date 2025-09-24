#include "sum.h"

void sum(int argc, char *argv[]) 
{
    double total = 0;
    for (int arg = 1; arg < argc; ++arg) 
        total += stod(argv[arg]);  // sum up the arguments after conversion to double
    cout <<"Sum of soubles: "<< total << "\n";
}