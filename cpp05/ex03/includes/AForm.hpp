//
// Created by Victor Ducoulombier on 05/12/2022.
//

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP
class Bureaucrat;
#include "Bureaucrat.hpp"
class AForm {
private :
	std::string const 	_name;
	bool				_is_signed;
	int			const	_sign_grade;
	int			const	_exec_grade;

public :

    class GradeTooHighException : public std::exception
    {
        public :
        virtual const char* what() const throw()
        {
            return ("[AForm] Exception : grade is too high !");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public :
        virtual const char* what() const throw()
        {
            return ("[AForm] Exception : grade is too low !");
        }
    };

    class UnsignedFormException : public std::exception
    {
        public :
        virtual const char* what() const throw()
        {
            return ("[AForm] Exception : This form is not signed !");
        }
    };

	AForm                  ();
    AForm                  (std::string name, int sign_grade, int exec_grade);
    AForm                  (const AForm &rhs);
    AForm      &           operator=(AForm const &rhs);
    virtual ~AForm         ();
    std::string           getName(void) const;
    int                   getSignGrade(void) const;
	int                   getExecGrade(void) const;
	bool				  getIsSigned(void) const;
	void                  beSigned(Bureaucrat &b);
    virtual void          apply(void) const= 0;
    void                  execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &i, AForm const &o);

#endif //CPP_FORM_HPP
