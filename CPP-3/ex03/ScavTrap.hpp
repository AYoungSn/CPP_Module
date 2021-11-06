#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &scav);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &s);
	void attack(std::string const &target);
	void guardGate();
};

#endif