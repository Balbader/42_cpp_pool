#include "Character.hpp"

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

  this->_name = name;
}

// ----------------------------------------------------------------- Destructor
Character::~Character() {
  if (DEBUG)
    std::cout << ORANGE << "Character Derived Destructor Called" << RESET
              << std::endl;
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
// virtual void use(ICharacter &)
// {

// }

// --------------------------------------------------------------------- Getter
std::string const &Character::getType() const { return this->type_; }
