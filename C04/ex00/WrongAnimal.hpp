#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();

	WrongAnimal &operator=(WrongAnimal const &rhs);

	void makeSound(void) const;
	std::string getType(void) const;
};

#endif /* ********************************************************** WRONGANIMAL_H */