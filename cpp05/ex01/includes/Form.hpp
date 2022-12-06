//
// Created by Victor Ducoulombier on 05/12/2022.
//

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP
class Bureaucrat;
#include "Bureaucrat.hpp"
class Form {
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
            return ("[FORM] Exception : grade is too high !");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public :
        virtual const char* what() const throw()
        {
            return ("[FORM] Exception : grade is too low !");
        }
    };

	Form                  ();
    Form                  (std::string name, int sign_grade, int exec_grade);
    Form                  (const Form &rhs);
    Form      &           operator=(Form const &rhs);
    ~Form                 ();
    std::string           getName(void) const;
    int                   getSignGrade(void) const;
	int                   getExecGrade(void) const;
	bool				  getIsSigned(void) const;
	void                  beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &i, Form const &o);

#endif //CPP_FORM_HPP
