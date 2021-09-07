#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	const Weapon *weapon;
	std::string name;
public:
	HumanB(std::string const &name);
	~HumanB();

	void setWeapon(const Weapon &weapon);
	void attack() const;
};

#endif
