#include <iostream>
#include <string>
#include <fstream>

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

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <search> <replace>" << std::endl;
        return (1);
    }
    std::ifstream fin(argv[1], std::ios::in);
    if (!fin.is_open())
    {
        std::cerr << "Opening the file arg[1] failed!" << std::endl;
        return (1);
    }
    std::string file_name = argv[1];
    std::ofstream file_output(file_name + ".replace");
    if (!file_output.is_open())
    {
        std::cerr << "Opening the output file failed!" << std::endl;
        return (1);
    }
    std::string search = argv[2];
    std::string replace = argv[3];
    std::string line;
    while(std::getline(fin, line))
    {
        replaceSubstring(line, search, replace);
        file_output << line;
        if (!fin.eof())
            file_output << std::endl;
    }
    fin.close();
    file_output.close();
    return (0);
}