#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &frag);
	virtual ~FragTrap();
	FragTrap &operator=(const FragTrap &frag);
	void highFivesGuys(void);
};

#endif
