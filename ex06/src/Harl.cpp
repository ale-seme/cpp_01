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

void Harl::complain(Level level){

    switch(level){
        case DEBUG:
           debug();
           /* fall through */
        case INFO:
            info();
            /* fall through */
        case WARNING:
            warning();
            /* fall through */
        case ERROR:
            error();
            break;
        default:
            std::cout << "[ Probably complaning about insignificant problems ]" <<  std::endl;
    }

}