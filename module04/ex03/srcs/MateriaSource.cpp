#include "MateriaSource.hpp"

// ---------------------------------------------------------------- Constructor
MateriaSource::MateriaSource() {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Constructor Called" << RESET << std::endl;
}

// ----------------------------------------------------------------- Destructor
MateriaSource::~MateriaSource() {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Destructor Called" << RESET << std::endl;

  for (int i = 0; i < 4; ++i)
    delete inventory[i];
}

// ----------------------------------------------------------- Copy Constructor
MateriaSource::MateriaSource(const MateriaSource &rhs) {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Copy Constructor Called" << RESET << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
MateriaSource &MateriaSource::operator=(const MateriaSource *rhs) {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Assignment Operator Called" << RESET << std::endl;

  if (this != &rhs) {

  for (int i = 0; i < 4; ++i)
    delete inventory[i];

  for (int i = 0; i < 4; ++i)
    this->inventory[i] = rhs.inventory[i];

  }

  return *this;
}

// -------------------------------------------------------------------- Methods
void MateriaSource::learnMateria(AMateria *materia) {
  if (materia) {
    for (int i = 0; i < 4; i++) {
      if (inventory[i] == NULL) {
        inventory[i] = materia->clone();
      }
    }
  }
}
