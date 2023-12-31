#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

// ---------------------------------------------------------------- Constructor
PresidentialPardonForm::PresidentialPardonForm() {
  if (DEBUG)
    std::cout << MAGENTA << "PresidentialPardonForm base constructor called"
              << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) {
  if (DEBUG)
    std::cout << MAGENTA << "PresidentialPardonForm args derived constructor called"
              << RESET << std::endl;
}

// ----------------------------------------------------------------- Destructor
~PresidentialPardonForm::PresidentialPardonForm() {
  if (DEBUG)
    std::cout << MAGENTA << "PresidentialPardonForm derived destructor called"
              << RESET << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const Bureaucrat &rhs) {
  if (DEBUG)
    std::cout << MAGENTA << "PresidentialPardonForm derived copy constructor called"
              << RESET << std::endl;
  if (*this != rhs)

}

// ------------------------------------------------------------------- Overload

// -------------------------------------------------------------------- Methods

// -------------------------------------------------------------------- Setters

// -------------------------------------------------------------------- Getters
