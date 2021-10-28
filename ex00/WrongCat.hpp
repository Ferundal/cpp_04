#ifndef _WrongCat_hpp_
#define _WrongCat_hpp_

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	WrongCat( const WrongCat& origin);
	WrongCat& operator =(const WrongCat& origin);

	~WrongCat( void );

	std::string getType() const;
	void makeSound() const;
};

#endif