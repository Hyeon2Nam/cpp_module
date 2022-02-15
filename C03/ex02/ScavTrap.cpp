#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called." << std::endl;

	name = "default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	gateMode = 0;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap name constructor called." << std::endl;

	name = _name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	gateMode = 0;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src.name)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;

	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;

	if (this != &rhs)
	{
		this->name = rhs.name;
		this->attack_damage = rhs.attack_damage;
		this->energy_points = rhs.energy_points;
		this->hit_points = rhs.hit_points;
	}

	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(std::string const &target)
{
	if (gateMode)
		std::cout << "[Gate keeper mode] ";

	std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->name << " was attacked and suffered " << amount << " points of damage!" << std::endl;

	this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << "ScavTrap " << this->name << " is died!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	int temp;

	if (amount + this->hit_points > 100)
		temp = 100 - this->hit_points;
	else
		temp = amount;
	
	this->hit_points += temp;
	if (this->hit_points > 100)
		hit_points = 100;

	std::cout << "ScavTrap " << this->name << " recovered " << temp << " points after being repaired!" << std::endl;
	std::cout << "Now ScavTrap " << this->name << "'s HP is " << this->hit_points << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << "Entered in Gate keeper mode." << std::endl;

	gateMode = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */