#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria *invent[4];
	int count;
	Character();
public:
	Character(std::string name);
	Character(Character const &src);
	virtual ~Character();
	Character &operator=(Character const &src);
	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif