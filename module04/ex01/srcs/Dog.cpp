#include "Dog.hpp"

// ---------------------------------------------------------------- Constructor
Dog::Dog() : Animal() {
  if (DEBUG)
    std::cout << LYELLOW << "Dog Derived Default Constructor Called" << RESET
              << std::endl;

  this->_type = "Dog";
  this->_brain = new Brain();
}

// ----------------------------------------------------------------- Destructor
Dog::~Dog() {
  delete _brain;

  if (DEBUG)
    std::cout << LYELLOW << "Dog Derived Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
Dog::Dog(const Dog &rhs) : Animal() {
  if (DEBUG)
    std::cout << LYELLOW << "Dog Derived Copy Constructor Called" << RESET
              << std::endl;

  _brain = new Brain();
  *this = rhs;
}

// ------------------------------------------------------------------- Overload
Dog &Dog::operator=(const Dog &rhs) {
  if (DEBUG)
    std::cout << LYELLOW << "Dog Derived Destructor Called" << RESET
              << std::endl;

  if (this != &rhs) {
    this->_type = rhs._type;
    delete this->_brain;
    this->_brain = new Brain;
    for (int i = 0; i < 100; i++)
      this->_brain->getIdea(i) = rhs._brain->getIdea(i);
  }

  return *this;
}

// -------------------------------------------------------------------- Methods
void Dog::makeSound() const {
  std::cout << std::endl << "Wouf Wouf" << std::endl;
}

// -------------------------------------------------------------------- Getter
Brain *Dog::getBrain() { return _brain; }
