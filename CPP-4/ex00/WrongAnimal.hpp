#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
	std::string type;
	public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal &a);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &a);

	std::string const &getType() const;
	void makeSound() const;
};

#endif