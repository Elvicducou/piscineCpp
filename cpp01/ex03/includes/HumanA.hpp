//
// Created by Victor Ducoulombier on 25/11/2022.
//

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include "Weapon.hpp"


class HumanA {
private :
    Weapon&         _weapon;
    std::string     _name;
public :
    HumanA          (std::string name, Weapon& weapon);
    ~HumanA         ();
    void            attack();
};


#endif //CPP_HUMANA_HPP
