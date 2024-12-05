#include "Zombie.hpp"

void    test_function(Zombie *test_zombie)
{
    
    test_zombie->announce();
    std::cout << "Announcement from separate test funciton was successfull" << std::endl;
}

int main(void)
{

    try{
    Zombie *Zombie_01 = newZombie("kamila");
    Zombie_01->announce();
    test_function(Zombie_01);
    delete(Zombie_01);
    }
    catch (const std::bad_alloc& e){
        std::cerr << "Failed to allocate memory for a Zombie. Error:" << e.what() << std::endl;
        return 1;
    }
    randomChump("Fra");
    return (0);
}