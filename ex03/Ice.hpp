#ifndef _Ice_hpp_
#define _Ice_hpp_

# include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice( void );
	Ice( const Ice& origin );
	Ice(std::string const & type);
	Ice& operator =(const Ice& origin);

	virtual ~Ice( void );

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif