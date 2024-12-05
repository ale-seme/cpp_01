#include "Zombie.hpp"

void    test_function(Zombie *Zombies, int n_zombies)
{
    
    std::cout << n_zombies << std::endl;
    for(int i = 0; i < n_zombies; i++)
    {
        Zombies[i].announce();
    }
    std::cout << "Announcement from separate test funciton was successfull" << std::endl;
}

int main(void)
{

    try{
    int n_zombies = 5;
    Zombie *Zombies = zombieHorde(n_zombies, "ARGHHH");
    test_function(Zombies, n_zombies);
    delete[](Zombies);
    }
    catch (const std::bad_alloc& e){
        std::cerr << "Failed to allocate memory for zombieHorde. Error:" << e.what() << std::endl;
        return 1;
    }
    return (0);
}