//
// Created by Victor Ducoulombier on 29/11/2022.
//

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_attack_damage = 30;
    this->_energy_points = 100;
    std::cout << "Fragtrap constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
    *this = rhs;
    std::cout << "Fragtrap copy constructor called, based on  " << this->_name << std::endl;
}

FragTrap::FragTrap()
{
    this->_name = "base";
    this->_hit_points = 100;
    this->_attack_damage = 30;
    this->_energy_points = 100;
    std::cout << "Fragtrap default constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called for " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_attack_damage = rhs._attack_damage;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    return (*this);
}


void FragTrap::highFivesGuys()
{
    if (_hit_points)
        std::cout << this->_name << " asks for a high five !" << std::endl;
    else
        std::cout << this->_name << " is dead, can't high five !" << std::endl;
}