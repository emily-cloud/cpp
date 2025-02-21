
#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	//std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string const  &name): name(name)
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	//std::cout << "Character constructor is called, " << name << " is born!" << std::endl;
}

Character::Character(Character const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
		materia[i] = src.materia[i] ? src.materia[i]->clone() : nullptr;
	}
	//std::cout << "Character " << src.getName() << " is copied!" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
		{
			delete materia[i];
			materia[i] = nullptr;
		}
	}
	//std::cout << "Character destruction called" << std::endl;
}

Character & Character::operator=(Character const & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
				delete materia[i];
			materia[i] = src.materia[i] ? src.materia[i]->clone() : nullptr;
		}
	}
	//std::cout << "Character " << src.getName() << " is assigned!" << std::endl;
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (!materia[i])
		{
			materia[i] = m->clone();
			break;
		}
	}
	//std::cout << "Character " << getName() << " equips " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !materia[idx])
		return;
	materia[idx] = NULL;
	//std::cout << "debug Character " << getName() << " unequips " << idx << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !materia[idx])
		return;
	materia[idx]->use(target);
	//std::cout << "debug Character " << getName() << " uses " << idx << " on " << target.getName() << std::endl;
}
