#include "../includes/project.h"

bool	check_int(char *arg, Input input)
{
	(void)input;
	std::string possible[4] = {"int", "long", "float", "double"};
	int dot_counter = 0;
	long input_lg = atol(arg);
	int  input_int = atoi(arg);

	std::cout << "atoi : " << input_int << " atol : " << input_lg << std::endl;
	if (input_int != input_lg)
		possible[0] = "";
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
			possible[3] = "";
	}
	std::cout << possible[0] << " " << possible[1] << " " << possible[2] << " " << possible[3] << " " << std::endl;
	return (true);
}

bool	check_float_double(char *arg)
{
	(void)arg;
	return (false);
}

bool	check_double(std::string input_string)
{
	(void)input_string;
	return (false);
}

bool	check_type(char *arg, Input input)
{
	if (!strlen(arg))
		return (false);
	if (strlen(arg) == 1 && isalpha(arg[0]))
		return (input.type = CHAR, true);
	if (check_int(arg, input))
		return (input.type = INT, true);
	if (check_float_double(arg))
		return (true);
	return (input.type = INVALID, false);
}