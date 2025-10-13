#include "main.h"

bool combine(int argc, char *argv[]) 
{
    int arg1 = stoi(argv[1]);
    if (arg1 >= 1 && arg1 < argc)
    // if the requested argument is within the range of arguments  
        return true;
    else
        return false;
}