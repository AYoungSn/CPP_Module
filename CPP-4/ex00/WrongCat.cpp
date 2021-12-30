#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string type)
{
	std::cout << "WrongCat Constructor\n";
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &a)
{
	std::cout << "WrongCat Constructor\n";
	operator=(a);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor\n";
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
	this->type = a.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat animal\n";
}