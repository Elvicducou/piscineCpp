//
// Created by Victor Ducoulombier on 05/12/2022.
//

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm() : 
_name("default"), _sign_grade(150), _exec_grade(150)
{
	_is_signed = false;
	std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade): 
_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
	_is_signed = false;
	std::cout << "AForm assigned constructor called" << std::endl;
}

AForm::AForm(AForm const &rhs) :
_name(rhs._name), _is_signed(rhs._is_signed), _sign_grade(rhs._sign_grade),
_exec_grade(rhs._exec_grade)
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = rhs;
}

AForm &AForm::operator=(AForm const &rhs)
{
	if (&rhs == this)
		return (*this);
	this->_is_signed = rhs._is_signed;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Default AForm destructor called" << std::endl;
}

std::string AForm::getName(void) const
{
	return (_name);
}

int AForm::getSignGrade(void) const
{
	return (_sign_grade);
}

int AForm::getExecGrade(void) const
{
	return (_exec_grade);
}

bool AForm::getIsSigned(void) const
{
	return (_is_signed);
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _sign_grade)
	{
		throw AForm::GradeTooLowException();
		return;
	}
	if (!_is_signed)
		_is_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > _exec_grade)
	{
		throw AForm::GradeTooLowException();
		return;
	}
	else if (!_is_signed)
	{
		throw AForm::UnsignedFormException();
		return ;
	}
	this->apply();
	return ;
}

std::ostream &operator<<(std::ostream &i, AForm const &o)
{
	std::string signedstatus = std::string("unsigned");

	if (o.getIsSigned())
		signedstatus = "signed";
	i << o.getName() << ", AForm is " << signedstatus << ", " << o.getSignGrade()
	<< " requiered to sign, " << o.getExecGrade() << " requiered to exec." << std::endl;
	return (i);
}