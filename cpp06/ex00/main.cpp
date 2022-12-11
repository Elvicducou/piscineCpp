#include "includes/project.h"

int main(int argc, char** argv)
{
	Input input;

	if (argc != 2 || !check_type(argv[1], &input))
	{
		std::cerr << "Bad argument, usage : ./convert [lliteral]" << std::endl;
		exit(EXIT_FAILURE);
	}
	print_type(argv[1], &input);
	return (0);
}