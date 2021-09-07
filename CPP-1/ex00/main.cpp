#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie z = Zombie("zombiee");
	z.announce();

	Zombie *n1 = z.newZombie("new1");
	n1->announce();

	z.randomChump("hello");
	n1->randomChump("random");
	delete n1;
	return (0);
}