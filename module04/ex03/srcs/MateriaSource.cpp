#include "MateriaSource.hpp"

// ---------------------------------------------------------------- Constructor
MateriaSource::MateriaSource() {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Constructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------- Destructor
MateriaSource::~MateriaSource() {
  if (DEBUG)
    std::cout << std::endl
              << MAGENTA << "MateriaSource Derived Destructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; i++) {
    delete inventory_[i];
  }
}

// ----------------------------------------------------------- Copy Constructor
MateriaSource::MateriaSource(const MateriaSource &rhs) {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Copy Constructor Called"
              << RESET << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {

    for (int i = 0; i < 4; i++)
      delete inventory_[i];

    for (int i = 0; i < 4; i++)
      this->inventory_[i] = rhs.inventory_[i]->clone();
  }

  return *this;
}

// -------------------------------------------------------------------- Methods
void MateriaSource::learnMateria(AMateria *inventory) {
  if (inventory) {
    for (int i = 0; i < 4; i++) {
      inventory_[i] = inventory->clone();
    }
  }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
  for (int i = 0; i < 4; i++) {
    if (inventory_[i] != NULL) {
      if (inventory_[i]->getType() == type)
        return inventory_[i]->clone();
    }
  }
  return NULL;
}
