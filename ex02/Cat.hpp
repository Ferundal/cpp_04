#ifndef _Cat_hpp_
#define _Cat_hpp_

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *cat_brain_ptr;
public:
	Cat( void );
	Cat( const Cat& origin);
	Cat& operator =(const Cat& origin);

	~Cat( void );

	void makeSound() const;
	virtual bool AddIdea(const std::string &idea);
	virtual void PutIdeas() const;
};

#endif