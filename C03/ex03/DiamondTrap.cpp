#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap("default_clap_name"), FragTrap("default_clap_name")
{
	std::cout << "DiamondTrap Default constructor called." << std::endl;
	_name = "default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n + "_clap_name"), FragTrap(n + "_clap_name")
{
	std::cout << "DiamondTrap string constructor called." << std::endl;

	_name = n;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;

	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->attack_damage = rhs.attack_damage;
		this->energy_points = rhs.energy_points;
		this->hit_points = rhs.hit_points;
	}

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " of DiamondTrap." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */