#include "replaceSubstring.hpp"

void    replaceSubstring(std::string& str, const std::string& from, const std::string& to)
{   
    size_t pos = 0;
    while((pos = str.find(from)) != std::string::npos)
    {
        str.erase(pos, from.length());
        str.insert(pos, to);
        pos += to.length();
    }
}