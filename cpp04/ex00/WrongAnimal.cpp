
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("wrong animal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "WrongAnimal constructor is called, " << type << " is born!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	type = src.type;
	std::cout << "Class WrongAnimal: " << src.type << " is copied!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Class WrongAnimal: " << type << " is dead!" << std::endl;
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if(this != &src)
	{
		type = src.type;
	}

	std::cout << "Class WrongAnimal: " << type << " is assigned!" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Class WrongAnimal: " << type << " makes a sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
