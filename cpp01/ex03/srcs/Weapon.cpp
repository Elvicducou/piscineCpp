//
// Created by Victor Ducoulombier on 25/11/2022.
//

#include "../includes/Weapon.hpp"

const std::string &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::Weapon()
{

}