#include "ClapTrap.hpp"

int main()
{
	ClapTrap yoahn("yoahn");

	yoahn.attack("mocha");
	yoahn.takeDamage(10);
	yoahn.beRepaired(10);

	return 0;
}