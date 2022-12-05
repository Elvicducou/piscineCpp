//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
# include <iostream>


class Animal {
protected:
    std::string     type;
public :
    Animal          ();
    Animal          (std::string type);
    virtual Animal  &operator=(Animal const &rhs);
    virtual ~Animal ();
    void            makeSound() const;
    std::string     getType(void) const;
};


#endif //CPP_ANIMAL_HPP
