#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap aa("aa");
	ScavTrap bb("bbcc");
	ScavTrap cc = bb;
	FragTrap dd("dd");
	FragTrap ee("eeff");
	FragTrap ff = ee;

	cc.attack("aa");
	aa.takeDamage(20);
	cc.attack("bbcc");
	bb.takeDamage(20);
	bb.beRepaired(5);

	ff.attack("dd");
	dd.takeDamage(30);
	ff.attack("eeff");
	ee.takeDamage(30);
	ee.beRepaired(3);

	cc.guardGate();
	ff.highFivesGuys();

	return 0;
}