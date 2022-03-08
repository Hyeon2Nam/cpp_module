#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form *f = new ShrubberyCreationForm("test");
	Bureaucrat bob("bob", 100);
	bob.signForm(*f);
	bob.executeForm(*f);
}