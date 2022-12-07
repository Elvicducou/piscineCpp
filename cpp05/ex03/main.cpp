
#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/Intern.hpp"

void formIsNotSignedTest(void)
{
	std::cout << std::endl << "**** FORM UNSIGNED TEST ****" << std::endl << std::endl;
	Bureaucrat ba("collaborator", 22);
	ShrubberyCreationForm fa = ShrubberyCreationForm("tree");
	ba.executeForm(fa);
	ba.signForm(fa);
	ba.executeForm(fa);
}

void cantSignTest(void)
{
	std::cout << std::endl << "**** CANT EXEC TEST ****" << std::endl << std::endl;
	Bureaucrat ba("collaborator", 22);
	PresidentialPardonForm fa = PresidentialPardonForm("HUMAN");
	ba.signForm(fa);
	ba.executeForm(fa);
}

void unAllowedBureacratTest(void)
{
	std::cout << std::endl << "**** UNAUTHORIZED TEST ****" << std::endl << std::endl;
	Bureaucrat ba("collaborator", 150);
	RobotomyRequestForm fa = RobotomyRequestForm("HUMAN");
	ba.signForm(fa);
	ba.executeForm(fa);
}

void fiftyPercentRobotoTest(void)
{
	std::cout << std::endl << "**** 50% ROBOTO TEST ****" << std::endl << std::endl;
	Bureaucrat ba("collaborator", 2);
	RobotomyRequestForm fa = RobotomyRequestForm("HUMAN");
	ba.signForm(fa);
	ba.executeForm(fa);
	ba.executeForm(fa);
	ba.executeForm(fa);
	ba.executeForm(fa);
	ba.executeForm(fa);
}

void everythinFineTest(void)
{
	std::cout << std::endl << "**** EVERYTHING FINE TEST ****" << std::endl << std::endl;
	Bureaucrat ba("collaborator", 1);
	RobotomyRequestForm fa = RobotomyRequestForm("HUMAN");
	std::cout << std::endl;
	ba.signForm(fa);
	ba.executeForm(fa);
	std::cout << std::endl;
	PresidentialPardonForm fb = PresidentialPardonForm("HUMAN");
	std::cout << std::endl;
	ba.signForm(fb);
	ba.executeForm(fb);
	std::cout << std::endl;
	ShrubberyCreationForm fc = ShrubberyCreationForm("tree");
	std::cout << std::endl;
	ba.signForm(fc);
	ba.executeForm(fc);
	std::cout << std::endl;
}

void internTest(void)
{
	std::cout << std::endl << "**** INTERN TEST ****" << std::endl << std::endl;
	Intern someRandomIntern;
	AForm* roboto_rf;
	AForm* shrubbery_rf;
	AForm* presidential_rf;
	AForm* non_working_rf;

	Bureaucrat ba = Bureaucrat("John", 2);
	roboto_rf = someRandomIntern.makeForm("robotomy request", "Bender");
	shrubbery_rf = someRandomIntern.makeForm("shrubbery creation request", "tree");
	presidential_rf = someRandomIntern.makeForm("presidential pardon request", "Victor");
	non_working_rf = someRandomIntern.makeForm("huzhuh", "test");
	ba.signForm(*roboto_rf), ba.signForm(*shrubbery_rf), ba.signForm(*presidential_rf), ba.signForm(*non_working_rf);
	ba.executeForm(*roboto_rf), ba.executeForm(*shrubbery_rf), ba.executeForm(*presidential_rf), ba.executeForm(*non_working_rf);
	delete roboto_rf, delete shrubbery_rf, delete presidential_rf, delete non_working_rf;
}

int main(void)
{
	formIsNotSignedTest();
	unAllowedBureacratTest();
	cantSignTest();
	fiftyPercentRobotoTest();
	everythinFineTest();
	internTest();
	return (0);
}