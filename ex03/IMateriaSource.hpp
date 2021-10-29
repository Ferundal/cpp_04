#ifndef _IMateriaSource_hpp_
#define _IMateriaSource_hpp_

# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* origin) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif