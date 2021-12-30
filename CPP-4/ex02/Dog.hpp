#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
	Brain *brain;
	public:
	Dog();
	Dog(const std::string type);
	Dog(const Dog &d);
	~Dog();
	Dog &operator=(const Dog &d);
	Brain *getBrain(void) const;
	virtual void makeSound() const;
};

#endif