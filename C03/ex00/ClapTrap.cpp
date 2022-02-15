#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap string constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
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

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " was attacked and suffered " << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << "ClapTrap " << this->name << " is died!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " recovered " << amount - this->hit_points << " points after being repaired!" << std::endl;
	this->hit_points += amount;
	if (this->hit_points > 10)
		hit_points = 10;
	std::cout << "Now CrapTrap " << this->name << "'s HP is " << this->hit_points << std::endl;
}

void ClapTrap::setDamage(int damage)
{
	this->attack_damage = damage;
}

std::string ClapTrap::getName(void)
{
	return this->name;
}

int ClapTrap::getAttackDamage(void)
{
	return this->attack_damage;
}

int ClapTrap::getEnergyPoints(void)
{
	return this->energy_points;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */