#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const Animal a();

	delete j;
	delete i;
	system("leaks a.out");
}