#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) {
		materia_types[i] = nullptr;
	}
	std::cout << "MateriaSource deafult constructor done!" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& origin ) {
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) {
		if (origin.materia_types[i] != nullptr)
			materia_types[i] = origin.materia_types[i]->clone();
	}
	std::cout << "MateriaSource copy constructor done!" << std::endl;
}

MateriaSource& MateriaSource::operator =(const MateriaSource& origin) {
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) {
		if (origin.materia_types[i] != nullptr) {
			delete materia_types[i];
			materia_types[i] = origin.materia_types[i]->clone();
		}
	}
	std::cout << "MateriaSource assignation done!" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) {
		if (materia_types[i] != nullptr)
			delete materia_types[i];
	}
	std::cout << "MateriaSource destructor done!" << std::endl;
}

void MateriaSource::learnMateria(AMateria* origin) {
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) {
		if (materia_types[i] == nullptr) {
			materia_types[i] = origin->clone();
			break;
		}
	}
	std::cout << "MateriaSource learnMateria done!" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	AMateria* ret_val = nullptr;
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) {
		if (materia_types[i] != nullptr && (materia_types[i]->getType() == type)) {
			ret_val = materia_types[i]->clone();
			break;
		}
	}
	std::cout << "MateriaSource createMateria done!" << std::endl;
	return ret_val;
}