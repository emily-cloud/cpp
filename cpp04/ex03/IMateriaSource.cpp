
#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	//std::cout << "IMateriaSource default constructor" << std::endl;
}
IMateriaSource::IMateriaSource(IMateriaSource const & src)
{
	(void)src;
	//std::cout << "IMateriaSource " << src.getName() << " is copied!" << std::endl;
}

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & src)
{
	(void)src;
	//std::cout << "IMateriaSource " << src.getName() << " is assigned!" << std::endl;
	return *this;
}

IMateriaSource::~IMateriaSource()
{
	//std::cout << "IMateriaSource destructor called" << std::endl;
}
