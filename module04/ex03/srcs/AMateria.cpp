#include "AMateria.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
AMateria::AMateria() {
  if (DEBUG)
    std::cout << GREEN << "AMateria Base Constructor Called" << RESET
              << std::endl;
}

AMateria::AMateria(std::string const &type) {
  if (DEBUG)
    std::cout << GREEN << "AMateria Base Name Constructor Called" << RESET
              << std::endl;

  this->type_ = type;
}

// ----------------------------------------------------------------- Destructor
AMateria::~AMateria() {
  if (DEBUG)
    std::cout << GREEN << "AMateria Base Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
AMateria::AMateria(const AMateria &rhs) {
  if (DEBUG)
    std::cout << GREEN << "AMateria Base Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
AMateria &AMateria::operator=(const AMateria &rhs) {
  if (DEBUG)
    std::cout << GREEN << "AMateria Base Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->type_ = rhs.type_;

  return *this;
}

// -------------------------------------------------------------------- Methods
// virtual void use(ICharacter &)
// {

// }

// --------------------------------------------------------------------- Getter
std::string const &AMateria::getType() const { return this->type_; }
