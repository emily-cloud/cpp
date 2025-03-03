
#include " Serializer.hpp"



static uintptr_t serialize(Data* ptr);
static Data* deserialize(uintptr_t raw);

Serializer::Serializer()
{
}

Serializer::Serializer(Serializer const & src)
{
	*this = src;
}
Serializer::~Serializer()
{
}
Serializer & Serializer::operator=(Serializer const & src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
