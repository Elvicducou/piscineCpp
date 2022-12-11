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
	this->is_str = rhs.is_str;
	*this = rhs;
}

Input::Input () : is_str(false)
{
	return ;
}