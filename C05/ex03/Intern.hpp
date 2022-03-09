#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern &operator=(Intern const &rhs);

	class NotFoundException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("No applicable form.");
		}
	};

	int findKey(std::string name);
	Form *makeForm(std::string name, std::string target);
};

#endif /* ********************************************************** INTERN_H */