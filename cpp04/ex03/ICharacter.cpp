
#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	//std::cout << "ICharacter default constructor" << std::endl;
}
ICharacter::ICharacter(ICharacter const & src)
{
	*this = src;
	//std::cout << "ICharacter " << src.getName() << " is copied!" << std::endl;
}

ICharacter & ICharacter::operator=(ICharacter const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	//std::cout << "ICharacter " << src.getName() << " is assigned!" << std::endl;
	return *this;
}

ICharacter::~ICharacter()
{
	//std::cout << "ICharacter destructor called" << std::endl;
}
