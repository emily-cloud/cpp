
#include "Serializer.hpp"


int main()
{
	Data* data = new Data;
	data->n = 42;
	data->f = 42.42f;
	data->d = 42.4242;
	data->c = 'a';

	std::cout << "Original Data:" << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "f: " << data->f << std::endl;
	std::cout << "d: " << data->d << std::endl;
	std::cout << "c: " << data->c << std::endl;
	std::cout << "address: "<< data <<std::endl;

	uintptr_t serialized = Serializer::serialize(data);
	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Deserialized Data:" << std::endl;
	std::cout << "n: " << deserialized->n << std::endl;
	std::cout << "f: " << deserialized->f << std::endl;
	std::cout << "d: " << deserialized->d << std::endl;
	std::cout << "c: " << deserialized->c << std::endl;
	std::cout << "address: "<< deserialized <<std::endl;

	return 0;


}
