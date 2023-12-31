#include "Cat.hpp"

// ---------------------------------------------------------------- Constructor
Cat::Cat() : Animal() {
  if (DEBUG)
    std::cout << ORANGE << "Cat Derived Default Constructor Called" << RESET
              << std::endl;

  this->_type = "Cat";
}

// ----------------------------------------------------------------- Destructor
Cat::~Cat() {
  if (DEBUG)
    std::cout << ORANGE << "Cat Derived Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
Cat::Cat(const Cat &rhs) : Animal() {
  if (DEBUG)
    std::cout << ORANGE << "Cat Derived Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
Cat &Cat::operator=(const Cat &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Cat Derived Destructor Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->_type = rhs._type;

  return *this;
}

// -------------------------------------------------------------------- Methods
void Cat::makeSound() const {
  std::cout << ORANGE << "Meeeeooooowwww" << RESET << std::endl;
}
