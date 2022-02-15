#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called." << std::endl;

	name = "default";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	highFives = 0;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap string constructor called." << std::endl;

	name = _name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	highFives = 0;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src.name)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;

	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;

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

void FragTrap::attack(std::string const &target)
{
	if (highFives)
		std::cout << "FragTrap " << this->name << ": Hey, bro~  high five~!" << std::endl;
	else
	std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " was attacked and suffered " << amount << " points of damage!" << std::endl;

	this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << "FragTrap " << this->name << " is died!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	int temp;

	if (amount + this->hit_points > 100)
		temp = 100 - this->hit_points;
	else
		temp = amount;
	
	this->hit_points += temp;
	if (this->hit_points > 100)
		hit_points = 100;

	std::cout << "FragTrap " << this->name << " recovered " << temp << " points after being repaired!" << std::endl;
	std::cout << "Now FragTrap " << this->name << "'s HP is " << this->hit_points << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << "requested high fives." << std::endl;

	highFives = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */