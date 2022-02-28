#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(std::string _type) : Animal()
{
	type = _type;
	brain = new Brain();
	std::cout << "Dog string constructor called." << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.getBrain());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Assignation operator called" << std::endl;

	if (brain)
		delete brain;
	if (this != &rhs)
	{
		this->type = rhs.getType();
		this->brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) const
{
	std::cout << "bowwow bowwow." << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */