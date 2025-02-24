
#include "Dog.hpp"

Dog::Dog(): AAnimal("dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string type): AAnimal(type)
{
	brain = new Brain();
	std::cout << "Dog constructor is called, " << type << " is born!" << std::endl;
}

Dog::Dog(const Dog& src): AAnimal(src)
{
	if(this != &src)
	{
		type = src.type;
		brain = new Brain(*src.brain);
	}
	std::cout << "Class Dog: " << src.type << " is copied!" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Class Dog: " << type << " is dead!" << std::endl;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	if(this != &src)
	{
		type = src.type;
		delete brain;
		brain = new Brain(*src.brain);
	}
	std::cout << "Class Dog: " << type << " is assigned!" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Class Dog: " << type << " make a sound: woof woof...." << std::endl;
}
