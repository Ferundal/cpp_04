#ifndef _Brain_hpp_
#define _Brain_hpp_

# include <string>
# include <iostream>

class Brain {
public:
	Brain( void );
	Brain( const Brain& origin);
	Brain& operator =(const Brain& origin);

	~Brain( void );
};

#endif