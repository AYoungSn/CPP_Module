#include "Character.hpp"

Character::Character(std::string name)
{
	count = 0;
	this->name = name;
	for (int i = 0; i < 4;i++) {
		invent[i] = 0;
	}
}

Character::Character(Character const &src)
{
	this->operator=(src);
}

Character::~Character()
{
	for (int i = 0;i < count;i++)
		delete invent[i];
}

Character &Character::operator=(Character const &src)
{
	this->name = src.getName();
	for (int i = 0;i < count; i++)
		delete invent[i];
	this->count = src.count;
	for (int i = 0; i < src.count; i++)
		invent[i] = src.invent[i]->clone();
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m || count >= 4)
		return ;
	for (int i = 0; i < count; i++)
	{
		if (invent[i] == m)
			return ;
	}
	invent[count++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !invent[idx])
		return ;
	invent[idx] = 0;
	for (int i = idx + 1;i < 4;i++)
		invent[i - 1] = invent[i];
	invent[3] = 0;
	count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= count || idx < 0 || !invent[idx])
		return ;
	invent[idx]->use(target);
}