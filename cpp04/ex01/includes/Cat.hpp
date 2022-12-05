//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal {
public :
    Cat          ();
    Cat          (std::string type);
    Cat          &operator=(Cat const &rhs);
    ~Cat();
    void         print_my_ideas(void);
private:
    Brain        *ownbrain;
};


#endif //CPP_CAT_HPP
