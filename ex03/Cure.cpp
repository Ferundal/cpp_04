#include "Cure.hpp"
#include <iostream>

Cure::Cure( void ) : AMateria::AMateria ("cure") {
	std::cout << "Cure deafult constructor done!" << std::endl;
}

Cure::Cure( const Cure& origin ) : AMateria::AMateria (origin){
	std::cout << "Cure copy constructor done!" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria::AMateria (type) {
	std::cout << "Cure constructor-by-string done!" << std::endl;
}
Cure& Cure::operator =(const Cure& origin) {
	_type = origin._type;
	std::cout << "Cure assignation done!" << std::endl;
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor done!" << std::endl;
}

Cure* Cure::clone() const {
	Cure *cure_ptr = new Cure(*this);
	std::cout << "Ice clone done!" << std::endl;
	return (cure_ptr);
}
void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" <<std::endl;
}