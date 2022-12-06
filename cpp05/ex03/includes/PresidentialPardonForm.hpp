//
// Created by Victor Ducoulombier on 06/12/2022.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private :

std::string						_target;
void 							apply() const;

public :

PresidentialPardonForm			();
PresidentialPardonForm			(const PresidentialPardonForm &rhs);
PresidentialPardonForm			(std::string target);
~PresidentialPardonForm			();
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
