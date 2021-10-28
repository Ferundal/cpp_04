#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default cat constructor done." <<std::endl;
	type = "Cat";
}

Cat::Cat( const Cat& origin) {
	std::cout << "Cat copy constructor done." <<std::endl;
	type = origin.type;
}

Cat& Cat::operator =(const Cat& origin) {
	std::cout << "Cat assignation constructor done." <<std::endl;
	type = origin.type;
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor done." <<std::endl;
}

std::string Cat::getType() const {
	return type;
}

void Cat::makeSound() const{
	std::cout << "Cat goes \"Meow\"" << std::endl;
}
