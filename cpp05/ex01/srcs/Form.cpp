//
// Created by Victor Ducoulombier on 05/12/2022.
//

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form() : 
_name("default"), _sign_grade(150), _exec_grade(150)
{
	_is_signed = false;
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade): 
_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	_is_signed = false;
	std::cout << "Form assigned constructor called" << std::endl;
}

Form::Form(Form const &rhs) :
_name(rhs._name), _is_signed(rhs._is_signed), _sign_grade(rhs._sign_grade),
_exec_grade(rhs._exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = rhs;
}

Form &Form::operator=(Form const &rhs)
{
	if (&rhs == this)
		return (*this);
	this->_is_signed = rhs._is_signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "Default Form destructor called" << std::endl;
}

std::string Form::getName(void) const
{
	return (_name);
}

int Form::getSignGrade(void) const
{
	return (_sign_grade);
}

int Form::getExecGrade(void) const
{
	return (_exec_grade);
}

bool Form::getIsSigned(void) const
{
	return (_is_signed);
}

void Form::beSigned(Bureaucrat &b)
{
	if (_is_signed)
		throw Form::AlreadySignedException();
	if (b.getGrade() > _sign_grade)
	{
		throw Form::GradeTooLowException();
		return;
	}
	_is_signed = true;
	
}

std::ostream &operator<<(std::ostream &i, Form const &o)
{
	std::string signedstatus = std::string("unsigned");

	if (o.getIsSigned())
		signedstatus = "signed";
	i << o.getName() << ", Form is " << signedstatus << ", " << o.getSignGrade()
	<< " requiered to sign, " << o.getExecGrade() << " requiered to exec." << std::endl;
	return (i);
}