#include "../includes/project.h"

void print_char(char *arg, double value, Input *input)
{
	std::cout << "char : ";
	if (input->is_str)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if ((value > 32 && value < 127))
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	else if (input->type == CHAR)
		std::cout << "'" << arg[0] << "'" <<std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	return ;
}

void print_int(char *arg, double value, Input *input)
{
	std::cout << "int : ";
	if (input->is_str)
		std::cout << "impossible" << std::endl;
	else if (input->type == CHAR)
		std::cout << static_cast<int>(arg[0]) << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
	return ;
}

void print_float(char *arg, double value, Input *input)
{
	std::cout << "float : ";
	if (input->is_str)
	{
		if (input->type == FLOAT)
			std::cout << arg << std::endl;
		else if (input->type == DOUBLE)
			std::cout << arg << "f" << std::endl;
	}
	else if (input->type == CHAR)
		std::cout << static_cast<float>(arg[0]) << ".0f" <<std::endl;
	else if (input->type == DOUBLE)
		std::cout << std::fixed << std::setprecision(strlen(strrchr(arg, '.')) - 1) << static_cast<float>(value) << "f" << std::endl;
	else
		std::cout << arg << std::endl;
	return ;
}

void print_double(char *arg, double value, Input *input)
{
	std::cout << "double : ";
	if (input->is_str)
	{
		if (input->type == FLOAT)
			std::cout << std::string(arg).substr(0, strlen(arg) - 1) << std::endl;
		else if (input->type == DOUBLE)
			std::cout << arg << std::endl;
	}
	else if (input->type == CHAR)
		std::cout << static_cast<double>(arg[0]) << ".0" <<std::endl;
	else if (input->type == DOUBLE)
		std::cout << std::fixed << std::setprecision(strlen(strrchr(arg, '.')) - 1) << static_cast<double>(value) << std::endl;
	else
		std::cout << std::string(arg).substr(0, strlen(arg) - 1) << std::endl;
	return ;
}

void print_type(char *arg, Input *input)
{
	double value = strtod(arg, NULL);

	print_char(arg, value, input);
	print_int(arg, value, input);
	print_float(arg, value, input);
	print_double(arg, value, input);
	return ;
}