#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: public AMateria {
	public:
	Ice();
	Ice(Ice const &src);
	~Ice();
	Ice &operator=(Ice const &src);
	AMateria *clone() const;
	void use(ICharacter& target);
};

#endif