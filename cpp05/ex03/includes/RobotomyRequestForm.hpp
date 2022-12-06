//
// Created by Victor Ducoulombier on 06/12/2022.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private :

std::string						_target;
void 							apply() const;

public :

RobotomyRequestForm			();
RobotomyRequestForm			(const RobotomyRequestForm &rhs);
RobotomyRequestForm			(std::string target);
~RobotomyRequestForm		();
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
