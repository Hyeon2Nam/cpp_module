#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default constructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal string constructor called." << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal Assignation operator called" << std::endl;

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType(void) const
{
	return type;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */