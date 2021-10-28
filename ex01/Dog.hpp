#ifndef _Dog_hpp_
#define _Dog_hpp_

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal{
public:
	Dog( void );
	Dog( const Dog& origin);
	Dog& operator =(const Dog& origin);

	~Dog( void );

	std::string getType() const;
	void makeSound() const;
};

#endif