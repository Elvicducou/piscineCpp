//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public :
    WrongCat          ();
    WrongCat          (std::string type);
    WrongCat          &operator=(WrongCat const &rhs);
    ~WrongCat         ();

};


#endif //CPP_WRONGCAT_HPP
