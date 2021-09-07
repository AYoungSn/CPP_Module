#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << ">" << " Died...\n";
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ...\n";
}

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	return z;
}

void Zombie::randomChump(std::string name)
{
	Zombie z = Zombie(name);
	z.announce();
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
