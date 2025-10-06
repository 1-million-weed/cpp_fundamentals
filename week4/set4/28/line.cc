#include "line.h"
#include <iostream>

Line::Line()
:
    d_pos(std::string::npos)
{}

bool Line::getLine()
{
    std::getline(std::cin, d_line);
    
    // Find first non-whitespace character
    d_pos = d_line.find_first_not_of(" \t");
    
    // Return true if we found non-whitespace characters
    return d_pos != std::string::npos;
}

std::string Line::next()
{
    if (d_pos == std::string::npos)
        return "";
    
    // Find the end of current substring (next whitespace or end of string)
    size_t end = d_line.find_first_of(" \t", d_pos);
    
    std::string result;
    if (end == std::string::npos)
    {
        // No more whitespace found, take rest of string
        result = d_line.substr(d_pos);
        d_pos = std::string::npos;  // No more substrings
    }
    else
    {
        // Extract substring up to whitespace
        result = d_line.substr(d_pos, end - d_pos);
        // Find next non-whitespace character
        d_pos = d_line.find_first_not_of(" \t", end);
    }
    
    return result;
}
