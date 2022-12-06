#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
_target("default")
{
	std::cout << "Defaul constructor for ShrubberyCreationForm called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) :
_target(rhs._target)
{
	*this = rhs;
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Assigned constructor for ShrubberyCreationForm called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default destructor for ShrubberyCreationForm called" << std::endl;
	return ;
}

void ShrubberyCreationForm::apply(void) const
{
	std::ofstream new_file (_target + "_shrubbery");
	if (new_file.is_open())
	{
		new_file << "               ,@@@@@@@," << std::endl;
		new_file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		new_file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		new_file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		new_file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		new_file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		new_file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		new_file << "       |o|        | |         | |" << std::endl;
		new_file << "       |.|        | |         | |" << std::endl;
		new_file << "     \\/ ._\\//_/__/  ,\\_ //__\\/.  \\_//__/_" << std::endl;
		new_file << "                                     Banskbit" << std::endl;
	}
}