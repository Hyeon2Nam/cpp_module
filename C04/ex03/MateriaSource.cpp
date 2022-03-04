#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (source[i] != NULL)
		{
			delete source[i];
			source[i] = NULL;
		}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->source[i])
			{
				delete source[i];
				source[i] = NULL;
			}
			if (rhs.source[i])
				this->source[i] = rhs.source[i]->clone();
		}
	}

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
		if (this->source[i] == NULL)
		{
			this->source[i] = m;
			break;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (source[i] != NULL && source[i]->getType() == type)
		{
			return source[i]->clone();
			break;
		}
	return (0);
}

void MateriaSource::materiaCheck(void)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "source[" << i << "]:";
		if (source[i])
			std::cout << source[i]->getType();
		else
			std::cout << "NULL";
		std::cout << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */