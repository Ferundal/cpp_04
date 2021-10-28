#ifndef _Brain_hpp_
#define _Brain_hpp_

# include <string>
# include <iostream>
# define BRAIN_SIZE 100

class Brain {
private:
	std::string	ideas[BRAIN_SIZE];
public:
	Brain( void );
	Brain( const Brain& origin);
	Brain& operator =(const Brain& origin);

	~Brain( void );

	bool AddIdea(const std::string &idea);
	void PutIdeas();
};

#endif