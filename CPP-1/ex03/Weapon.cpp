#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(std::string const &type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string const &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string t)
{
	this->type = t;
}