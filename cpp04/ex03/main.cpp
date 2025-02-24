
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);


	ICharacter* bob = new Character("bob");
	ICharacter* lucy = new Character("lucy");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	me->use(0, *lucy);
	me->use(1, *lucy);
	me->use(2, *lucy);
	me->use(3, *lucy);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);

	delete bob;
	delete me;
	delete lucy;
	delete src;

return 0;
}
