
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("wrong cat")
{
	std::cout << "WrongCat default constructor" << std::endl;
}
WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	std::cout << "WrongCat constructor is called, " << type << " is born!" << std::endl;
}
WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	type = src.type;
	std::cout << "Class WrongCat: " << src.type << " is copied!" << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "Class WrongCat: " << type << " is dead!" << std::endl;
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	if(this != &src)
	{
		type = src.type;
	}
	std::cout << "Class WrongCat: " << type << " is assigned!" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Class WrongCat: " << type << " make a sound: miauw miauw ..." << std::endl;
}

