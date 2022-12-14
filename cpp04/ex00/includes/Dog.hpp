//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {

public :
    Dog          ();
    Dog          (std::string type);
    Dog          &operator=(Dog const &rhs);
    ~Dog         ();
    virtual void  makeSound() const;
};


#endif //CPP_DOG_HPP
