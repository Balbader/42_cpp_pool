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
Cure::Cure(const Cure &rhs) : AMateria(rhs) {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Copy Constructor Called" << RESET
              << std::endl;
}

// ------------------------------------------------------------------- Overload
Cure &Cure::operator=(const Cure &rhs) {
  if (DEBUG)
    std::cout << YELLOW << "Cure Derived Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs)
    AMateria::operator=(rhs);

  return *this;
}

// -------------------------------------------------------------------- Methods
AMateria *Cure::clone() const {
  if (DEBUG)
    std::cout << YELLOW << "Cure clone initiated" << RESET << std::endl;

  return new Cure();
}

void Cure::use(ICharacter &target) {
  std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
}
