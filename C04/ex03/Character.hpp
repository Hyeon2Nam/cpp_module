#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *inventory[4];

public:
	Character();
	Character(std::string name);
	Character(Character const &src);
	~Character();

	Character &operator=(Character const &rhs);

	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

	void inventoryCheck(void);
};

#endif /* ******************************************************* CHARACTER_H */