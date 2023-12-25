#include "Bureaucrat.hpp"

// ---------------------------------------------------------------- Constructor
Bureaucrat::Bureaucrat() : name_("000"), grade_(0) {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Base Constructor called" << RESET
              << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
    : name_(name), grade_(grade) {

  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Arguments Base Constructor called"
              << RESET << std::endl;

  isGradeOutOfRange(grade);
}

// ----------------------------------------------------------------- Destructor
Bureaucrat::~Bureaucrat() {
  if (DEBUG)
    std::cout << RED << "\nBureaucrat Base Destructor called" << RESET
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
void Bureaucrat::incrementGrade() {
  if (this->grade_ < 1)
    throw(GradeTooHighException("Error: Wrong input. Grade too high."));

  this->grade_ -= 1;
}

void Bureaucrat::decrementGrade() {
  if (this->grade_ > 150)
    throw(GradeTooLowException("Error: Wrong input. Grade too low."));

  this->grade_ += 1;
}

void Bureaucrat::isGradeOutOfRange(int grade) {
  if (grade < 1 || grade > 150) {
    try {
      if (grade < 1)
        throw GradeTooHighException("Error: Wrong input. Grade too high.");
      else if (grade > 150)
        throw GradeTooLowException("Error: Wrong input. Grade too low.");
    }
    catch (const Bureaucrat& e) {
      if (grade < 1)
        throw GradeTooHighException("Error: Wrong input. Grade too high.");
      else if (grade < 150)
        throw GradeTooLowException("Error: Wrong input. Grade too low.");
    }
  }
}

// -------------------------------------------------------------------- Setters
void Bureaucrat::setName(std::string name) { this->name_ = name; }

void Bureaucrat::setGrade(int grade) {
  if (grade < 1 || grade > 150)
    std::cerr << "Error: Grade input out of range" << std::endl;

  this->grade_ = grade;
}

// -------------------------------------------------------------------- Getters
const std::string &Bureaucrat::getName() const { return this->name_; }
unsigned int const &Bureaucrat::getGrade() const { return this->grade_; }
