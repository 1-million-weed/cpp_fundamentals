#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
    ++argv; // skip program name as said in the exercise
    --argc; // since we skipped the program name the count of arguments is reduced by 1
    int count = 1;
    for (int i = 0; i < (1 << argc); ++i)  // 1 << argc is same as 2^argc
    {
        cout << count << ": ";
        
        // Check each bit position to determine which arguments to include
        for (int j = 0; j < argc; ++j)
        {
            // If bit j is set in i, include argument j
            if (i & (1 << j))
            {
                cout << argv[j] << " ";
            }
        }

        cout << endl;
        ++count;
    }


}