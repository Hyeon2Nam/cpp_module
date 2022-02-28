#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string _type);
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound(void) const;
};


#endif /* ************************************************************* CAT_H */