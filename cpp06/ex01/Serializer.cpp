
#include "Serializer.hpp"


Serializer::Serializer()
{
}

Serializer::Serializer(Serializer const & src)
{
	(void)src;
}
Serializer::~Serializer()
{
}
Serializer & Serializer::operator=(Serializer const & src)
{
	(void)src;
	return (*this);
}

unsigned long Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(unsigned long raw)
{
	return reinterpret_cast<Data*>(raw);
}
