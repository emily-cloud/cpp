
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int dog_count = 0;
	int cat_count = 0;

	const Animal* array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			dog_count++;
			std::cout << "Creating Dog[" << dog_count << "]" << std::endl;
			array[i] = new Dog();
			std::cout << std::endl;
		}
		else
		{
			cat_count++;
			std::cout << "Creating Cat[" << cat_count << "]" << std::endl;
			array[i] = new Cat();
			std::cout << std::endl;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Animal[" << i + 1 << "] is a " << array[i]->getType() << std::endl;
		array[i]->makeSound();
		std::cout << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Deleting Animal[" << i + 1 << "]: "<< array[i]->getType() << std::endl;
		delete array[i];
		std::cout << std::endl;
	}
}

