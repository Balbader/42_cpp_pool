#include "Bureaucrat.hpp"
#include "Form.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
Bureaucrat::Bureaucrat(std::string name) : grade_(10) {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Base Constructor called" << RESET
              << std::endl;

  if (name == "")
    this->name_ = "Name undefined";
  else
    this->name_ = name;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
    : name_(name), grade_(grade) {

    if (DEBUG)
        std::cout << GREEN << "Bureaucrat Arguments Base Constructor called"
                  << RESET << std::endl;

    if (isGradeOutOfRange(grade)) {
        try {
          if (grade < 1)
            throw GradeTooHighException();
          if (grade > 150)
            throw GradeTooLowException();
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    } else {
        this->grade_ = grade;
    }
}

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
Bureaucrat::~Bureaucrat() {
  if (DEBUG)
    std::cout << RED << "Bureaucrat Base Destructor called"
              << RESET << std::endl;
}

// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
    : name_(rhs.getName()), grade_(rhs.getGrade()) {
  if (DEBUG)
    std::cout << GRAY << "Bureaucrat Base Copy Constructor Called" << RESET
              << std::endl;
}

// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  if (DEBUG)
    std::cout << LYELLOW << "Bureaucrat Base = Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.name_;
    this->grade_ = rhs.grade_;
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
    lhs << "Bureaucrat " << LGREEN << rhs.getName() << RESET << ", bureaucrat grade " << LGREEN
        << rhs.getGrade() << RESET <<".\n\n";
  }

  return lhs;
}

// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
void Bureaucrat::incrementGrade() {
  if (this->grade_ < 1) {
    std::cout << "\n";
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
  try {
    // Will call the beSigned() function in the Form Class
    form.beSigned(*this);
  } catch (std::exception &e) {
    std::cerr << "Bureaucrat " << this->name_ << " couldn't sign "
              << form.getName() << " because " << e.what();
  }
}

// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Setters
// ----------------------------------------------------------------------------
void Bureaucrat::setName(std::string name) { this->name_ = name; }

void Bureaucrat::setGrade(int grade) {
  if (grade < 1 || grade > 150)
    std::cerr << "Error: Grade input out of range" << std::endl;

  this->grade_ = grade;
}

// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Getters
// ----------------------------------------------------------------------------
std::string Bureaucrat::getName() const { return this->name_; }
int Bureaucrat::getGrade() const { return this->grade_; }
