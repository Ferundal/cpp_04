#ifndef _Cat_hpp_
#define _Cat_hpp_

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {
public:
	Cat( void );
	Cat( const Cat& origin);
	Cat& operator =(const Cat& origin);

	~Cat( void );

	void makeSound() const;
};

#endif