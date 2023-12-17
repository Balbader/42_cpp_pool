#include "WrongAnimal.hpp"

// ---------------------------------------------------------------- Constructor
WrongAnimal::WrongAnimal() {
  if (DEBUG)
    std::cout << std::endl
              << LGRAY << "WrongAnimal Derived Default Constructor Called"
              << RESET << std::endl;

  this->_type = "Wrong Animal";
}

// ----------------------------------------------------------------- Destructor
WrongAnimal::~WrongAnimal() {
  if (DEBUG)
    std::cout << LGRAY << "WrongAnimal Base Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
WrongAnimal::WrongAnimal(const WrongAnimal &rhs) : Animal() {
  if (DEBUG)
    std::cout << LGRAY << "WrongAnimal Base Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  if (DEBUG)
    std::cout << LGRAY << "WrongAnimal Base Destructor Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->_type = rhs._type;

  return *this;
}

// -------------------------------------------------------------------- Methods
void WrongAnimal::makeSound() const {
  std::cout << LGRAY << "WrongAnimal sound!" << RESET << std::endl;
}

// -------------------------------------------------------------------- Getters
std::string WrongAnimal::getType() const { return this->_type; }
