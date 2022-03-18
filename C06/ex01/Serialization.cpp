#include "Serialization.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialization::Serialization()
{
}

Serialization::Serialization(const Serialization &src)
{
	static_cast<void>(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialization::~Serialization()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialization &Serialization::operator=(Serialization const &rhs)
{
	static_cast<void>(&rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t Serialization::serialize(Data *prt)
{
	return (reinterpret_cast<uintptr_t>(prt));
}

Data *Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */