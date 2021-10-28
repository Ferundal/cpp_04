#include "Dog.hpp"

Dog::Dog( void ) {
	type = "Dog";
	dog_brain_ptr = new Brain;
	std::cout << "Default dog constructor done." <<std::endl;
}

Dog::Dog( const Dog& origin) {
	type = origin.type;
	dog_brain_ptr = new Brain(*origin.dog_brain_ptr);
	std::cout << "Dog copy constructor done." <<std::endl;
}

Dog& Dog::operator =(const Dog& origin) {
	type = origin.type;
	delete dog_brain_ptr;
	dog_brain_ptr = new Brain(*origin.dog_brain_ptr);
	std::cout << "Dog assignation constructor done." <<std::endl;
	return *this;
}

Dog::~Dog( void ) {
	delete dog_brain_ptr;
	std::cout << "Dog destructor done." <<std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog goes \"Woof\"" << std::endl;
}

bool Dog::AddDogIdea(const std::string &idea) {
	return (dog_brain_ptr->AddIdea(idea));
}

void Dog::PutDogIdeas() {
	dog_brain_ptr->PutIdeas();
}