
#include "Animal.hpp"

Animal::Animal(): type("animal")
{
	std::cout << "Animal default constructor" << std::endl;
}
 Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal constructor is called, " << type << " is born!" << std::endl;
}
Animal::Animal(const Animal& src)
{
	type = src.type;
	std::cout << "Class Animal: " << src.type << " is copied!" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Class Animal: " << type << " is dead!" << std::endl;
	std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator=(const Animal& src)
{
	if (this != &src)
	{
		type = src.type;
	}
	std::cout << "Class Animal: " << type << " is assigned!" << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Class Animal: " << type << " makes a sound!" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
