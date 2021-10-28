#include "Dog.hpp"

Dog::Dog( void ) {
	type = "Dog";
	std::cout << "Default dog constructor done." <<std::endl;
}

Dog::Dog( const Dog& origin) {
	type = origin.type;
	std::cout << "Dog copy constructor done." <<std::endl;
}

Dog& Dog::operator =(const Dog& origin) {
	type = origin.type;
	std::cout << "Dog assignation constructor done." <<std::endl;
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor done." <<std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog goes \"Woof\"" << std::endl;
}
