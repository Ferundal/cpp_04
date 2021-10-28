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

	void makeSound() const;
	virtual bool AddIdea(const std::string &idea);
	virtual void PutIdeas() const;
};

#endif