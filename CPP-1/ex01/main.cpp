#include "Zombie.hpp"

int main()
{
	Zombie z = Zombie("zombie1");
	z.announce();
	Zombie *lst = z.zombieHorde(5, "zombieHorde");
	for(int i = 0;i<5;i++)
		lst[i].announce();
	delete[] lst;
	return (0);
}