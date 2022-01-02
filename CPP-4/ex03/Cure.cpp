#include "Cure.hpp"

Cure::Cure()
:AMateria("cure")
{
}

Cure::Cure(Cure const &src)
:AMateria("cure")
{
	this->operator=(src);
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const & src)
{
	type = src.getType();
	return (*this);
}

AMateria *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}