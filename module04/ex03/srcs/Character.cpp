#include "Character.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
Character::Character() {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Constructor Called" << RESET
              << std::endl;
}

Character::Character(std::string const &name) {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Name Constructor Called" << RESET
              << std::endl;

  this->name_ = name;
}

// ----------------------------------------------------------------- Destructor
Character::~Character() {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Destructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; i++)
    delete inventory_[i];
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
      delete inventory_[i];

    for (int i = 0; i < 4; i++)
      inventory_[i] = rhs.inventory_[i]->clone();
  }

  return *this;
}

// -------------------------------------------------------------------- Methods
//
void Character::equip(AMateria *m) {

  for (int i = 0; i < 4; ++i) {
    if (inventory_[i] == NULL || inventory_[i] == m)
      return;
  }

  for (int i = 0; i < 4; ++i) {
    if (inventory_[i] != NULL)
      inventory_[i] = m;
  }
}
void Character::unequip(int i) {
  if (inventory_[i] != NULL)
    inventory_[i] = NULL;
}

void Character::use(int i, ICharacter &target) {
  if (inventory_[i] != NULL)
    inventory_[i]->use(target);
}

// --------------------------------------------------------------------- Getter
std::string const &Character::getName() const { return this->name_; }
