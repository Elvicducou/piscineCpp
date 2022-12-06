
#ifndef HPP_SHURBBERRYCREATIONFORM_HPP
# define HPP_SHURBBERRYCREATIONFORM_HPP
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private :

std::string						_target;
void 							apply() const;

public :

ShrubberyCreationForm			();
ShrubberyCreationForm			(const ShrubberyCreationForm &rhs);
ShrubberyCreationForm			(std::string target);
~ShrubberyCreationForm			();
};

#endif