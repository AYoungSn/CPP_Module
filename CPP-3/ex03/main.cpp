#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dia("yoahn");

	dia.attack("kim");
	dia.guardGate();
	dia.highFivesGuys();
	dia.whoAmI();

	ClapTrap *cla = new DiamondTrap("cla");
	cla->attack("kim");
	delete cla;
}