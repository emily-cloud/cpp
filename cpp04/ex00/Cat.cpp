
#include "Cat.hpp"

Cat::Cat(): Animal("cat")
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat constructor is called, " << type << " is born!" << std::endl;
}

Cat::Cat(const Cat& src): Animal(src)
{
	if(this != &src)
	{
		type = src.type;
	}
	std::cout << "Class Cat: " << src.type << " is copied!" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Class Cat:  " << type << " is dead!" << std::endl;
	std::cout << "Cat destructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& src)
{
	if(this != &src)
	{
		type = src.type;
	}
	std::cout << "Class Cat:  " << type << " is assigned!" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Class Cat:  " << type << " make a sound: miauw miauw ..." << std::endl;
}
