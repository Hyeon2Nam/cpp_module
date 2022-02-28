#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat Default constructor called." << std::endl;
}

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type)
{
	type = _type;
	std::cout << "WrongCat string constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound(void) const
{
	std::cout << "meow meow." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */