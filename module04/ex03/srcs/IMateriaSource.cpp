#include "IMateriaSource.hpp"
// ---------------------------------------------------------------- Constructor
IMateriaSource::IMateriaSource() {

  if (DEBUG)
    std::cout << LMAGENTA << "IMateriaSource Base Constructor called" << RESET
              << std::endl
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
IMateriaSource::IMateriaSource(const IMateriaSource &rhs) {

  if (DEBUG)
    std::cout << LMAGENTA << "IMateriaSource Derived Copy Constructor Called"
              << RESET << std::endl
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
IMateriaSource &IMateriaSource::operator=(const IMateriaSource &rhs) {

  if (DEBUG)
    std::cout << LMAGENTA << "IMateriaSource Derived Assignment Operator Called"
              << RESET << std::endl
              << std::endl;

  if (this != &rhs)
    (void)rhs;

  return *this;
}
