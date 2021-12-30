#include "Cat.hpp"

Cat::Cat()
:Animal("Cat")
{
	std::cout <<"Cat Constructor\n";
}

Cat::Cat(Cat const &c)
:Animal("Cat")
{
	std::cout << "Cat constructor\n";
	this->brain = new Brain(*c.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat Destructor\n";
	delete this->brain;
}

Cat &Cat::operator=(Cat const &c)
{
	Animal::operator=(c);
	Brain *copy = new Brain(*c.getBrain());
	delete this->brain;
	this->brain = copy;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Myaaaa 🐈`\n";
}

Brain *Cat::getBrain(void) const {
	return this->brain;
}