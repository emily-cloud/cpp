
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/*int dog_count = 0;
	int cat_count = 0;

	const AAnimal* array[10];
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
		std::cout << "AAnimal[" << i + 1 << "] is a " << array[i]->getType() << std::endl;
		array[i]->makeSound();
		std::cout << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Deleting AAnimal[" << i + 1 << "]: "<< array[i]->getType() << std::endl;
		delete array[i];
		std::cout << std::endl;
	}*/

	//test copy constructor is deep copy or shallow copy
	Dog dog1("dog1");
	Dog dog2(dog1);

	return 0;

}

