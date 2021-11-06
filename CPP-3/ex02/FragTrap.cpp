#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hitPoint = 100;
	energyPoint = 100;
	attackDamge = 30;
	std::cout << "ClapTrap <"<< this->name << "> Constructor\n";
	printStatus();
}

FragTrap::FragTrap(const std::string name)
:ClapTrap(name)
{
	hitPoint = 100;
	energyPoint = 100;
	attackDamge = 30;
	std::cout << "ClapTrap <"<< this->name << "> Constructor\n";
	printStatus();
}

FragTrap::FragTrap(const FragTrap &f)
{
	*this = f;
}

FragTrap::~FragTrap()
{
	std::cout << "ClapTrap Destructor\n";
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
	name = frag.name;
	hitPoint = frag.hitPoint;
	energyPoint = frag.energyPoint;
	attackDamge = frag.attackDamge;
	printStatus();
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "highFivesGuys\n";
}