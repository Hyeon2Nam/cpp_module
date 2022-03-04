#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void test(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	ICharacter *me = new Character("me");
	AMateria *tmp;

	tmp = src->createMateria("ice");
	for (int i = 0; i < 5; i++)
		me->equip(tmp);
	me->inventoryCheck();

	ICharacter *bob = new Character("bob");
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);

	src->learnMateria(new Cure());
	tmp = src->createMateria("cure");
	for (int i = 0; i < 2; i++)
		me->equip(tmp);
	me->inventoryCheck();
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp;
}

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}