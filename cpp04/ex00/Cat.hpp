
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& src);
		~Cat();
		Cat& operator=(const Cat& src);
		void makeSound() const;
};

#endif
