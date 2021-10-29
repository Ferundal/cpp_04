#ifndef _Cure_hpp_
#define _Cure_hpp_

# include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure( void );
	Cure( const Cure& origin );
	Cure(std::string const & type);
	Cure& operator =(const Cure& origin);

	virtual ~Cure( void );

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif