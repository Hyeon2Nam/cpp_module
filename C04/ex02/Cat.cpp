#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(std::string _type) : Animal(_type)
{
	type = _type;
	std::cout << "Cat string constructor called." << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Assignation operator called" << std::endl;

	if (brain)
		delete brain;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void) const
{
	std::cout << "meow meow." << std::endl;
}

Brain *Cat::getBrain(void)
{
	return brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */