#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const &rhs);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void setDamage(int damage);
	
	std::string getName(void);
	int getAttackDamage(void);
	int getEnergyPoints(void);
};

#endif /* ******************************************************** CLAPTRAP_H */