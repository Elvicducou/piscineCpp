#include "../includes/project.h"

Input &Input::operator=(Input const &rhs)
{
	if (&rhs == this)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

Input::Input(Input const &rhs)
{
	*this = rhs;
}