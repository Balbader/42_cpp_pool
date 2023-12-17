#include "Cure.hpp"

// ---------------------------------------------------------------- Constructor
Cure::Cure() {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Constructor Called" << RESET
              << std::endl;
}

Cure::Cure(std::string type) {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Name Constructor Called" << RESET
              << std::endl;

  this->type_ = type;
}

// ----------------------------------------------------------------- Destructor
Cure::~Cure() {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
// Cure::Cure(const Cure &rhs) {
//   if (DEBUG)
//     std::cout << YELLOW << "Cure Derived Copy Constructor Called" << RESET
//               << std::endl;

//   *this = rhs;
// }

// ------------------------------------------------------------------- Overload
Cure &Cure::operator=(const Cure &rhs) {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->type_ = rhs.type_;

  return *this;
}

// --------------------------------------------------------------------- Getter
// std::string const &Cure::getType() const { return this->type_; }
