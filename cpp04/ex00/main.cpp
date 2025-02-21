
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

//below is wronganimal class
const WrongAnimal* Wrong = new WrongAnimal();
const WrongAnimal* Cat = new WrongCat();

std::cout << Cat->getType() << " " << std::endl;

Cat->makeSound(); //will output the cat sound!
Wrong->makeSound();

delete meta;
delete j;
delete i;
delete Wrong;
delete Cat;

return 0;
}
