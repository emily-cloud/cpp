
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
	count = 0;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	//std::cout << "MateriaSource default constructor" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const & src): IMateriaSource()
{
	if (this != &src)
	{
		count = src.count;
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
				delete materia[i];
			materia[i] = src.materia[i] ? src.materia[i]->clone() : NULL;
		}
	}
	//std::cout << "MateriaSource " << count << " is copied!" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
		{
			delete materia[i];
		}
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		count = src.count;
		for (int i = 0; i < 4; i++)
		{
			if (materia[i])
				delete materia[i];
			materia[i] = src.materia[i] ? src.materia[i]->clone() : NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if(m == NULL)
		return;
	if (count < 4)
	{
		materia[count++] = m;
		std::cout << "MateriaSource " << m->getType() << " is learned " << m->getType() << std::endl;
	}
	else
	{
		std::cout << "MateriaSource is full, " << m->getType() << " is not learned" << std::endl;
		delete m;
	}
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && materia[i]->getType() == type)
		{
			std::cout << "MateriaSource " << materia[i]->getType() << " is created" << std::endl;
			return materia[i]->clone();
		}
	}
	std::cout << "MateriaSource " << type << " is not created" << std::endl;
	return NULL;
}
