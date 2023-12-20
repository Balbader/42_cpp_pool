#include "MateriaSource.hpp"

// ---------------------------------------------------------------- Constructor
MateriaSource::MateriaSource() : learningInventory_() {

  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Constructor Called" << RESET
              << std::endl
              << std::endl;
}

// ----------------------------------------------------------------- Destructor
MateriaSource::~MateriaSource() {

  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Destructor Called" << RESET
              << std::endl
              << std::endl;

  for (int i = 0; i < 4; i++) {
    if (this->learningInventory_[i])
      delete learningInventory_[i];
  }
}

// ----------------------------------------------------------- Copy Constructor
MateriaSource::MateriaSource(const MateriaSource &rhs)
    : IMateriaSource(rhs), learningInventory_() {

  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Copy Constructor Called"
              << RESET << std::endl
              << std::endl;

  for (int i = 0; i < 4; ++i) {
    if (rhs.learningInventory_[i])
      this->learningInventory_[i] = rhs.learningInventory_[i];
  }
}

// ------------------------------------------------------------------- Overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {

  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Assignment Operator Called"
              << RESET << std::endl
              << std::endl;

  if (this != &rhs) {
    (void)rhs;
  }

  return *this;
}

// -------------------------------------------------------------------- Methods
void MateriaSource::learnMateria(AMateria *materia) {

  for (int i = 0; i < 4; ++i) {
    if (materia && this->learningInventory_[i] == NULL) {
      if (this->inLearningInventory(materia)) {
        this->learningInventory_[i] = materia;
      } else {
        this->learningInventory_[i] = materia;
      }
      if (DEBUG)
        std::cout << "Materia " << this->learningInventory_[i]->getType()
                  << " has been added to inventory at index " << i << std::endl
                  << std::endl;
      return;
    }
  }

  if (materia) {
    if (DEBUG)
      std::cout << "Full Inventory. No add possible." << std::endl << std::endl;
  } else {
    if (DEBUG)
      std::cout << "Invalid Materia" << std::endl << std::endl;
  }
}

AMateria *MateriaSource::createMateria(const std::string &type) {

  for (int i = 0; i < 4; ++i) {
    if (this->learningInventory_[i] &&
        this->learningInventory_[i]->getType() == type)
      return this->learningInventory_[i]->clone();
  }

  if (DEBUG)
    std::cout << "No materia add due to invalid type." << std::endl
              << std::endl;

  return 0;
}

int MateriaSource::inLearningInventory(AMateria *materia) {

  for (int i = 0; i < 4; ++i) {
    if (this->learningInventory_[i] == materia)
      return 1;
  }

  return 0;
}
