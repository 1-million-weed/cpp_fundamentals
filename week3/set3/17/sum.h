#ifndef SUM_H
#define SUM_H

#include <iostream>
using namespace std;

void sum(size_t argc, char *argv[], int dummy);  // function1.cc - Sum for integral values
void sum(size_t argc, char *argv[], double dummy);  // function2.cc - Sum for double values
// dummys data type helps the compiler know which function to choose because we overload
#endif