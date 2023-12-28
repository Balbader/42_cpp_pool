#include "Bureaucrat.hpp"
#include "Form.hpp"

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

  try {
    if (isGradeOutOfRange(grade)) {
      if (grade < 1)
        throw GradeTooHighException();
      if (grade > 150)
        throw GradeTooLowException();
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

// ----------------------------------------------------------------- Destructor
Bureaucrat::~Bureaucrat() {
  if (DEBUG)
    std::cout << RED << "Bureaucrat Base Destructor called\n"
              << RESET << std::endl;
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
    std::cout << LYELLOW << "Bureaucrat Base = Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.getName();
    this->grade_ = rhs.getGrade();
  }

  return *this;
}

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs) {
  if (DEBUG)
    std::cout << LYELLOW << "Bureaucrat Base << Assignment Operator Called"
              << RESET << std::endl;

  if (rhs.getGrade() < 1 || rhs.getGrade() > 150) {
    try {
      if (rhs.getGrade() < 1)
        throw "Exception error occured.\nGrade too high.\n";
      if (rhs.getGrade() > 150)
        throw "Exception error occured.\nGrade too low.\n";
    } catch (const char *e) {
      std::cerr << e << std::endl;
    }
  } else {
    lhs << LGREEN << rhs.getName() << RESET << ", bureaucrat grade " << LGREEN
        << rhs.getGrade() << ".\n"
        << RESET;
  }

  return lhs;
}

// -------------------------------------------------------------------- Methods
void Bureaucrat::incrementGrade() {
  if (this->grade_ < 1) {
    throw GradeTooHighException();
  }

  this->grade_ -= 1;
}

void Bureaucrat::decrementGrade() {
  if (this->grade_ > 150) {
    throw GradeTooLowException();
  }

  this->grade_ += 1;
}

int Bureaucrat::isGradeOutOfRange(int grade) {
  return (grade < 1 || grade > 150);
}

void Bureaucrat::signForm(Form form) {
  std::cout << "Bureaucrat " << LGREEN << this->getName() << RESET
            << " signed form " << LGREEN << form.get RESET << std::endl;
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
