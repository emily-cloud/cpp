#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cstdlib>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& src);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& src);
		void makeSound() const;
		std::string getType() const;
};

#endif
