#ifndef _Character_hpp_
#define _Character_hpp_

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
# define INVENTORY_SIZE 4

class Character : public ICharacter {
private:
	std::string name;
	AMateria *inventory[INVENTORY_SIZE];
public:
	Character( void );
	Character( const Character& origin );
	Character(std::string const & new_name);
	Character& operator =(const Character& origin);

	virtual ~Character( void );

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif