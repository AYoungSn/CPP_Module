#include "HumanB.hpp"

HumanB::HumanB(std::string const &name)
:weapon(NULL)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack() const
{
	std::cout << this->name << " attacks with this " << this->weapon->getType() << "\n";
}
