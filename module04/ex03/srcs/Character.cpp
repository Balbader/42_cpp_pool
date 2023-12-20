#include "Character.hpp"
#include "ICharacter.hpp"

// ---------------------------------------------------------------- Constructor
// Character::Character() : name_("Base Clone"), inventory_() {
Character::Character() : name_("Base Clone") {

  if (DEBUG)
    std::cout << CYAN << "Character Derived Constructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; ++i)
    inventory_[i] = NULL;
}

// Character::Character(std::string const &name) : name_(name), inventory_() {
Character::Character(std::string const &name) : name_(name) {

  if (DEBUG)
    std::cout << CYAN << "Character Derived Name Constructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; ++i)
    inventory_[i] = NULL;
}

// ----------------------------------------------------------------- Destructor
Character::~Character() {

  if (DEBUG)
    std::cout << CYAN << "Character Derived Destructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 4; ++i) {
    if (this->inventory_[i])
      delete this->inventory_[i];
  }
}

// ----------------------------------------------------------- Copy Constructor
Character::Character(const Character &rhs) : ICharacter(rhs), inventory_() {

  if (DEBUG)
    std::cout << CYAN << "Character Derived Copy Constructor Called" << RESET
              << std::endl;

  this->name_ = rhs.getName();

  for (int i = 0; i < 4; ++i) {
    if (rhs.inventory_[i])
      this->inventory_[i] = rhs.inventory_[i];
  }
}

// ------------------------------------------------------------------- Overload
Character &Character::operator=(const Character &rhs) {

  if (DEBUG)
    std::cout << CYAN << "Character Derived Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs) {

    this->name_ = rhs.getName();

    // for (int i = 0; i < 4; ++i)
    //   inventory_[i] = rhs.inventory_[i]->clone();
  }

  return *this;
}

// ----------------------------------------------------------------- // Methods
void Character::equip(AMateria *materia) {

  for (int i = 0; i < 4; ++i) {
    if (materia && this->inventory_[i] == NULL) {
      if (this->inventory_[i])
        this->inventory_[i] = materia->clone();
      else
        this->inventory_[i] = materia;
      std::cout << "Materia " << this->inventory_[i]->getType()
                << " has been added to " << this->name_
                << "'s inventory at index " << i << std::endl;
      return;
    }
  }

  if (materia)
    std::cout << this->name_ << "'s inventory is full" << std::endl;
  else
    std::cout << "Invalid Materia" << std::endl;

  // if (!this->inventory_ == materia)
  //   delete materia;
}

void Character::unequip(int i) {

  if (i >= 0 && i < 4 && this->inventory_[i]) {
    std::cout << this->inventory_[i] << " has been removed at index " << i
              << " from " << this->name_ << "'s inventory." << std::endl;
    this->inventory_[i] = NULL;
  } else if (i < 0 || i >= 4) {
    std::cout << "Invalid index: " << i << std::endl;
  } else {
    std::cout << "No Materia to be equiped ! Index " << i << " is empty."
              << std::endl;
  }
}

void Character::use(int i, ICharacter &target) {
  if (i >= 0 && i < 4 && this->inventory_[i]) {
    this->inventory_[i]->use(target);
  } else if (i < 0 || i >= 4) {
    std::cout << "Invalid index: " << i << std::endl;
  } else {
    std::cout << "No Materia to be equiped ! Index " << i << " is empty."
              << std::endl;
  }
}

int Character::inInventory(AMateria *materia) {

  for (int i = 0; i < 4; ++i) {
    if (this->inventory_[i] == materia)
      return 1;
  }
  return 0;
}

// ------------------------------------------------------------------// Setter
void Character::setName(std::string const &name) { this->name_ = name; }

// ------------------------------------------------------------------// Getter
std::string const &Character::getName() const { return this->name_; }
