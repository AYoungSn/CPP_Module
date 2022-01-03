#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const Animal a();

	std::cout << j->getType() << "\n";
	std::cout << i->getType() << "\n";

	i->makeSound();
	j->makeSound();
	
	delete j;
	delete i;
	system("leaks a.out");
}