
#include "includes/Bureaucrat.hpp"

void ostream_test(void)
{
	std::cout << std::endl << "**** ostream test ****" << std::endl << std::endl;
	Bureaucrat a = Bureaucrat("Brendon", 12);
	Bureaucrat b = Bureaucrat("Latuile", 67);
	std::cout << a << b;
}

void bad_init_test(void)
{
	std::cout << std::endl << "**** bad init test ****" << std::endl << std::endl;
	try
		{
			Bureaucrat a = Bureaucrat(std::string("a"), 151);
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
	try
		{
			Bureaucrat a = Bureaucrat(std::string("a"), 0);
			std::cout << a;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
}

void increment_decrement_test(void)
{
	std::cout << std::endl << "**** increment test ****" << std::endl << std::endl;
	Bureaucrat a = Bureaucrat("Jordan_du_69", 78);
	for (int i = 0; i < 100; i++)
	{
		try {a.gradeIncrementer();}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << '\n';
			break ;
		}
	}
	std::cout << a;
	for (int i = 158; i > -20; i--)
	{
		try {a.gradeDecrementer();}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
			break ;
		}
	}
	std::cout << a;
}

int main(void)
{
	bad_init_test();
	ostream_test();
	increment_decrement_test();
	return (0);
}