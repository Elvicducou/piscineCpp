//
// Created by Victor Ducoulombier on 29/11/2022.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public :
    FragTrap            ();
    FragTrap            (std::string name);
    FragTrap            (FragTrap const &rhs);
    FragTrap            &operator=(FragTrap const &rhs);
    ~FragTrap           ();

public :
    void                highFivesGuys(void);
};


#endif //CPP_FRAGTRAP_HPP
