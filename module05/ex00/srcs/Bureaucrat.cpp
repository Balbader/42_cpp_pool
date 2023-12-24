#include "Bureaucrat.hpp"

/*
 *  . Specificity: catch the most specific exception first, then more general
 * ones.
 *
 *  . Re-throwing: Sometimes, you might want to handle an exception partisally
 * and then re-throw it for further handling up the call stack.
 *
 *  . Custom Exceptions: For complex applications, you might want to define your
 * own exception classes derived from std::exception. This allows for more
 * specific error handling.
 *
 *  . Resource Management: Be mindful of resource management. Modern C++
 * recommends using RAII (Resource Acquisition Is Initialization) patterns to
 * ensure that resources (like memory, file handles, etc.) are properly released
 * even when exceptions occur. Smart pointers ("std::unique_ptr",
 * "std::shared_ptr") are often used int this context.
 */

// ---------------------------------------------------------------- Constructor
Bureaucrat::Bureaucrat() : name_("000"), grade_(0) {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Base Constructor called" << RESET
              << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : name_(name), grade_(grade) {

  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Name Base Constructor called" << RESET
              << std::endl;

  if (this->grade_ < 1)
    throw GradeTooHighException();
  else if (this->grade_ > 150)
    throw GradeTooLowException();
}

// ----------------------------------------------------------------- Destructor
Bureaucrat::~Bureaucrat() {
  if (DEBUG)
    std::cout << RED << "Bureaucrat Base Destructor called" << RESET
              << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
    : name_(rhs.getName()), grade_(rhs.getGrade()) {
  if (DEBUG)
    std::cout << GRAY << "Bureaucrat Base Copy Constructor Called" << RESET
              << std::endl;
}

// ------------------------------------------------------------------- Overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  if (DEBUG)
    std::cout << GRAY << "Bureaucrat Base = Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.getName();
    this->grade_ = rhs.getGrade();
  }

  return *this;
}

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs) {
  if (DEBUG)
    std::cout << GRAY << "Bureaucrat Base << Assignment Operator Called"
              << RESET << std::endl;

  lhs << rhs.getName() << ", bureaucrat grade " << LGREEN << rhs.getGrade()
      << ".\n"
      << RESET;

  return lhs;
}

// -------------------------------------------------------------------- Methods
void Bureaucrat::incrementGrade(int nb) {
  if (nb < 0 || nb > INT_MAX)
    std::cerr << "Error: Wrong input value\nInput Value out of range.\n";

  if ((int)this->grade_ - nb < 1)
    throw(GradeTooHighException());

  this->grade_ -= nb;
}

void Bureaucrat::decrementGrade(int nb) {
  if (nb < 0 || nb > INT_MAX)
    std::cerr << "Error: Wrong input value\nInput Value out of range.\n";

  if ((int)this->grade_ + nb < 1)
    throw(GradeTooLowException());

  this->grade_ += nb;
}

// -------------------------------------------------------------------- Setters
void Bureaucrat::setName(std::string name) { this->name_ = name; }
void Bureaucrat::setGrade(int grade) { this->grade_ = grade; }

// -------------------------------------------------------------------- Getters
const std::string &Bureaucrat::getName() const { return this->name_; }
unsigned int const &Bureaucrat::getGrade() const { return this->grade_; }
