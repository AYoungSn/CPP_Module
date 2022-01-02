#include "AMateria.hpp"

AMateria::AMateria() {
	type = "none";
}

AMateria::AMateria(std::string const &type) {
	for (int i = 0;i < (int)type.size(); i++) {
		this->type += tolower(type[i]);
	}
}

AMateria::AMateria(const AMateria &src)
{
	this->operator=(src);
}

AMateria::~AMateria() {
}

AMateria &AMateria::operator=(const AMateria &src)
{
	this->type = src.getType();
	return *this;
}

std::string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "AMateria: " << target.getName() << " use\n";
}