//
// Created by Victor Ducoulombier on 25/11/2022.
//

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private :
    Weapon*          _weapon;
    std::string     _name;
public :
    HumanB          (std::string name);
    ~HumanB         ();
    void            attack();
    void            setWeapon(Weapon& weapon);
};


#endif //CPP_HUMANB_HPP
