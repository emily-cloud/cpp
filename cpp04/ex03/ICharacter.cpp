
#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	//std::cout << "ICharacter default constructor" << std::endl;
}
ICharacter::ICharacter(ICharacter const & src)
{
	(void)src;
	//std::cout << "ICharacter " << src.getName() << " is copied!" << std::endl;
}

ICharacter::~ICharacter()
{
	//std::cout << "ICharacter destructor called" << std::endl;
}
