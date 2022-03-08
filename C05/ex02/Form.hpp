#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const std::string _target;
	const int _req_grade;
	const int _exe_grade;
	bool _signed;

	Form() : _name("Form"), _target("target"), _req_grade(100), _exe_grade(100), _signed(false){};

public:
	Form(std::string name, std::string target, int req_grade, int exe_grade);
	Form(Form const &src);
	virtual ~Form();

	Form &operator=(Form const &rhs);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("The grade is too hight to sign.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("The grade is too low to sign.");
		}
	};

	std::string getName(void) const;
	std::string getTarget(void) const;
	int getReqgrade(void) const;
	int getExegrade(void) const;
	bool getSigned(void) const;

	void beSigned(Bureaucrat const &i);
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif /* ************************************************************ FORM_H */