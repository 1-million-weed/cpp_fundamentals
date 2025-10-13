#ifndef LINE_H_
#define LINE_H_

#include <string>
using namespace std;

class Line
{
    string line;
    size_t pos;

public:
    Line();
    bool getLine();
    string next();
};
#endif