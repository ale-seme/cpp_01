#include "Zombie.hpp"

Zombie::Zombie(): _name("Random zombie"){};

Zombie::Zombie(std::string name): _name(name) {}

Zombie::~Zombie(){
    std::cout << _name << " is being destroyed!" << std::endl;
}

void Zombie::announce( void ){
    std::cout << _name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

