#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animals[10];

	int i = 0;
	for (; i < 5; i++)
	{
		std::cout << "================" << i + 1 << "======================" << std::endl;
		animals[i] = new Dog();
	}
	for (; i < 10; i++)
	{
		std::cout << "================" << i + 1 << "======================" << std::endl;
		animals[i] = new Cat();
	}

	std::cout << "=============Deep=================" << std::endl;
	Dog *dog = new Dog((*dynamic_cast<Dog *>(animals[1])));

	std::cout << "================Delete=================" << std::endl;
	for (i = 0; i < 10; i++)
	{
		std::cout << "================" << i + 1 << "======================" << std::endl;
		delete animals[i];
	}

	std::cout << "================Copy Print=================" << std::endl;
	dog->getBrain()->getAllIdeas();
	std::cout << "================Copy Delete=================" << std::endl;
	delete dog;
}