#ifndef _Animal_hpp_
#define _Animal_hpp_

# include <string>
# include <iostream>

class Animal {
protected:
	std::string		type;
public:
	Animal( void );
	Animal( const Animal& origin);
	Animal& operator =(const Animal& origin);

	virtual ~Animal( void );

	std::string getType() const;
	virtual void makeSound() const = 0;
	virtual bool AddIdea(const std::string &idea) = 0;
	virtual void PutIdeas() const = 0;
};

#endif