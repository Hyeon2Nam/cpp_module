#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : ICharacter()
{
	_name = "Bob";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter()
{
	_name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete inventory[i];
				inventory[i] = NULL;
			}
			if (rhs.inventory[i])
				this->inventory[i] = rhs.inventory[i]->clone();
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m->clone();
			break;
		}
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && inventory[idx] != NULL)
	{
		delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > -1 && idx < 4 && inventory[idx] != NULL)
	{
		inventory[idx]->use(target);
		unequip(idx);
	}
}

void Character::inventoryCheck(void)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "inventory[" << i << "]:";
		if (inventory[i])
			std::cout << inventory[i]->getType();
		else
			std::cout << "NULL";
		std::cout << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */