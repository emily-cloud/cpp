
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
			materia[i] = src.materia[i] ? src.materia[i]->clone() : nullptr;
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
			materia[i] = nullptr;
		}
	}
	//std::cout << "MateriaSource " << count << " is destroyed!" << std::endl;
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
			materia[i] = src.materia[i] ? src.materia[i]->clone() : nullptr;
		}
	}
	//std::cout << "MateriaSource " << count << " is assigned!" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if(m == nullptr)
		return;
	if (count < 4)
	{
		materia[count++] = m->clone();
	}
	//std::cout << "MateriaSource " << count << " learns " << m->getType() << std::endl;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != nullptr && materia[i]->getType() == type)
        {
            //std::cout << "MateriaSource creates " << type << std::endl;
            return materia[i]->clone();
        }
    }
   // std::cout << "MateriaSource cannot create " << type << std::endl;
    return nullptr;
}


