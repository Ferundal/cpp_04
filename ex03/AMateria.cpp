#include "AMateria.hpp"
#include <iostream>

class ICharacter;

AMateria::AMateria( void ) {
	std::cout << "AMateria deafult constructor done!" << std::endl;
}
AMateria::AMateria( const AMateria& origin ) {
	_type = origin._type;
	std::cout << "AMateria copy constructor done!" << std::endl;
}
AMateria::AMateria(std::string const & type) {
	_type = type;
	std::cout << "AMateria constructor-by-string done!" << std::endl;
}

AMateria& AMateria::operator =(const AMateria& origin) {
	_type = origin._type;
	std::cout << "AMateria assignation done!" << std::endl;
	return (*this);
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destructor done!" << std::endl;
}

std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "* abstract noises in " << target.getName() << " direction *" <<std::endl;
}