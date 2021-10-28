#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default Brain constructor done." <<std::endl;
}

Brain::Brain( const Brain& origin) {
	int counter = 0;
	while (!origin.ideas[counter].empty() && counter < BRAIN_SIZE) {
		ideas[counter] = origin.ideas[counter];
		++counter;
	}
	std::cout << "Brain copy constructor done." <<std::endl;
}

Brain& Brain::operator =(const Brain& origin) {
	int counter = 0;
	while (!origin.ideas[counter].empty() && counter < BRAIN_SIZE) {
		ideas[counter] = origin.ideas[counter];
		++counter;
	}
	std::cout << "Brain assignation constructor done." <<std::endl;
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor done." <<std::endl;
}

bool Brain::AddIdea(const std::string &idea) {
	int counter = 0;
	while (!ideas[counter].empty()) {
		++counter;
		if (counter == BRAIN_SIZE)
			return false;
	}
	ideas[counter] = idea;
	return true;
}

void Brain::PutIdeas() {
	int counter = 0;
	while (!ideas[counter].empty() && counter < BRAIN_SIZE) {
		std::cout << ideas[counter] << std::endl;
		++counter;
	}
}