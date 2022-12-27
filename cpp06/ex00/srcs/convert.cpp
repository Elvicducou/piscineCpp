#include "../includes/project.h"

bool	set_input(std::string possible[4], Input *input)
{
	for (int i = 0; i < 4; i++)
	{
		if (!possible[i].compare("int"))
			return (input->type = INT, true);
		if (!possible[i].compare("float"))
			return (input->type = FLOAT, true);
		if (!possible[i].compare("double"))
			return (input->type = DOUBLE, true);
		if (!possible[i].compare("long"))
			return (input->type = INVALID, false);
	}
	return (input->type = INVALID, false);
}

bool	identify_string(char *arg, Input *input)
{
	int comparelen = strlen(arg);

	if (!strncmp(arg, "-inf", comparelen))
		return (input->is_str = true, input->type = DOUBLE, true);
	if	(!strncmp(arg, "+inf", comparelen))
		return (input->is_str = true, input->type = DOUBLE, true);
	if	(!strncmp(arg, "nan", comparelen))
		return (input->is_str = true, input->type = DOUBLE, true);
	if	(!strncmp(arg, "-inff", comparelen))
		return (input->is_str = true, input->type = FLOAT, true);
	if	(!strncmp(arg, "+inff", comparelen))
		return (input->is_str = true, input->type = FLOAT, true);
	if	(!strncmp(arg, "nanf", comparelen))
		return (input->is_str = true, input->type = FLOAT, true);
	return input->is_str;
}

bool	identify_type(char *arg, Input *input)
{
	std::string possible[4] = {"int", "long", "float", "double"};
	int dot_counter = 0;
	long input_lg = atol(arg);
	int  input_int = atoi(arg);

	if (input_int != input_lg)
		possible[0] = "";
	else
		possible[1] = "";
	if (input_lg == 0 && !isnumber(arg[0]))
		return (identify_string(arg, input));
	for (size_t i = 0; i < strlen(arg); i++)
	{
		if (!isnumber(arg[i]) && arg[i] != '.' 
			&& !(i == 0 && (arg[i] == '+' || arg[i] == '-'))
			&&!(i == strlen(arg) - 1 && arg[i] == 'f'))
			return (false);
		else if (arg[i] == '.')
		{
			possible[0] = "", possible[1] = "";
			if (++dot_counter > 1)
				return false;
		}
		else if (arg[i] == 'f')
			possible[3] = "", possible[0] = "";
		else if (i == strlen(arg) - 1 && arg[i] != 'f')
			possible[2] = "";
	}
	if (!dot_counter)
		possible[3] = "";
	return (set_input(possible, input));
}

bool	check_type(char *arg, Input *input)
{
	std::string res;

	if (!strlen(arg))
		return (false);
	if (strlen(arg) == 1 && isalpha(arg[0]))
		return (input->type = CHAR, true);
	return (identify_type(arg, input));
}