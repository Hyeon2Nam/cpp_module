#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(std::string _type);
	Cat(Cat const &src);
	~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound(void) const;
	Brain *getBrain(void);
};

#endif /* ************************************************************* CAT_H */