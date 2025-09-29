#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <iostream>
using namespace std;

struct ReturnValues 
{
    bool ok;
    size_t nr;
    std::string value;
};
bool combine(int argc, char *argv[]);
bool structCall(int argc, char *argv[]);
void boundCall(int argc, char *argv[]);

#endif