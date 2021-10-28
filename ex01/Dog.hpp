#ifndef _Dog_hpp_
#define _Dog_hpp_

# include <string>
# include <iostream>
# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain *dog_brain_ptr;
public:
	Dog( void );
	Dog( const Dog& origin);
	Dog& operator =(const Dog& origin);

	~Dog( void );

	std::string getType() const;
	void makeSound() const;
	bool AddDogIdea(const std::string &idea);
	void PutDogIdeas();
};

#endif