#include "AAForm.hpp"

// ---------------------------------------------------------------- Constructor
AForm::AForm() : name_("Name undefined") gradeToExec_(10), gradeToSign_(10) {
  if (DEBUG)
    std::cout << ORANGE << "AForm base constructor called" << RESET << "\n";
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec)
    : name_(name), gradeToSign_(gradeToSign), gradeToExec_(gradeToExec) {
  if (DEBUG)
    std::cout << ORANGE << "AForm base with args constructor called" << RESET
              << "\n";

  try {
    if (gradeToExec_ < 1 || gradeToSign_ < 1)
      throw GradeTooHighException();
    if (gradeToExec_ > 150 || gradeToSign_ > 150)
      throw GradeTooLowException();
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

// ----------------------------------------------------------- Copy Constructor
AForm::AForm(const AForm &rhs)
    : name_(rhs.getName()), gradeToExec_(rhs.getGradeToExec()),
      gradeToSign_(rhs.getGradeToSign()) {
  if (DEBUG)
    std::cout << ORANGE << "AForm Base Copy Constructor Called" << RESET
              << std::endl;
}

// --=-------------------------------------------------------------- Destructor
AForm::~AForm() {
  if (DEBUG)
    std::cout << ORANGE << "AForm base destructor called" << RESET << std::endl;
}

// ------------------------------------------------------------------- Overload
AForm &AForm::operator=(const AForm &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "AForm Base = Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.getName();
    this->gradeToExec_ = rhs.getGradeToExec();
    this->gradeToSign_ = rhs.getGradeToSign();
  }

  return *this;
}

std::ostream &operator<<(std::ostream &lhs, AForm const &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "AForm Base << Assignment Operator Called" << RESET
              << std::endl;

  if ((rhs.getGradeToExec() < 1 || rhs.getGradeToExec() > 150) ||
      (rhs.getGradeToSign() < 1 || rhs.getGradeToSign() > 150)) {
    try {
      if (rhs.getGradeToSign() < 1 || rhs.getGradeToExec() < 1)
        throw "Exception error occured.\nGrade too high.\n";
      if (rhs.getGradeToSign() > 150 || rhs.getGradeToExec() > 150)
        throw "Exception error occured.\nGrade too low.\n";
    } catch (const char *e) {
      std::cerr << e << std::endl;
    }
  } else {
    lhs << "AForm " << LGREEN << rhs.getName() << RESET
        << ", created with a grade of " << LGREEN << rhs.getGradeToSign()
        << RESET << ".\n\n";
  }

  return lhs;
}

// -------------------------------------------------------------------=- Method
void AForm::beSigned(Bureaucrat const &rhs) {
  if ((rhs.getGrade() < 1 || rhs.getGrade() > 150) ||
      (this->gradeToSign_ < 1 || this->gradeToSign_ > 150) ||
      (this->gradeToExec_ < 1 || this->gradeToExec_ > 150)) {
    std::cout << "AForm " << LGREEN << this->getName() << RESET
              << " couldn't be signed by " << LGREEN << rhs.getName() << RESET
              << " due to a wrong grade : " << LGREEN << this->getGradeToSign()
              << RESET << "." << std::endl;
  } else {
    std::cout << "AForm " << LGREEN << this->getName() << RESET
              << " was signed by " << LGREEN << rhs.getName() << RESET
              << " with a grade of " << LGREEN << this->getGradeToSign()
              << RESET << "." << std::endl;
  }
}

// -------------------------------------------------------------------- Setters
void AForm::setName(std::string name) { this->name_ = name; }

void AForm::setGrade(int grade) {
  if (grade < 1 || grade > 150)
    std::cerr << "Error: Grade input out of range" << std::endl;

  this->gradeToSign_ = grade;
  this->gradeToExec_ = grade;
}

// -------------------------------------------------------------------- Getters
const std::string &AForm::getName() const { return this->name_; }
int const &AForm::getGradeToExec() const { return this->gradeToExec_; }
int const &AForm::getGradeToSign() const { return this->gradeToSign_; }
