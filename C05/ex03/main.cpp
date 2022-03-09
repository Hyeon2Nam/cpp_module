#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form *rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form *a = someRandomIntern.makeForm("shrubbery creation", "aaaa");
	Form *b = someRandomIntern.makeForm("president pardon", "bbb");
	if (!rrf || !a || !b)
		return (1);
	std::cout << *rrf << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << *a << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << *b << std::endl;
	std::cout << "--------------------" << std::endl;
	Form *c = someRandomIntern.makeForm("aa", "cccccc");
	if (!c)
		return (1);
	std::cout << *c << std::endl;
}