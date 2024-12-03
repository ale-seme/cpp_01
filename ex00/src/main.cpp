#include "Zombie.hpp"

int main(void)
{

    Zombie *Zombie_01 = newZombie("kamila");
    Zombie_01->announce();
    delete(Zombie_01);

    randomChump("Fra");
}