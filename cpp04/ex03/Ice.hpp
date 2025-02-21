
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(Ice const & src);
		~Ice();
		Ice & operator=(Ice const & src);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
