#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
	WrongCat();
	WrongCat(const std::string type);
	WrongCat(const WrongCat &a);
	~WrongCat();
	WrongCat &operator=(const WrongCat &a);
	void makeSound() const;
};

#endif