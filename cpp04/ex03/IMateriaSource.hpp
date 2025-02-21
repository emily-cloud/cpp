
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class AMateria;

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource();
		IMateriaSource(IMateriaSource const & src);
		IMateriaSource & operator=(IMateriaSource const & src);
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
