#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	const Weapon &weapon;
	std::string name;
public:
	HumanA(std::string const &name, const Weapon &w);
	~HumanA();
	void attack() const;
};

#endif
