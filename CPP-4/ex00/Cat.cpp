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
	operator=(c);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor\n";
}

Cat &Cat::operator=(Cat const &c)
{
	Animal::operator=(c);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Myaaaa\n";
}