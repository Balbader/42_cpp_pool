#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat() {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Base Constructor called" << RESET
              << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : name_(name), grade_(grade) {

  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Name Base Constructor called" << RESET
              << std::endl;

  int err = -1;

  try {
    if (grade < 1 || grade > 150)
      throw err;
  } catch (err) {
    std::cerr << RED << err << RESET << std::endl;
  }
}

// Destructor
Bureaucrat::~Bureaucrat() {
  if (DEBUG)
    std::cout << RED << "Bureaucrat Base Destructor called" << RESET
              << std::endl;
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &rhs) {
  if (DEBUG)
    std::cout << GRAY << "Bureaucrat Base Copy Constructor Called" << RESET
              << std::endl;

  *this = rhs;
}

// Overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  if (DEBUG)
    std::cout << GRAY << "Bureaucrat Base Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.getName();
    this->grade_ = rhs.getGrade();
  }

  return *this;
}

// Setters
void Bureaucrat::setName(std::string name) { this->name_ = name; }
void Bureaucrat::setGrade(int grade) { this->grade_ = grade; }

// Getters
std::string Bureaucrat::getName() const { return this->name_; }
int Bureaucrat::getGrade() const { return this->grade_; }
