#ifndef PROJECT_H
# define PROJECT_H

# include <iostream>
# include <iomanip>
# include "input.hpp"

#define INT 5
#define FLOAT 6
#define DOUBLE 7
#define CHAR 8
#define INVALID 9
#define STR 10
#define LONG 11

bool	check_type(char *arg, Input *input);
void 	print_type(char *arg, Input *input);
#endif