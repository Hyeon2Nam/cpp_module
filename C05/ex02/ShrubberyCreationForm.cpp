#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery", "target", 145, 137){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery", target, 145, 137){};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getName(), src.getTarget(), src.getReqgrade(), src.getExegrade())
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
	o << "Name = " << i.getName() << ", Grade = ";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::makeFile(void)
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */