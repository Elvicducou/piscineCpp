//
// Created by Victor Ducoulombier on 02/12/2022.
//

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP
#include <iostream>

class Brain {
private :
    std::string     get_my_idea(void);
public :
	Brain          ();
    Brain          (std::string type);
    Brain          &operator=(Brain const &rhs);
    ~Brain         ();
    std::string	   ideas[100];
};


#endif //CPP_BRAIN_HPP
