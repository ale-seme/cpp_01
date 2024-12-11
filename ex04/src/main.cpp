#include <iostream>
#include <fstream>
#include "replaceSubstring.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <search> <replace>" << std::endl;
        return (1);
    }
    std::string search = argv[2];
    if (search.empty()) {
        std::cerr << "The search string cannot be empty." << std::endl;
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
    std::string replace = argv[3];
    std::string line;
    
    bool is_empty = true;
	while(std::getline(fin, line))
    {
        is_empty = false;
		replaceSubstring(line, search, replace);
        file_output << line;
        if (!fin.eof())
            file_output << std::endl;
    }
	if (is_empty){
		std::cerr << "Created an empty replace file because the file input is empty" << std::endl;
	}
    fin.close();
    file_output.close();
    return (0);
}