#include "main.ih"


int main(int argc, char **argv)
{
    string argument = argv[1]; // get the option from command line
    if (argument == "-c")
        cout << countCharacters() << '\n'; //print the result of countCharacters
    else if (argument == "-w")
        cout << countWords() << '\n'; //print the result of countWords
    else if (argument == "-l")
        cout << countLines() << '\n'; //print the result of countLines


}