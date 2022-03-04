#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() : _type("default") {}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::AMateria(std::string const &type) : _type(type){};

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &AMateria::getType(void) const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << "use " << this->_type << "." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */