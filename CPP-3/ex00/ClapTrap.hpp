#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamge;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clap);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &clap);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void printStatus();
};

#endif