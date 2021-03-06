#ifndef _AMateria_hpp_
#define _AMateria_hpp_

# include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string		_type;
public:
	AMateria( void );
	AMateria( const AMateria& origin );
	AMateria(std::string const & type);
	AMateria& operator =(const AMateria& origin);

	virtual ~AMateria( void );

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif