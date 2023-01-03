#include "includes/Array.hpp"

void	outOfRangeTest(void)
{
	std::cout << std::endl << "**** out of range errors test ****" <<std::endl << std::endl;
	Array <int>a(3);
	try
	{
		a.setValue(12, 22);
	}
	catch (const Array<int>::IndexOutOfRangeException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		a.getValue(900);
	}
	catch(const Array<int>::IndexOutOfRangeException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << a[20];
	}
	catch(const Array<int>::IndexOutOfRangeException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void deepCopyTest(void)
{
	std::cout << std::endl << "**** deep copy test ****" <<std::endl << std::endl;
	Array <int>a(3);
	Array <int>b(6);
	a.setValue (23, 2);
	a.setValue (22, 1);
	a.setValue (21, 0);
	std::cout << a << b;
	b = a;
	std::cout << a << b;
	Array<int>c(b);
	std::cout << c;
}

void allSortOfTypesTest(void)
{
	std::cout << std::endl << "**** all types test ****" <<std::endl << std::endl;
	Array <std::string>a(1);
	Array <char>b(1);
	Array <float>c(1);
	a.setValue("BONJOUR", 0);
	b.setValue('a', 0);
	c.setValue(3.14f, 0);
	std::cout << a << b << c;
}

void mallocedAndDestroyTest(void)
{
	std::cout << std::endl << "**** malloced and destroyed test ****" <<std::endl << std::endl;
	Array<std::string> *b = new Array<std::string>(6);
	b->setValue("bjr", 0);
	std::cout << *b;
	delete b;
}

void emptyArrayTest(void)
{
	std::cout << std::endl << "**** empty array test ****" <<std::endl << std::endl;
	Array<int> b;
	Array<int> c(2);
	c[0] = 0;
	c[1] = 1;
	std::cout << b << c;
	c = b;
	std::cout << b << c;
}

int main(void)
{
	outOfRangeTest();
	deepCopyTest();
	allSortOfTypesTest();
	mallocedAndDestroyTest();
	emptyArrayTest();
	return (0);
}