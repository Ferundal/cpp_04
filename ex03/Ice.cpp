#include "Ice.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria::AMateria ("ice") {

	std::cout << "Ice deafult constructor done!" << std::endl;
}

Ice::Ice( const Ice& origin ) : AMateria::AMateria (origin){
	std::cout << "Ice copy constructor done!" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria::AMateria (type) {
	std::cout << "Ice constructor-by-string done!" << std::endl;
}
Ice& Ice::operator =(const Ice& origin) {
	_type = origin._type;
	std::cout << "Ice assignation done!" << std::endl;
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor done!" << std::endl;
}

Ice* Ice::clone() const {
	Ice *ice_ptr = new Ice(*this);
	std::cout << "Ice clone done!" << std::endl;
	return (ice_ptr);
}
void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}