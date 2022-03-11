#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", "target", 72, 45){};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", target, 72, 45){};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getName(), src.getTarget(), src.getReqgrade(), src.getExegrade())
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::RandomDrilling(void) const
{
	std::srand(time(0));
	if (std::rand() % 2)
		std::cout << "Drrrrrrrrrrr....................." << std::endl;
	else
		std::cout << "it's a failure." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExegrade())
		throw GradeTooLowException();
	RandomDrilling();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */