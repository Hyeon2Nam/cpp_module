#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(int grade);
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
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif /* ****************************************************** BUREAUCRAT_H */