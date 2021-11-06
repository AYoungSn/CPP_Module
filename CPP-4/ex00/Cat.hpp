#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
	Cat();
	Cat(Cat const &c);
	~Cat();
	Cat &operator=(Cat const &c);
	void makeSound()const;
};

#endif