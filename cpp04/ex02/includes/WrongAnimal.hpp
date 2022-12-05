//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
    std::string     type;
public :
    WrongAnimal          ();
    WrongAnimal          (std::string type);
    WrongAnimal          &operator=(WrongAnimal const &rhs);
    ~WrongAnimal         ();
    void                makeSound() const;
    std::string         getType(void) const;
};


#endif //CPP_WRONGANIMAL_HPP
