//
// Created by Victor Ducoulombier on 05/12/2022.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP
#include <iostream>
class Form;
#include "Form.hpp"


class Bureaucrat {
private :
    std::string     const       _name;
    int                         _grade;
public :

    class GradeTooHighException : public std::exception
    {
        public :
        virtual const char* what() const throw()
        {
            return ("Exception : grade is too high !");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public :
        virtual const char* what() const throw()
        {
            return ("Exception : grade is too low !");
        }
    };
    
    Bureaucrat                  ();
    Bureaucrat                  (std::string name, int grade);
    Bureaucrat                  (const Bureaucrat &rhs);
    Bureaucrat      &           operator=(Bureaucrat const &rhs);
    ~Bureaucrat                 ();
    std::string                 getName(void) const;
    int                         getGrade(void) const;
    void                        gradeIncrementer();
    void                        gradeDecrementer();
    void                        signForm(Form &f);
};

std::ostream &operator<<(std::ostream &i, Bureaucrat const &o);

#endif //CPP_BUREAUCRAT_HPP
