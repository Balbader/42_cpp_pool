#include "MateriaSource.hpp"

// ---------------------------------------------------------------- Constructor
MateriaSource::MateriaSource() : learningInventory_() {
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
    if (this->learningInventory_[i])
      delete learningInventory_[i];
  }
}

// ----------------------------------------------------------- Copy Constructor
MateriaSource::MateriaSource(const MateriaSource &rhs)
    : IMateriaSource(rhs), learningInventory_() {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Copy Constructor Called"
              << RESET << std::endl;

  for (int i = 0; i < 4; ++i) {
    if (rhs.learningInventory_[i])
      this->learningInventory_[i] = rhs.learningInventory_[i];
  }
}

// ------------------------------------------------------------------- Overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
  if (DEBUG)
    std::cout << MAGENTA << "MateriaSource Derived Assignment Operator Called"
              << RESET << std::endl;

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
      std::cout << "Materia " << this->learningInventory_[i]->getType()
                << " has been added to " << this->name_
                << "'s inventory at index " << i << std::endl;
      return;
    }
  }

  if (materia)
    std::cout << this->name_ << "'s inventory is full" << std::endl;
  else
    std::cout << "Invalid Materia" << std::endl;

  if (!this->learningInventory_(materia))
    delete materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
  for (int i = 0; i < 4; ++i) {
    if (this->learningInventory_[i] &&
        this->learningInventory_[i]->getType() == type)
      return this->learningInventory_[i]->clone();
  }
}

int MateriaSource::inLearningInventory(AMateria *materia) {
  for (int i = 0; i < 4; ++i) {
    if (this->learningInventory_[i] == materia)
      return 1;
  }
  return 0;
}
