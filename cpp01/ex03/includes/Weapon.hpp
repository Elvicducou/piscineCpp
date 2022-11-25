//
// Created by Victor Ducoulombier on 25/11/2022.
//

#ifndef CPP_WEAPON_H
#define CPP_WEAPON_H
# include <iostream>


class Weapon {
private :
    std::string             _type;
public :
    std::string  const   &  getType();
    void                    setType(std::string type);
    Weapon                  (std::string type);
    Weapon                  ();
};


#endif //CPP_WEAPON_H
