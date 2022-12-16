
#include "includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

void ostream_test(void)
{
	std::cout << std::endl << "**** ostream test ****" << std::endl << std::endl;
	Form a = Form("formulaire BXA12", 12, 66);
	Form b = Form("formulaire B32C7", 67, 149);
	std::cout << a << b;
}

void formBadInitTest()
{
	std::cout << std::endl << "**** Form bad init test ****" << std::endl << std::endl;
	try
	{
		Form a = Form("test", 151, 12);
		Form b = Form("newtest", 0, 72);
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form b = Form("newtest", 0, 72);
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form a = Form("test", 57, 151);
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form a = Form("test", 12, -35);
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void formUnauthorizedTest()
{
	Bureaucrat ba = Bureaucrat("John", 55);
	Form		high_priviledge = Form("High priviledge", 5, 19);
	Form		low_priviledge = Form("Low priviledge", 70, 88);
	try
	{
		ba.signForm(high_priviledge);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		ba.signForm(low_priviledge);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	ostream_test();
	formBadInitTest();
	formUnauthorizedTest();
	return (0);
}