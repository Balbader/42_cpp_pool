#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
ICharacter::ICharacter() {

  if (DEBUG)
    std::cout << LMAGENTA << "ICharacter Base Constructor called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
ICharacter::ICharacter(const ICharacter &rhs) {

  if (DEBUG)
    std::cout << LMAGENTA << "ICharacter Derived Copy Constructor Called"
              << RESET << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
ICharacter &operator=(const ICharacter &rhs) {

  if (DEBUG)
    std::cout << LMAGENTA << "ICharacter Derived Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {
    // this->name_ = rhs.getName();
    (void)rhs;
  }

  return *this;
}
