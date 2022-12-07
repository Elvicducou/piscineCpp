//
// Created by Victor Ducoulombier on 06/12/2022.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public :

Intern	();
Intern	(Intern const &rhs);
Intern	&operator=(Intern const &rhs);
~Intern	();
AForm	*makeForm(std::string form_name, std::string form_target);

private :

AForm		*getRobotoForm(std::string target);
AForm		*getPresidentialForm(std::string target);
AForm		*getShrubberyForm(std::string target);
typedef struct s_actions {
	AForm 				*(Intern::*fnct)(std::string target);
	std::string 		msg;
}	t_actions;

t_actions	_actions[3];
};


#endif //CPP_INTERN_HPP
