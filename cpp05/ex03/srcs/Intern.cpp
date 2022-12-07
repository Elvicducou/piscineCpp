//
// Created by Victor Ducoulombier on 06/12/2022.
//

#include "../includes/Intern.hpp"
#include "../includes/RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "Default constructor called for intern" << std::endl;
	_actions[0].msg = "robotomy request";
	_actions[1].msg = "presidential pardon request";
	_actions[2].msg = "shrubbery creation request";
	_actions[0].fnct = &Intern::getRobotoForm;
	_actions[1].fnct = &Intern::getPresidentialForm;
	_actions[2].fnct = &Intern::getShrubberyForm;
}

Intern::Intern(Intern const &rhs)
{
	*this = rhs;
	std::cout << "Copy constructor called for intern" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs)
{
	for (int i = 0; i < 3; i++)
		this->_actions[i] = rhs._actions[i];
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called for intern" << std::endl;
}

AForm *Intern::getPresidentialForm(std::string target)
{
	PresidentialPardonForm *a = new PresidentialPardonForm(target);
	return (a);
}

AForm *Intern::getRobotoForm(std::string target)
{
	RobotomyRequestForm *a = new RobotomyRequestForm(target);
	return (a);
}

AForm *Intern::getShrubberyForm(std::string target)
{
	ShrubberyCreationForm *a = new ShrubberyCreationForm(target);
	return (a);
}

AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
	AForm *to_return;

	for (int i = 0; i < 3; i++)
	{
		if (!form_name.compare(_actions[i].msg))
		{
			to_return = (this->*(_actions[i].fnct))(form_target);
			std::cout << "Intern creates a " << _actions[i].msg << " targetting " << form_target << std::endl;
			return to_return;
		}
	}
	std::cout << " [INTERN] This form request does not exists" << std::endl;
	return (nullptr);
}