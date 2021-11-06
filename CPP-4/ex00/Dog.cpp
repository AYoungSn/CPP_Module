#include "Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
	std::cout << "Dog Constructor\n";
}

Dog::Dog(const std::string type)
:Animal(type)
{
	std::cout << "Dog Constructor\n";
}

Dog::Dog(const Dog &d)
:Animal("Dog")
{
	std::cout << "Dog Constructor\n";
	operator=(d);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor\n";
}

Dog &Dog::operator=(const Dog &d)
{
	Animal::operator=(d);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Mung Mung\n";
}