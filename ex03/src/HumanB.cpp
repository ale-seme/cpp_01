#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) 
: _name(name), _currentWeapon(nullptr) {}

HumanB::HumanB(const std::string& name, Weapon& weapon) 
: _name(name), _currentWeapon(&weapon) {}

void HumanB::setWeapon(Weapon& weapon){
    _currentWeapon = &weapon;
}

void HumanB::attack(){
if (!_currentWeapon)
{
    std::cout << _name << " has no weapon to attack with!" << std::endl;
}
else
    std::cout << _name << " attacks with their " << _currentWeapon->getType() << std::endl;
}