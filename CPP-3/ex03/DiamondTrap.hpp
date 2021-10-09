#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"

class DiamondTrap: public ClapTrap {
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &d);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &d);
	
};

#endif