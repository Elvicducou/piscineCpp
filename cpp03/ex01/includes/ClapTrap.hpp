//
// Created by Victor Ducoulombier on 29/11/2022.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected :
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;
    static   int    clap_count;

public :
    ClapTrap        ();
    ClapTrap        (std::string name);
    ClapTrap        (ClapTrap const &rhs);
    ClapTrap        &operator=(ClapTrap const &rhs);
    ~ClapTrap       ();
    void            attack(const std::string& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    std::string     &getName(void);
};


#endif //CPP_CLAPTRAP_HPP
