#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat Default constructor called." << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type)
{
	type = _type;
	std::cout << "Cat string constructor called." << std::endl;
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
	std::cout << "Cat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat Assignation operator called" << std::endl;

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void) const
{
	std::cout << "meow meow." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */