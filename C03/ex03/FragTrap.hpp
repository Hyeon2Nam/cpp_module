#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
private:
	bool highFives;

public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};

#endif /* ******************************************************** FragTrap_H */