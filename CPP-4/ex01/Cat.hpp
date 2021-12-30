#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
	Brain *brain;
	public:
	Cat();
	Cat(Cat const &c);
	~Cat();
	Cat &operator=(Cat const &c);
	Brain *getBrain(void) const;
	virtual void makeSound()const;
};

#endif