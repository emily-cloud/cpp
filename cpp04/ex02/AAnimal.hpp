
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cstdlib>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& src);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& src);
		virtual void makeSound() const = 0; // pure virtual function
		std::string getType() const;
};

#endif
