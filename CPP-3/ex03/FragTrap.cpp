#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hitPoint = 100;
	energyPoint = 100;
	attackDamge = 30;
	std::cout << "FragTrap <"<< this->name << "> Constructor\n";
	printStatus();
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	hitPoint = 100;
	energyPoint = 100;
	attackDamge = 30;
	std::cout << "FragTrap <"<< this->name << "> Constructor\n";
	printStatus();
}

FragTrap::FragTrap(const FragTrap &frag)
{
	this->name = frag.name;
	this->hitPoint = frag.hitPoint;
	this->energyPoint = frag.energyPoint;
	this->attackDamge = frag.attackDamge;
	std::cout << "FragTrap <"<< this->name << "> copy Constructor\n";
	printStatus();
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor\n";
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
	std::cout << "FragTrap assignation operator overload\n";
	this->name = frag.name;
	this->hitPoint = frag.hitPoint;
	this->energyPoint = frag.energyPoint;
	this->attackDamge = frag.attackDamge;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "[Let's HighFives!]\n";
}