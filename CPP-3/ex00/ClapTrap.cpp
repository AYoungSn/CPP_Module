#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "no name";
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamge = 0;
	std::cout << "ClapTrap <"<< this->name << "> Constructor\n";
	printStatus();
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamge = 0;
	std::cout << "ClapTrap <"<< this->name << "> Constructor\n";
	printStatus();
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	operator=(clap);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	this->name = clap.name;
	this->hitPoint = clap.hitPoint;
	this->energyPoint = clap.energyPoint;
	this->attackDamge = clap.attackDamge;
	printStatus();
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	if (energyPoint > 0) {
		energyPoint -= 10;
	}
	std::cout << "ClapTrap <" << name << "> attacks <" << target << ">, causing <"
	<< attackDamge << "> points of damage!\n";
	printStatus();
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint > 0){
		hitPoint -= amount;
	}
	std::cout << "<" << name << "> took " << amount << " damage\n";
	printStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hitPoint += amount;
	std::cout << "ClapTrap <" << this->name << "> repaired " << amount << " Hitpoints\n";
	printStatus();
}

void ClapTrap::printStatus()
{
	std::cout << "HitPoints: " << hitPoint;
	std::cout << "\nEnergy points: " << energyPoint;
	std::cout << "\nAttack damage: " << attackDamge << "\n";
}