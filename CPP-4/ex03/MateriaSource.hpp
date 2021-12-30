#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource{
	private:
		AMateria *sources[4];
		int count;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &src);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif