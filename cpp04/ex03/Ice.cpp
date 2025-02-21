
#include "Ice.hpp"

Ice::Ice(): AMateria()
{
	type = "ice";
	//std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(std::string const &type): AMateria()
{
	this->type = type;
	//std::cout << "Ice constructor is called, " << type << " is created!" << std::endl;
}
Ice::Ice(Ice const & src)
{
	type = src.type;
	//std::cout << "Ice " << src.type << " is copied!" << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice " << type << " is destroyed!" << std::endl;
}

Ice & Ice::operator=(Ice const & src)
{
	if (this != &src)
	{
		type = src.type;
	}
	//std::cout << "Ice " << type << " is assigned!" << std::endl;
	return *this;
}

AMateria* Ice::clone() const
{
	//std::cout << "Ice " << type << " is cloned!" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
