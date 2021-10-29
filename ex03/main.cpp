#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#define ANIMAL_ARRAY_SIZE 2

int main() {
	std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
	{
		Ice _ice;
		Cure _cure;
		Character _character;
		MateriaSource _materiasource;
	}
	std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
	{
		Ice _ice (*new Ice());
		Cure _cure (*new Cure());
		Character _character(*new Character());
		MateriaSource _materiasource(*new MateriaSource());
	}
	std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
	{
		Ice *_ice = new Ice();
		Cure *_cure = new Cure();
		MateriaSource _materiasource;
		_materiasource.learnMateria(_ice);
		_materiasource.learnMateria(_cure);
		delete _ice;
		delete _cure;
		AMateria *pointer = _materiasource.createMateria("ice");
		std::cout << pointer <<std::endl;
		AMateria *pointer_null = _materiasource.createMateria("lolwhut");
		std::cout << pointer_null <<std::endl;
		delete pointer;
	}
	std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
	{
		int counter = 0;
		MateriaSource _ms;
		_ms.learnMateria(new Ice ());
		_ms.learnMateria(new Cure ());
		std::cout << counter++ << "*---------------------------------------" << std::endl;
		Character _me ("Me");
		_me.equip(_ms.createMateria("ice"));
		_me.equip(_ms.createMateria("cure"));
		_me.use(0, _me);
		_me.use(1, _me);
		std::cout << counter++ << "*---------------------------------------" << std::endl;
		Character _me_again ("Me Again");
		_me_again.equip(_ms.createMateria("cure"));
		_me_again.use(0, _me);
		std::cout << counter++ << "*---------------------------------------" << std::endl;
		_me_again = _me;
		std::cout << counter++ << "*---------------------------------------" << std::endl;
		_me_again.use(0, _me);
	}
	std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << "*+++++++++++++++++++++++++++++++++++" << std::endl;
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		return 0;
	}
}