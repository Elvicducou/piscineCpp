
#include "includes/Iter.hpp"

int main(void)
{
	std::string test_arr_str[3] = {"coucou", "hello", "hi"};
	std::cout << std::endl << "*** ITER WITH STD_STRING ***" << std::endl << std::endl;
	iter(test_arr_str, 3, print);
	std::cout << std::endl;

	int test_arr_int[3] = {0, 1, 2};
	std::cout << std::endl << "*** ITER WITH INT ***" << std::endl << std::endl;
	iter(test_arr_int, 3, print);
	std::cout << std::endl;

	float test_arr_float[3] = {1.12, 8.67, 9.9999};
	std::cout << std::endl << "*** ITER WITH FLOAT ***" << std::endl << std::endl;
	iter(test_arr_float, 3, print);
	std::cout << std::endl;

	char test_arr_char[3] = {'a', 'b', 'c'};
	std::cout << std::endl << "*** ITER WITH CHAR ***" << std::endl << std::endl;
	iter(test_arr_char, 3, print);

	char test_arr_char_lg[3] = {'a', 'b', 'c'};
	std::cout << std::endl << "*** ITER WITH CHAR AND LONG AS LENGHT ***" << std::endl << std::endl;
	iter(test_arr_char_lg, static_cast<long>(3), print);

	std::cout << std::endl;
}