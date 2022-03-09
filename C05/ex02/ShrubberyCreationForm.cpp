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
	o << "Name = " << i.getName() << "\nTarget = " << i.getTarget() << "\nRequired grades = " << i.getReqgrade() << "\nExec grades = " << i.getExegrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string ShrubberyCreationForm::makeFileName(void) const
{
	return this->getTarget() + "_shrubbery";
}

std::string ShrubberyCreationForm::makeTree(void) const
{
	std::string tree = "       _-_\\ \n\
    /~~   ~~\\ \n\
 /~~         ~~\\ \n\
{               }\n\
 \\  _-     -_  /\n\
   ~  \\\\ //  ~\n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\\\";
	return tree;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExegrade())
		throw GradeTooLowException();
	std::fstream fout(makeFileName(), std::ios::out);
	fout << makeTree();
	fout.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */