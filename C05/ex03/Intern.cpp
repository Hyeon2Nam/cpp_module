#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(Intern const &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Intern::findKey(std::string name)
{
	std::string form[3] = {"robotomy request", "shrubbery creation", "president pardon"};
	int i = 0;

	while (i < 3 && form[i].compare(name) != 0)
		i++;
	return (i);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	int key = findKey(name);

	try
	{
		switch (key)
		{
		case 0:
			std::cout << "Intern creates <" << name << "(" << target << ")>" << std::endl;
			return new RobotomyRequestForm(target);
			break;
		case 1:
			std::cout << "Intern creates <" << name << "(" << target << ")>" << std::endl;
			return new ShrubberyCreationForm(target);
			break;
		case 2:
			std::cout << "Intern creates <" << name << "(" << target << ")>" << std::endl;
			return new PresidentialPardonForm(target);
			break;
		default:
			throw NotFoundException();
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */