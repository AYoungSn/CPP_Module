#include "Ice.hpp"

Ice::Ice()
:AMateria("ice")
{
}

Ice::Ice(Ice const &src)
:AMateria("ice")
{
	this->operator=(src);
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &src)
{
	type = src.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}