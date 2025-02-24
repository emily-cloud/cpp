
#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const  &name):name(name)
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;

	//std::cout << "Character constructor is called, " << name << " is born!" << std::endl;
}

Character::Character(Character const & src): ICharacter(), name(src.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.materia[i])
			materia[i] =  src.materia[i]->clone();
		else
			materia[i] = NULL;
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
		}
	}

	for (size_t i = 0; i < materiaList.size(); i++)
	{
		if (materiaList[i])
		{
			delete materiaList[i];
			materiaList[i] = NULL;
		}
	}
	materiaList.clear();
}

Character & Character::operator=(Character const & src)
{

	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
				delete materia[i];
			materia[i] = src.materia[i] ? src.materia[i]->clone() : NULL;
		}
	}
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
			materia[i] = m;
			std::cout << "Character " << getName() << " equips with " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "Character " << getName() << " equips with " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !materia[idx])
	{
		std::cout << "index is out of bound" << std::endl;
		return;
	}
	else if (!materia[idx])
	{
		std::cout << "No maretia is exacted at index" << std::endl;
		return;
	}
	else
	{
		materiaList.push_back(materia[idx]);
		std::cout << "Character " << getName() << " unequips with " << materia[idx]->getType() << std::endl;
		materia[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target)
{
		if (idx < 0 || idx >= 4 || !materia[idx])
	{
		std::cout << "index is out of bound" << std::endl;
		return;
	}
	else if (!materia[idx])
	{
		std::cout << "No maretia is exacted at index" << std::endl;
		return;
	}
	materia[idx]->use(target);
	//std::cout << "debug Character " << getName() << " uses " << idx << " on " << target.getName() << std::endl;
}
