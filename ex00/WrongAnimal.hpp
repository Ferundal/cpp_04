#ifndef _WrongAnimal_hpp_
#define _WrongAnimal_hpp_

# include <string>
# include <iostream>

class WrongAnimal {
protected:
	std::string		type;
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& origin);
	WrongAnimal& operator =(const WrongAnimal& origin);

	~WrongAnimal( void );

	std::string getType() const;
	void makeSound() const;
};

#endif