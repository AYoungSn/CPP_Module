#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << "\n";
	std::cout << i->getType() << "\n";
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();

	// std::cout << i->getType() << "\n";
	// i->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete i;
}