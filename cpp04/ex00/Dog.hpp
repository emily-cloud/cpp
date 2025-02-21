
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& src);
		~Dog();
		Dog& operator=(const Dog& src);
		void makeSound() const;
};

#endif
