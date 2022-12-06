//
// Created by Victor Ducoulombier on 06/12/2022.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP
#include "AForm.hpp"

class Intern {
public :

Intern	();
Intern	(Intern const &rhs);
Intern	&operator=(Intern const &rhs);
~Intern	();
AForm	*makeForm(std::string form_name, std::string form_target);
};


#endif //CPP_INTERN_HPP
