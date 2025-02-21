
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cstdlib>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& src);
		virtual ~Animal();
		Animal& operator=(const Animal& src);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
