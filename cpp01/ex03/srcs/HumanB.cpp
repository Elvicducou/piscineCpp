//
// Created by Victor Ducoulombier on 25/11/2022.
//

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << "Constructor called for HumanB " << _name << std::endl;
    this->_name = name;
}

HumanB::~HumanB()
{
    std::cout << "Destructor called for HumanB " << _name << std::endl;
}

void    HumanB::attack()
{
    if (_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << "(HumanB) no weapon, no war" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}