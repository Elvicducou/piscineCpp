//
// Created by Victor Ducoulombier on 29/11/2022.
//

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _guardgate(false)
{
    this->_name = name;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    this->_hit_points = 10;
    std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
    *this = rhs;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap() : _guardgate(false)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_attack_damage = rhs._attack_damage;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    return (*this);
}


void     ScavTrap::attack(const std::string &target)
{
    if (_hit_points == 0)
        std::cout << "Scavtrap " << _name << " is dead, he can't attack" << std::endl;
    else if (_energy_points > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target
                  << ", causing " << this->_attack_damage << " points of damage! ";
        this->_energy_points--;
        std::cout << this->_energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << "Scavtrap " << _name << " has no more energy to attack, must be repaired" << std::endl;
}

void ScavTrap::guardGate() {
    if (_guardgate)
        _guardgate = false;
    else
        _guardgate = true;
    if (_guardgate)
        std::cout << "Guardgate for Scavtrap " << _name << " is now active"<< std::endl;
    else
        std::cout << "Guardgate for Scavtrap " << _name << " is now disabled"<< std::endl;
}