//
// Created by Victor Ducoulombier on 25/11/2022.
//

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name)
{
    std::cout << "constructor called for " << this->_name << ", armed with " <<
    this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their "
        << this->_weapon.getType() << std::endl;
}