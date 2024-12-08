#include "Harl.hpp"

Harl::Level parse_argument(std::string input){
    if (input == "DEBUG")
        return Harl::DEBUG;
    if (input == "INFO")
        return Harl::INFO;
    if (input == "WARNING")
        return Harl::WARNING;
    if (input == "ERROR")
        return Harl::ERROR;
    throw(std::invalid_argument("Invalid level"));
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Please give 1 argument among the followings: <DEBUG> <INFO> <WARNING> <ERROR>" << std::endl;
        return (1);
    }
    try{
    std::string input = argv[1];
    Harl::Level level = parse_argument(input);
    Harl bot;
    bot.complain(level);
    }
    catch (const std::invalid_argument& e){
        std::cout << "[ Probably complaining about insignificant problems ]: " << e.what() << std::endl;
    }
    return (0);
}