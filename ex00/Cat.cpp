#include "Cat.hpp"

Cat::Cat( void ) {
	type = "Cat";
	std::cout << "Default cat constructor done." <<std::endl;
}

Cat::Cat( const Cat& origin) {
	type = origin.type;
	std::cout << "Cat copy constructor done." <<std::endl;
}

Cat& Cat::operator =(const Cat& origin) {
	type = origin.type;
	std::cout << "Cat assignation constructor done." <<std::endl;
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor done." <<std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat goes \"Meow\"" << std::endl;
}
