#include "Brain.hpp"
#include <sstream>
#include <string>

// ---------------------------------------------------------------- Constructor
Brain::Brain() {
  if (DEBUG)
    std::cout << LRED << "Brain Derived Default Constructor Called" << RESET
              << std::endl;

  for (int i = 0; i < 100; ++i) {
    std::stringstream tmp;
    tmp << i;
    this->ideas[i] = tmp.str();
    // std::cout << std::endl << "Idea #" << ideas[i] << std::endl;
  }

  std::cout << std::endl << "A 100 ideas array has been created." << std::endl;
}

// ----------------------------------------------------------------- Destructor
Brain::~Brain() {
  if (DEBUG)
    std::cout << LRED << "Brain Derived Destructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
Brain::Brain(const Brain &rhs) {
  if (DEBUG)
    std::cout << LRED << "Brain Derived Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// ------------------------------------------------------------------- Overload
Brain &Brain::operator=(const Brain &rhs) {
  if (DEBUG)
    std::cout << LRED << "Brain Derived Destructor Called" << RESET
              << std::endl;

  if (this != &rhs) {
    for (int i = 0; i < 10; i++)
      this->ideas[i] = rhs.ideas[i];
  }

  return *this;
}

// -------------------------------------------------------------------- Methods
std::string Brain::getIdea(int i) const { return this->ideas[i]; }
