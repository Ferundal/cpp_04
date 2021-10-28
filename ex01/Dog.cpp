#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default dog constructor done." <<std::endl;
	type = "Dog";
}

Dog::Dog( const Dog& origin) {
	std::cout << "Dog copy constructor done." <<std::endl;
	type = origin.type;
}

Dog& Dog::operator =(const Dog& origin) {
	std::cout << "Dog assignation constructor done." <<std::endl;
	type = origin.type;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor done." <<std::endl;
}

std::string Dog::getType() const{
	return type;
}

void Dog::makeSound() const {
	std::cout << "Dog goes \"Woof\"" << std::endl;
}
