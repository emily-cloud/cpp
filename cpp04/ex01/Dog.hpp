
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& src);
		~Dog();
		Dog& operator=(const Dog& src);
		void makeSound() const;

	private:
		Brain* brain;
};

#endif
