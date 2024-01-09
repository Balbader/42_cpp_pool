#include "Serialization.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
Serialization::Serialization() {
  if (DEBUG)
    std::cout << GREEN << "Serialization Base Constructor called"
			  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
Serialization::Serialization(const Serialization& rhs) {
  if (DEBUG)
    std::cout << GREEN << "Serialization Copy Constructor called"
			  << RESET << std::endl;

	*this = rhs;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
Serialization::~Serialization() {
  if (DEBUG)
    std::cout << GREEN << "ScalarConverter destructor called"
			  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
Serialization& Serialization::operator=(const Serialization& rhs) {
  if (DEBUG)
    std::cout << GREEN << "ScalarConverter assignment operator called"
			  << RESET << std::endl;

    (void)rhs;

    return (*this);
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
uintptr_t Serialization::serialize(Data* ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }
Data* Serialization::deserialize(uintptr_t raw) { return (reinterpret_cast<Data*>(raw)); }
