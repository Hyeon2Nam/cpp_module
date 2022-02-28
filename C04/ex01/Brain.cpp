#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain Default constructor called." << std::endl;
	initIdeas();
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Brain::initIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		std::string temp = "idea" + std::to_string(i);
		ideas[i] = temp;
	}
}

void Brain::getAllIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << "ideas[" << i << "]:" << ideas[i] << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */