#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	type = "unknown type";
	std::cout << "Default WrongAnimal constructor done." <<std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& origin) {
	type = origin.type;
	std::cout << "WrongAnimal copy constructor done." <<std::endl;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& origin) {
	type = origin.type;
	std::cout << "WrongAnimal assignation constructor done." <<std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor done." <<std::endl;
}

std::string WrongAnimal:: getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal too abstract to talk." << std::endl;
}
