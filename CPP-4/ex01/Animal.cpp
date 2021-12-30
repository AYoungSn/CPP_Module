#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor\n";
	this->type = "none";
}

Animal::Animal(const std::string type)
{
	std::cout << "Animal Constructor\n";
	this->type = type;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal Constructor\n";
	operator=(a);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}

Animal &Animal::operator=(const Animal &a)
{
	this->type = a.type;
	return (*this);
}

std::string const &Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal animal\n";
}