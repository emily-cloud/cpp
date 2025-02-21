
#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : virtual public AAnimal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& src);
		~Dog();
		Dog& operator=(const Dog& src);
		void makeSound() const; // override;

	private:
		Brain* brain;
};

#endif
