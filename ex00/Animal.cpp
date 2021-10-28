#include "Animal.hpp"

Animal::Animal( void ) {
	type = "unknown type";
	std::cout << "Default animal constructor done." <<std::endl;
}

Animal::Animal( const Animal& origin) {
	type = origin.type;
	std::cout << "Animal copy constructor done." <<std::endl;
}

Animal& Animal::operator =(const Animal& origin) {
	type = origin.type;
	std::cout << "Animal assignation constructor done." <<std::endl;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor done." <<std::endl;
}

std::string Animal:: getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Animal too abstract to talk." << std::endl;
}
