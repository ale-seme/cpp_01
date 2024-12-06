#ifndef HUMANB_HPP
#define HUMAN_HPP

#include "Weapon.hpp"
class HumanB{

    private:
    Weapon _currentWeapon;
    std::string _name;

    public:
    HumanB(const std::string& name);
    HumanB(const std::string& name, Weapon& weapon);
    void attack();
};


#endif