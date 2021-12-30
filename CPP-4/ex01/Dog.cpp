#include "Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
	std::cout << "Dog Constructor\n";
	this->brain = new Brain();
}

Dog::Dog(const std::string type)
:Animal(type)
{
	std::cout << "Dog Constructor\n";
	this->brain = new Brain();
}

Dog::Dog(const Dog &d)
:Animal("Dog")
{
	std::cout << "Dog Constructor\n";
	this->brain = new Brain(*d.getBrain());
}

Dog::~Dog()
{
	std::cout << "Dog Destructor\n";
	delete this->brain;
}

Dog &Dog::operator=(const Dog &d)
{
	Animal::operator=(d);
	Brain *copy = new Brain(*d.getBrain());
	delete this->brain;
	this->brain = copy;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Mung Mung 🐶\n";
}

Brain *Dog::getBrain(void) const {
	return this->brain;
}