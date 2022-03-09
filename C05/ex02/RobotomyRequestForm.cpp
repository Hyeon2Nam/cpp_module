#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy", "target", 72, 45){};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy", target, 72, 45){};

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
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);

	if (dis(gen) > 50)
		std::cout << "Drrrrrrrrrrr....................." << std::endl;
	else
		std::cout << "it’s a failure." << std::endl;
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