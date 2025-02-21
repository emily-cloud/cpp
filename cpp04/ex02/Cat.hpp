
#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& src);
		~Cat();
		Cat& operator=(const Cat& src);
		void makeSound() const; // override;

	private:
		Brain* brain;
};

#endif
