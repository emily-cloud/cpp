
#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class AMateria;
#include <string>
#include <iostream>

class ICharacter
{
	public:
		ICharacter();
		ICharacter(ICharacter const & src);
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		ICharacter & operator=(ICharacter const & src);
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
