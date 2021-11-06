#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "No name";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamge = 20;
	std::cout << "ScavTrap <" << name << "> Constructor\n";
	printStatus();
}

ScavTrap::ScavTrap(const std::string name)
:ClapTrap(name)
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamge = 20;
	std::cout << "ScavTrap <" << name << "> Constructor\n";
	printStatus();
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	operator=(scav);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	this->name = s.name;
	this->attackDamge = s.attackDamge;
	this->energyPoint = s.energyPoint;
	this->hitPoint = s.hitPoint;
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	if (energyPoint > 0) {
		energyPoint -= 10;
	}
	std::cout << "<" << name << "> attacks " << target << ", causing "
	<< attackDamge << " points of damage!\n";
	printStatus();
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode.\n";
	printStatus();
}
