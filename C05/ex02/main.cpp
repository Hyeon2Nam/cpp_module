#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << "===========ShrubberyCreationForm============" << std::endl;
	{
		Form *s = new ShrubberyCreationForm("a");
		Bureaucrat bob("bob", 150);

		std::cout << bob << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << *s << std::endl;
		std::cout << "---------------" << std::endl;

		bob.signForm(*s);
		bob.executeForm(*s);
		std::cout << "---------------" << std::endl;

		bob.incrementGrade(bob, 10);

		bob.signForm(*s);
		bob.executeForm(*s);
		std::cout << "---------------" << std::endl;

		bob.incrementGrade(bob, 10);

		bob.signForm(*s);
		bob.executeForm(*s);
		std::cout << "---------------" << std::endl;

		delete s;
	}
	std::cout << "============================================" << std::endl;
	std::cout << "===========RobotomyRequestForm==============" << std::endl;
	{
		Form *s = new RobotomyRequestForm("b");
		Bureaucrat bob("bob", 80);

		std::cout << bob << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << *s << std::endl;
		std::cout << "---------------" << std::endl;

		bob.signForm(*s);
		bob.executeForm(*s);
		std::cout << "---------------" << std::endl;

		bob.incrementGrade(bob, 10);

		bob.signForm(*s);
		bob.executeForm(*s);
		std::cout << "---------------" << std::endl;

		bob.incrementGrade(bob, 30);

		bob.signForm(*s);
		bob.executeForm(*s);
		std::cout << "---------------" << std::endl;
		delete s;
	}
	// std::cout << "============================================" << std::endl;
	// std::cout << "===========PresidentialPardonForm===========" << std::endl;
	// {
	// 	Form *s = new PresidentialPardonForm("c");
	// 	Bureaucrat bob("bob", 30);

	// 	std::cout << bob << std::endl;
	// 	std::cout << "---------------" << std::endl;
	// 	std::cout << *s << std::endl;
	// 	std::cout << "---------------" << std::endl;

	// 	bob.signForm(*s);
	// 	bob.executeForm(*s);
	// 	std::cout << "---------------" << std::endl;

	// 	bob.incrementGrade(bob, 10);

	// 	bob.signForm(*s);
	// 	bob.executeForm(*s);
	// 	std::cout << "---------------" << std::endl;

	// 	bob.incrementGrade(bob, 15);

	// 	bob.signForm(*s);
	// 	bob.executeForm(*s);
	// 	std::cout << "---------------" << std::endl;
	// 	delete s;
	// }
}