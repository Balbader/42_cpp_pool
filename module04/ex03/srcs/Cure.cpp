#include "Cure.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
Cure::Cure() : AMateria("cure") {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Constructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------- Destructor
Cure::~Cure() {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
Cure::Cure(const Cure &rhs) {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
Cure &Cure::operator=(const Cure &rhs) {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->type_ = rhs.type_;

  return *this;
}

// -------------------------------------------------------------------- Methods
AMateria *Cure::clone() const {
  if (DEBUG)
    std::cout << YELLOW << "Cure clone initiated" << RESET << std::endl
              << std::endl;

  AMateria *cureClone = new Cure();
  *cureClone = *this;
  return cureClone;
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
}
