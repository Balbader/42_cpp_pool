#include "Character.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
Character::Character() {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Constructor Called" << RESET
              << std::endl;
}

Character::Character(std::string const &name) : _name(name) {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Name Constructor Called" << RESET
              << std::endl;

  // this->_name = name;
}

// ----------------------------------------------------------------- Destructor
Character::~Character() {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Destructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; i++)
    delete inventory[i];
}

// ----------------------------------------------------------- Copy Constructor
Character::Character(const Character &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
Character &Character::operator=(const Character &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {

    for (int i = 0; i < 4; i++)
      delete inventory[i];

    for (int i = 0; i < 4; i++)
      inventory[i] = rhs.inventory[i]->clone();
  }

  return *this;
}

// -------------------------------------------------------------------- Methods
//
void Character::equip(AMateria *m) {

  for (int i = 0; i < 4; ++i) {
    if (inventory[i] == NULL && inventory[i] == m) // FIX: should this be || instead of && ?
      return;
  }

  for (int i = 0; i < 4; ++i) {
    if (inventory[i] != NULL)
      inventory[i] = m;
  }
}
void Character::unequip(int index) {
  if (inventory[index] != NULL)
    inventory[index] = NULL;
}

void Character::use(int index, ICharacter &target) {
  if (inventory[index] != NULL)
    inventory[index]->use(target);
}

// --------------------------------------------------------------------- Getter
std::string const &Character::getName() const { return this->_name; }
