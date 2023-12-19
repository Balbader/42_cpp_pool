#include "Character.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
Character::Character() : name_("Base Clone") {
  if (DEBUG)
    std::cout << CYAN << "Character Derived Constructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; ++i)
    inventory_[i] = NULL;
}

Character::Character(std::string const &name) : name_(name) {
  if (DEBUG)
    std::cout << CYAN << "Character Derived Name Constructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; ++i)
    inventory_[i] = NULL;
}

// ----------------------------------------------------------------- Destructor
Character::~Character() {
  if (DEBUG)
    std::cout << CYAN << "Character Derived Destructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; i++)
    delete inventory_[i];
}

// ----------------------------------------------------------- Copy Constructor
Character::Character(const Character &rhs) {
  if (DEBUG)
    std::cout << CYAN << "Character Derived Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
Character &Character::operator=(const Character &rhs) {
  if (DEBUG)
    std::cout << CYAN << "Character Derived Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs) {

    this->name_ = rhs.getName();

    for (int i = 0; i < 4; ++i)
      inventory_[i] = rhs.inventory_[i]->clone();
  }
  return *this;
}

// ----------------------------------------------------------------- // Methods
void Character::equip(AMateria *m) {

  for (int i = 0; i < 4; ++i) {
    if (inventory_[i] == NULL || inventory_[i] == m)
      return;
  }

  for (int i = 0; i < 4; ++i) {
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

// ------------------------------------------------------------------// Getter
std::string const &Character::getName() const { return this->name_; }

AMateria **Character::getInventory() const { return (AMateria **)inventory_; }
