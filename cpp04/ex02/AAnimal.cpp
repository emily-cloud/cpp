
#include "AAnimal.hpp"

AAnimal::AAnimal(): type("animal")
{
	std::cout << "AAnimal default constructor" << std::endl;
}
 AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "AAnimal constructor is called, " << type << " is born!" << std::endl;
}
AAnimal::AAnimal(const AAnimal& src)
{
	type = src.type;
	std::cout << "Class AAnimal: " << src.type << " is copied!" << std::endl;
}
AAnimal::~AAnimal()
{
	std::cout << "Class AAnimal: " << type << " is dead!" << std::endl;
	std::cout << "AAnimal destructor called" << std::endl;
}
AAnimal& AAnimal::operator=(const AAnimal& src)
{
	if (this != &src)
	{
		type = src.type;
	}
	std::cout << "Class AANimal: " << type << " is assigned!" << std::endl;
	return *this;
}

std::string AAnimal::getType() const
{
	return type;
}
