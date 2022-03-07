#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob(100);
		std::cout << bob << std::endl;
		bob.incrementGrade(bob, 10);
		bob.incrementGrade(bob, 100);
		bob.decrementGrade(bob, 300);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}