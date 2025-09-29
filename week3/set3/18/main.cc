#include "main.h"

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        cout << "The program was run with no arguments. Usage: ./[program name] [arg1] [arg2] ...\n";
        return 1;
    }

    if (!structCall(argc, argv))
        return 1;  // we terminate the program if the function returns false

    boundCall(argc, argv);
    return 0;
}