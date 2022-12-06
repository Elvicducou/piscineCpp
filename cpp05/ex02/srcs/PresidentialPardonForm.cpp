#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
_target("default")
{
	std::cout << "Defaul constructor for PresidentialPardonForm called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) :
_target(rhs._target)
{
	*this = rhs;
	std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("PresidentialPardonForm", 25, 15), _target(target)
{
	std::cout << "Assigned constructor for PresidentialPardonForm called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default destructor for PresidentialPardonForm called" << std::endl;
	return ;
}


void PresidentialPardonForm::apply(void) const
{
	std::cout << _target << " have been pardoned by Zaphod Beeblebrox" << std::endl;
}