
#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int random_value = rand()%3;

	if (!random_value)
		return (new A());
	if (random_value == 1)
		return (new B());
	if (random_value == 2)
		return (new C());
	return (nullptr);
}

void identify(Base &random)
{
	try
	{
		(void)dynamic_cast<B&>(random);
		std::cout << "I think it's a B class";
		std::cout << " (reference)" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		(void)dynamic_cast<C&>(random);
		std::cout << "I think it's a C class";
		std::cout << " (reference)" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		(void)dynamic_cast<A&>(random);
		std::cout << "I think it's a A class";
		std::cout << " (reference)" << std::endl;
		return ;
	}
	catch(const std::bad_cast& e) {}
	std::cout << "UNKNOW CLASS (reference)" << std::endl;
}

void identify(Base *random)
{
	if (dynamic_cast<A *>(random))
		std::cout << "I think it's a A class (pointer)" << std::endl;
	else if (dynamic_cast<B *>(random))
		std::cout << "I think it's a B class (pointer)" << std::endl;
	else if (dynamic_cast<C *>(random))
		std::cout << "I think it's a C class (pointer)" << std::endl;
	else
		std::cout << "UNKNOW CLASS" << std::endl;
}

int main(void)
{
	Base *random;
	random = generate();
	identify(random);
	identify(*random);
	delete random;
	return (0);
}