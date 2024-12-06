#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) 
: _name(name), _currentWeapon(weapon) {}

void HumanA::attack(){
    std::cout << _name << " attacks with their " 
    << _currentWeapon.getType() << std::endl;
}