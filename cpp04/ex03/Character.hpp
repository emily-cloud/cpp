
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string const &name);
		Character(Character const & src);
		~Character();
		Character & operator=(Character const & src);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string name;
		AMateria* materia[4];
};

#endif

