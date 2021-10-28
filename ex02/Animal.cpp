#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Default animal constructor done." <<std::endl;
	type = "unknown type";
}

Animal::Animal( const Animal& origin) {
	std::cout << "Animal copy constructor done." <<std::endl;
	type = origin.type;
}

Animal& Animal::operator =(const Animal& origin) {
	std::cout << "Animal assignation constructor done." <<std::endl;
	type = origin.type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor done." <<std::endl;
}

std::string Animal::getType() const {
	return type;
}
