#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &w)
:weapon(w)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with this " << this->weapon.getType() << "\n";
}
