#include "AMateria.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
AMateria::AMateria() {
  if (DEBUG)
    std::cout << LGREEN << "AMateria Base Constructor Called" << RESET
              << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type) {
  if (DEBUG)
    std::cout << LGREEN << "AMateria Base Name Constructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------- Destructor
AMateria::~AMateria() {
  if (DEBUG)
    std::cout << LGREEN << "AMateria Base Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
AMateria::AMateria(const AMateria &rhs) {
  if (DEBUG)
    std::cout << LGREEN << "AMateria Base Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
AMateria &AMateria::operator=(const AMateria &rhs) {
  if (DEBUG)
    std::cout << LGREEN << "AMateria Base Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs)
    this->type_ = rhs.getType();

  return *this;
}

// -------------------------------------------------------------------- Methods
// void AMateria::use(ICharacter &target) {
//   std::cout << RED << target.getName() << " is being used :(" << RESET
//             << std::endl;
// }

// --------------------------------------------------------------------- Getter
std::string const &AMateria::getType() const { return this->type_; }
