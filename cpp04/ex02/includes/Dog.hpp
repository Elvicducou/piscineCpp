//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

public :
    Dog          ();
    Dog          (std::string type);
    Dog          &operator=(Dog const &rhs);
    ~Dog         ();
    void         print_my_ideas(void);
private :
    Brain        *ownbrain;
};


#endif //CPP_DOG_HPP
