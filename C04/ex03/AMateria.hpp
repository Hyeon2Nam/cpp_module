#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(const AMateria &src);
	virtual ~AMateria();
	AMateria(std::string const &type);

	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const; // Returns the 	materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif /* ******************************************************** AMATERIA_H */