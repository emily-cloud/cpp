
#include "AMateria.hpp"

AMateria::AMateria()
{
	//std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type)
{
	//std::cout << "AMateria constructor is called, " << type << " is created!" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	type = src.type;
	//std::cout << "AMateria " << type << " is copied!" << std::endl;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria " << type << " is destroyed!" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	if (this != &src)
	{
		type = src.type;
	}
	//std::cout << "AMateria " << type << " is assigned!" << std::endl;
	return *this;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	//std::cout << "AMateria " << type << " is used on " << target.getName() << std::endl;
}
