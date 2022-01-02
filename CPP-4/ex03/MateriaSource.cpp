#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4;i++) {
		sources[i] = 0;
	}
	count = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4;i++) {
		sources[i] = src.sources[i];
	}
	count = src.count;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < count;i++) {
		delete sources[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	for (int i = 0; i < count;i++) {
		delete sources[i];
		sources[i] = 0;
	}
	for (int i = 0; i < src.count;i++) {
		sources[i] = src.sources[i]->clone();
	}
	count = src.count;
	return *this;
}

void MateriaSource::learnMateria(AMateria* src)
{
	if (count >= 4 || !src)
		return ;
	sources[count++] = src;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < count; i++)
	{
		if (sources[i]->getType() == type)
			return sources[i]->clone();
	}
	return 0;
}