#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Default WrongCat constructor done." <<std::endl;
	type = "Cat";
}

WrongCat::WrongCat( const WrongCat& origin) {
	std::cout << "WrongCat copy constructor done." <<std::endl;
	type = origin.type;
}

WrongCat& WrongCat::operator =(const WrongCat& origin) {
	std::cout << "WrongCat assignation constructor done." <<std::endl;
	type = origin.type;
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
