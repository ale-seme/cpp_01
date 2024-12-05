#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie freshGuy(name);
    freshGuy.announce();
}