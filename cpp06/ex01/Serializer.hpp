
#ifndef  SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "Data.hpp"

class Serializer
{

	public:
		Serializer();
		Serializer(Serializer const &src);
		~Serializer();
		Serializer & operator=(Serializer const & src);

		static unsigned long serialize(Data* ptr);
		static Data* deserialize(unsigned long raw);
};

#endif
