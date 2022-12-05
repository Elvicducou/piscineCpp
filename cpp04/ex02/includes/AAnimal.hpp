//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
# include <iostream>


class AAnimal {
protected:
    std::string     type;
public :
    AAnimal          ();
    AAnimal          (std::string type);
    virtual AAnimal  &operator=(AAnimal const &rhs);
    virtual ~AAnimal ();
    virtual void        makeSound() const;
    std::string     getType(void) const;
    virtual void    print_my_ideas(void) = 0;
};


#endif //CPP_ANIMAL_HPP
