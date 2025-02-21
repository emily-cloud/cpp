
#include "Cure.hpp"

Cure::Cure(): AMateria()
{
	type = "cure";
	//std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(std::string const type)
{
	this->type = type;
	//std::cout << "Cure constructor is called, " << type << " is created!" << std::endl;
}

Cure::Cure(Cure const & src)
{
	type = src.type;
	//std::cout << "Cure " << src.type << " is copied!" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure " << type << " is destroyed!" << std::endl;
}

Cure & Cure::operator=(Cure const & src)
{
	if (this != &src)
	{
		type = src.type;
	}
	//std::cout << "Cure " << type << " is assigned!" << std::endl;
	return *this;
}

AMateria* Cure::clone() const
{
	//std::cout << "Cure " << type << " is cloned!" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
