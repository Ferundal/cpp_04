#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	type = "Cat";
	std::cout << "Default WrongCat constructor done." <<std::endl;
}

WrongCat::WrongCat( const WrongCat& origin) {
	type = origin.type;
	std::cout << "WrongCat copy constructor done." <<std::endl;
}

WrongCat& WrongCat::operator =(const WrongCat& origin) {
	type = origin.type;
	std::cout << "WrongCat assignation constructor done." <<std::endl;
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor done." <<std::endl;
}

std::string WrongCat::getType() const {
	return type;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat goes \"Meow\"" << std::endl;
}
