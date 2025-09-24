#include "sum.h"
#include <string>

int main(int argc, char *argv[])
{
    for(size_t arg = 1, end = argc; arg != end; ++arg)  // instead of static_cast
    {
        if(string(argv[arg]).find('.') != string :: npos)
            sum(argc, argv);
        else
            sum(argc, argv);
    }
}