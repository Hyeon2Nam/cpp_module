#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("president", "target", 25, 5){};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("president", target, 25, 5){};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getName(), src.getTarget(), src.getReqgrade(), src.getExegrade())
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	o << "Name = " << i.getName() << "\nTarget = " << i.getTarget() << "\nRequired grades = " << i.getReqgrade() << "\nExec grades = " << i.getExegrade();

	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::TellPardoned(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExegrade())
		throw GradeTooLowException();
	TellPardoned();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */