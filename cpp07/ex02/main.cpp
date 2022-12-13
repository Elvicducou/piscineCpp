#include "includes/Array.hpp"

void	outOfRangeTest(void)
{
	try
	{
		Array <int>*a = new Array<int>(1);
		std::cout << "entered" << std::endl;
		(void)a;
	}
	catch (const Array<int>::IndexOutOfRangeException& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

int main(void)
{
	outOfRangeTest();
	return (0);
}