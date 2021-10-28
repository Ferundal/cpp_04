#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Default WrongAnimal constructor done." <<std::endl;
	type = "unknown type";
}

WrongAnimal::WrongAnimal( const WrongAnimal& origin) {
	std::cout << "WrongAnimal copy constructor done." <<std::endl;
	type = origin.type;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& origin) {
	std::cout << "WrongAnimal assignation constructor done." <<std::endl;
	type = origin.type;
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
