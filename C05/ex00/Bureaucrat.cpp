#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Bob"), _grade(100){};

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(100){};

Bureaucrat::Bureaucrat(int grade)
{
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_name = "Bob";
	_grade = grade;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_name = "Bob";
	_grade = grade;
};

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << "Name = " << i.getName() << ", Grade = " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Bureaucrat::GradeTooHighException(void)
{
	throw(std::out_of_range("Out of grade range.(Too high)"));
}

const char *Bureaucrat::GradeTooLowException(void)
{
	throw(std::out_of_range("Out of grade range.(Too low)"));
}

std::string Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::incrementGrade(const Bureaucrat &i, int value)
{
	std::cout << "Increase " << i.getName() << "'s grade by " << value << "." << std::endl;
	try
	{
		if (_grade - value < 1)
			throw GradeTooHighException();
		_grade -= value;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << i << std::endl;
}

void Bureaucrat::decrementGrade(const Bureaucrat &i, int value)
{
	std::cout << "Decrease " << i.getName() << "'s grade by " << value << "." << std::endl;
	try
	{
		if (_grade + value > 150)
			GradeTooLowException();
		_grade += value;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << i << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */