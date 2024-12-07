#include "Harl.hpp"


void Harl::debug( void ){
    std::cout << "[DEBUG]: I love having extra bacon for"
    << "my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
    std::cout << "[INFO]: Cannot believe adding extra bacon costs more!" << std::endl;
}

void Harl::warning (void ){
    std::cout << "[WARNING]: I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error ( void ){
    std::cout << "[ERROR]: This is unacceptable!" << std::endl;
}

void Harl::complain( std::string level ){

std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
typedef void (Harl::*HarlFn)();//just not to have to repeat all the time so it's a member funciton pointer

HarlFn functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; //array of member funciton pointers
for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "IDKKKK" << std::endl;
}