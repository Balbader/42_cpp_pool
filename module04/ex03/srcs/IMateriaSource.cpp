#include "IMateriaSource.hpp"
// ---------------------------------------------------------------- Constructor
IMateriaSource::IMateriaSource() {

  if (DEBUG)
    std::cout << LMAGENTA << "IMateriaSource Base Constructor called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
IMateriaSource::IMateriaSource(const IMateriaSource &rhs) {

  if (DEBUG)
    std::cout << LMAGENTA << "IMateriaSource Derived Copy Constructor Called"
              << RESET << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
IMateriaSource &operator=(const IMateriaSource &rhs) {

  if (DEBUG)
    std::cout << LMAGENTA << "IMateriaSource Derived Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {
    // this->name_ = rhs.getName();
    (void)rhs;
  }

  return *this;
}
