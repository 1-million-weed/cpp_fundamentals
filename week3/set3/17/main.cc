#include "sum.h"
#include <string>

int main(int argc, char *argv[])
{
    bool dot_check = false;
    for(size_t arg = 1, end = argc; arg != end; ++arg)  // instead of static_cast
    {
        if(string(argv[arg]).find('.') != string :: npos)  // we try to find the dot
        {    
            dot_check = true;
            break;  // we stop the for if we find a dot
        }
    }
    if(dot_check == true)
        sum(argc, argv, 1.0);  // we call the double function
    else
        sum(argc, argv, 1);  // we call the int function
}