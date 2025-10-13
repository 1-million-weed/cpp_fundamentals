#include "main.h"

bool structCall(int argc, char *argv[]) 
{
    ReturnValues result;
    result.ok = combine(argc, argv);
    if (!result.ok) 
    {
        cout << "The requested argument does not exist\n";
        return false;   // stop the function and return false if there are no arguments 
    }
    result.nr = stoi(argv[1]);
    result.value = argv[result.nr];
    cout << "Requested argument " << result.nr << ": " << result.value << "\n";
    return true;
}