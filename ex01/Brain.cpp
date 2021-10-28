#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default cat constructor done." <<std::endl;
	type = "Cat";
}

Brain::Brain( const Cat& origin) {
	std::cout << "Cat copy constructor done." <<std::endl;
	type = origin.type;
}

Brain& Brain::operator =(const Cat& origin) {
	std::cout << "Cat assignation constructor done." <<std::endl;
	type = origin.type;
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "Cat destructor done." <<std::endl;
}