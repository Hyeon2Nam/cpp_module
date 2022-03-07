#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

	Bureaucrat() : _name("Bob"), _grade(100) {};

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	void incrementGrade(const Bureaucrat &i, int value);
	void decrementGrade(const Bureaucrat &i, int value);

	const char *GradeTooHighException(void);
	const char *GradeTooLowException(void);

	std::string getName(void) const;
	int getGrade(void) const;

	void signForm(Form &f);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif /* ****************************************************** BUREAUCRAT_H */