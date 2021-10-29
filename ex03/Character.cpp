#include "Character.hpp"

Character::Character( void ) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		inventory[i] = nullptr;
	}
	std::cout << "Character deafult constructor done!" << std::endl;
}

Character::Character( const Character& origin ) {
	name = origin.name;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (origin.inventory[i] != nullptr)
			inventory[i] = origin.inventory[i]->clone();
	}
	std::cout << "Character copy constructor done!" << std::endl;
}

Character::Character(std::string const & new_name) {
	name = new_name;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		inventory[i] = nullptr;
	}
	std::cout << "Character constructor-by-string done!" << std::endl;
}
Character& Character::operator =(const Character& origin) {
	name = origin.name;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (inventory[i] != nullptr) {
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (origin.inventory[i] != nullptr)
			inventory[i] = origin.inventory[i]->clone();
	}
	std::cout << "Character assignation done!" << std::endl;
	return (*this);
}

Character::~Character( void ) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
	std::cout << "Character destructor done!" << std::endl;
}

std::string const & Character::getName() const {
	return (name);
}
void Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (inventory[i] == nullptr) {
			inventory[i] = m;
			break;
		}
	}
	std::cout << "Character equip done!" << std::endl;
}
void Character::unequip(int idx) {
	if (idx < INVENTORY_SIZE && inventory[idx] != nullptr)
		inventory[idx] = nullptr;
	std::cout << "Character unequip done!" << std::endl;
}
void Character::use(int idx, ICharacter& target) {
	if (idx < INVENTORY_SIZE) {
		if (inventory[idx] != nullptr)
			inventory[idx]->use(target);
	}
	std::cout << "Character " << name <<" just use done!" << std::endl;
}