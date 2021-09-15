#include "ScavTrap.hpp"

int main()
{
	ScavTrap yoahn("yoahn");

	yoahn.attack("mocha");
	yoahn.takeDamage(10);
	yoahn.beRepaired(10);

	return 0;
}