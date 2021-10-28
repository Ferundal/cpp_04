#include "Cat.hpp"

Cat::Cat( void ) {
	type = "Cat";
	cat_brain_ptr = new Brain;
	std::cout << "Default cat constructor done." <<std::endl;
}

Cat::Cat( const Cat& origin) {
	type = origin.type;
	cat_brain_ptr = new Brain(*origin.cat_brain_ptr);
	std::cout << "Cat copy constructor done." <<std::endl;
}

Cat& Cat::operator =(const Cat& origin) {
	type = origin.type;
	delete cat_brain_ptr;
	cat_brain_ptr = new Brain(*origin.cat_brain_ptr);
	std::cout << "Cat assignation constructor done." <<std::endl;
	return *this;
}

Cat::~Cat( void ) {
	delete cat_brain_ptr;
	std::cout << "Cat destructor done." <<std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat goes \"Meow\"" << std::endl;
}

bool Cat::AddIdea(const std::string &idea) {
	return (cat_brain_ptr->AddIdea(idea));
}

void Cat::PutIdeas() const {
	cat_brain_ptr->PutIdeas();
}