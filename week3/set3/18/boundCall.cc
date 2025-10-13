#include "main.h"

void boundCall(int argc, char *argv[]) 
{
    if (combine(argc, argv)) 
    {
        int arg1 = stoi(argv[1]);
        cout << "Requested argument " << arg1 << ": " << argv[arg1] << "\n";
    }
}
