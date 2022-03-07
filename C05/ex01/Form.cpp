#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int req_grade, int exe_grade) : _name(name), _req_grade(req_grade), _exe_grade(exe_grade), _signed(false)
{
	if (req_grade < 0 || exe_grade < 0)
		throw GradeTooHighException();
	else if (req_grade > 150 || exe_grade > 150)
		throw GradeTooLowException();
};

Form::Form(const Form &src) : _name(src.getName()), _req_grade(src.getReqgrade()), _exe_grade(src.getExegrade()), _signed(src.getSigned())
{
	if (_req_grade < 0 || _exe_grade < 0)
		throw GradeTooHighException();
	else if (_req_grade > 150 || _exe_grade > 150)
		throw GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		*const_cast<std::string *>(&this->_name) = rhs.getName();
		*const_cast<int *>(&this->_req_grade) = rhs.getReqgrade();
		*const_cast<int *>(&this->_exe_grade) = rhs.getExegrade();
		*const_cast<bool *>(&this->_signed) = rhs.getSigned();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "Form Name : " << i.getName() << "\nA grade required to sign it : " << i.getReqgrade() << "\nA grade required to execute it : " << i.getExegrade() << "\nIs signed : " << i.getSigned();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat const &i)
{
	if (i.getGrade() <= _req_grade)
		_signed = true;
	else
		throw GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName(void) const
{
	return _name;
}

int Form::getReqgrade(void) const
{
	return _req_grade;
}

int Form::getExegrade(void) const
{
	return _exe_grade;
}

bool Form::getSigned(void) const
{
	return _signed;
}

/* ************************************************************************** */