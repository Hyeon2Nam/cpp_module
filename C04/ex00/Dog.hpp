#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string _type);
	Dog(Dog const &src);
	~Dog();

	Dog &operator=(Dog const &rhs);

	void makeSound(void) const;
};


#endif /* ************************************************************* DOG_H */