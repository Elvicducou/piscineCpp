//
// Created by Victor Ducoulombier on 29/11/2022.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
private :
    bool            _guardgate;
public :
    ScavTrap        ();
    ScavTrap        (ScavTrap const &rhs);
    ScavTrap        (std::string name);
    ScavTrap        &operator=(ScavTrap const &rhs);
    ~ScavTrap       ();

    void            attack(const std::string &target);
    void            guardGate();
};


#endif //CPP_SCAVTRAP_HPP
