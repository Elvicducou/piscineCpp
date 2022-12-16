
#ifndef CPP_INPUT_HPP
# define CPP_INPUT_HPP
#include "project.h"

class Input
{

public:
	Input			();
	Input			(Input const &rhs);
	Input			&operator=(Input const &rhs);
	~Input			();
	bool			is_str;
	int 			type;
};

#endif