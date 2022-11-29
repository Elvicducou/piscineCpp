//
// Created by Victor Ducoulombier on 29/11/2022.
//

#include "../includes/ClapTrap.hpp"


        // Constructors / destructors / operator overload

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "Copy constructor called, based on  " << this->_name << std::endl;
}

ClapTrap::ClapTrap() : _name("base"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Default constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " << this->_name << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_attack_damage = rhs._attack_damage;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    return (*this);
}

        // Member functions

void    ClapTrap::attack(const std::string &target)
{
    if (_hit_points == 0)
        std::cout << _name << " is dead, he can't attack" << std::endl;
    else if (_energy_points > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target
                  << ", causing " << this->_attack_damage << " points of damage! ";
        this->_energy_points--;
        std::cout << this->_energy_points << " energy points remaining" << std::endl;
    }
    else
        std::cout << _name << " has no more energy to attack, must be repaired" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0)
        std::cout << _name << " is already dead" << std::endl;
    else {
        if (!(_hit_points - amount > _hit_points) || _hit_points - amount == 0) {
            std::cout << "ClapTrap " << this->_name << " is taking damage, loosing " << amount << " hit points ! ";
            this->_hit_points -= amount;
            std::cout << this->_hit_points << " hit points remaining" << std::endl;
        }
        else {
            _hit_points = 0;
            std::cout << _name << " is dead after taking damage !" << std::endl;
        }
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points && _energy_points) {
        std::cout << "ClapTrap " << this->_name << " being repaired, gaining " << amount << " hit points ! ";
        _hit_points += amount;
        _energy_points --;
        std::cout << this->_hit_points << " remaining" << std::endl;
    }
    else
        std::cout << _name << " is already dead or have no more energy, can't repair" << std::endl;
}

std::string &ClapTrap::getName(void)
{
    return (this->_name);
}