
#include "Dog.hpp"

Dog::Dog(): Animal("dog")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog constructor is called, " << type << " is born!" << std::endl;
}

Dog::Dog(const Dog& src): Animal(src)
{
	if(this != &src)
	{
		type = src.type;
	}
	std::cout << "Class Dog: " << src.type << " is copied!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Class Dog: " << type << " is dead!" << std::endl;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	if(this != &src)
	{
		type = src.type;
	}
	std::cout << "Class Dog: " << type << " is assigned!" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Class Dog: " << type << " make a sound: woof woof...." << std::endl;
}
