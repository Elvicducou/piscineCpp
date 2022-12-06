//
// Created by Victor Ducoulombier on 06/12/2022.
//

#include "../includes/Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor called for intern" << std::endl;
}

Intern::Intern(Intern const &rhs)
{
	*this = rhs;
	std::cout << "Copy constructor called for intern" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs)
{
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called for intern" << std::endl;
}

AForm *Intern::makeForm(std::string form_name, std::string form_targe)
{
	
}