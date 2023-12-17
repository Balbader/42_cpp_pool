#include "AMateria.hpp"

// ---------------------------------------------------------------- Constructor
AMateria::AMateria() {
  if (DEBUG)
    std::cout << "AMateria Base Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
  if (DEBUG)
    std::cout << "AMateria Base Name Constructor Called" << std::endl;

  this->type_ = type;
}

// ----------------------------------------------------------------- Destructor
AMateria::~AMateria() {
  if (DEBUG)
    std::cout << "AMateria Base Destructor Called" << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
AMateria::AMateria(const AMateria &rhs) {
  if (DEBUG)
    std::cout << "AMateria Base Copy Constructor Called" << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
AMateria &AMateria::operator=(const AMateria &rhs) {
  if (DEBUG)
    std::cout << "AMateria Base Assignment Operator Called" << std::endl;

  if (this != &rhs)
    this->type_ = rhs.type_;

  return *this;
}

// --------------------------------------------------------------------- Getter
std::string const &AMateria::getType() const { return this->type_; }
