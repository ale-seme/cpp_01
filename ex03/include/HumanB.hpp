#ifndef HUMANB_HPP
#define HUMAN_HPP
#include "Weapon.hpp"

class HumanB{

    private:
    std::string _name;
    Weapon* _currentWeapon;

    public:
    HumanB(const std::string& name);
    HumanB(const std::string& name, Weapon& weapon);
    void setWeapon(Weapon& weapon);
    void attack();
};


#endif