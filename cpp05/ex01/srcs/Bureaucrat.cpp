//
// Created by Victor Ducoulombier on 05/12/2022.
//

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	std::cout << "bureaucrat assigned constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	std::cout << "bureaucrat copy constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (&rhs == this)
		return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default bureaucrat destructor called" << std::endl;
}

void	Bureaucrat::gradeIncrementer(void)
{
	if (_grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return;
	}
	_grade++;
}

void	Bureaucrat::gradeDecrementer(void)
{
	if (_grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return;
	}
	_grade--;
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << _name << " couldn't sign " << f.getName() << " because ";
		std::cerr << e.what() << '\n';
		return;
	}
	std::cout << _name << " signed " << f.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &i, Bureaucrat const &o)
{
	i << o.getName() << ", bureaucrat grade " << o.getGrade() << "." << std::endl;
	return (i);
}