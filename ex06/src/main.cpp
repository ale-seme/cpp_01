#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Please give 1 argument among the followings: <DEBUG> <INFO> <WARNING> <ERROR>" << std::endl;
        return (1);
    }
    std::string level = argv[1];
    Harl ale;

    ale.complain(level);
    return (0);




   

    
   
}