#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name) {}

HumanB::HumanB(const std::string& name, Weapon& weapon) : _name(name), _currentWeapon(weapon) {}

void HumanB::attack(){
    
}