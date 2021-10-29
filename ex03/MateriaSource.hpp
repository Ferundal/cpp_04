#ifndef _MateriaSource_hpp_
#define _MateriaSource_hpp_

#include <iostream>
# include "IMateriaSource.hpp"
# define MATERIASOURCE_SIZE 4

class MateriaSource : public IMateriaSource{
private:
	AMateria *materia_types[MATERIASOURCE_SIZE];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& origin );
	MateriaSource& operator =(const MateriaSource& origin);

	virtual ~MateriaSource( void );
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif