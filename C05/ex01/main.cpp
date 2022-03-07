#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat bob("bob", 100);
	std::cout << bob << std::endl;
	std::cout << "===============================" << std::endl;

	Form f("one", 10, 10);
	std::cout << f << std::endl;
	std::cout << "===============================" << std::endl;

	bob.signForm(f);

	bob.incrementGrade(bob, 90);

	bob.signForm(f);
}