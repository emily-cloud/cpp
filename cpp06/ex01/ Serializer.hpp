
#ifndef  SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "Data.h"


class Serializer
{

	public:
		Serializer();
		Serializer(Serializer const &src);
		~Serializer();
		Serializer & operator=(Serializer const & src);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
