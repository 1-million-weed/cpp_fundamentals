#include "line.h"
#include <iostream>

Line::Line()
:
    pos(string::npos)
{}

bool Line::getLine()
{
    getline(cin, line);
    
    // Find first non-whitespace character
    pos = line.find_first_not_of(" \t");
    
    // Return true if we found non-whitespace characters
    return pos != string::npos;
}

string Line::next()
{
    if (pos == string::npos)
        return "";
    
    // Find the end of current substring (next whitespace or end of string)
    size_t end = line.find_first_of(" \t", pos);
    string result;
    if (end == string::npos)
    {
        // No more whitespace found, take rest of string
        result = line.substr(pos);
        pos = string::npos;  // No more substrings
    }
    else
    {
        // Extract substring up to whitespace
        result = line.substr(pos, end - pos);
        // Find next non-whitespace character
        pos = line.find_first_not_of(" \t", end);
    }
    return result;
}
