#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called\n";
	this->name = "No name";
	ClapTrap::name = "No name_clap_name";
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamge = FragTrap::attackDamge;
	printStatus();
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap <" << name << "> Constructor\n";
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	attackDamge = FragTrap::attackDamge;
	printStatus();
}

DiamondTrap::DiamondTrap(const DiamondTrap &d)
{
	std::cout << "DiamondTrap copy constructor\n";
	operator=(d);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
	std::cout << "DiamondTrap assignation operator overload\n";
	name = d.name;
	ClapTrap::name = d.ClapTrap::name;
	hitPoint = d.hitPoint;
	energyPoint = d.energyPoint;
	attackDamge = d.attackDamge;
	return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
	std::cout << "DiamondTrap attack\n";
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "name: " << name << "\n";
	std::cout << "claptrap name: " << ClapTrap::name << "\n\n"; 
}