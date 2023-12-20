#include "Ice.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
Ice::Ice() : AMateria("ice") {
  if (DEBUG)
    std::cout << LBLUE << "Ice Derived Constructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------- Destructor
Ice::~Ice() {
  if (DEBUG)
    std::cout << LBLUE << "Ice Derived Destructor Called" << RESET << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
Ice::Ice(const Ice &rhs) : AMateria(rhs) {
  if (DEBUG)
    std::cout << LBLUE << "Ice Derived Copy Constructor Called" << RESET
              << std::endl;
}

// ------------------------------------------------------------------- Overload
Ice &Ice::operator=(const Ice &rhs) {
  if (DEBUG)
    std::cout << LBLUE << "Ice Derived Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->type_ = rhs.type_;

  return *this;
}

// -------------------------------------------------------------------- Methods
AMateria *Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
