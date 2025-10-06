#ifndef LINE_H
#define LINE_H

#include <string>

class Line
{
    std::string d_line;
    size_t d_pos;

public:
    Line();
    bool getLine();
    std::string next();
};

#endif