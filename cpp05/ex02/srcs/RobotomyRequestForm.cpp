#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
_target("default")
{
	std::cout << "Defaul constructor for RobotomyRequestForm called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) :
_target(rhs._target)
{
	*this = rhs;
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Assigned constructor for RobotomyRequestForm called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default destructor for RobotomyRequestForm called" << std::endl;
	return ;
}

void RobotomyRequestForm::apply(void) const
{
	static int value;
	std::cout << "BRAAAAAAAAAAAAAAAAAAABRAAAAAAAAAAAAVROUUUUUUUUM" << std::endl;
	if (value % 2)
		std::cout << _target << " have been lobotomized" << std::endl;
	else
		std::cout << _target << " have not been lobotomized, too bad !" << std::endl;
	value++;
}