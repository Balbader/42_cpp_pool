#include "Form.hpp"
#include "Bureaucrat.hpp"

// ---------------------------------------------------------------- Constructor
Form::Form(std::string name) : gradeToExec_(10), gradeToSign_(10) {
  if (DEBUG)
    std::cout << ORANGE << "Form base constructor called" << RESET << "\n";

  if (name == "")
    this->name_ = "Name undefined";
  else
    this->name_ = name;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec)
    : name_(name), gradeToSign_(gradeToSign), gradeToExec_(gradeToExec) {
  if (DEBUG)
    std::cout << ORANGE << "Form base with args constructor called" << RESET
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
Form::Form(const Form &rhs)
    : name_(rhs.getName()), gradeToExec_(rhs.getGradeToExec()),
      gradeToSign_(rhs.getGradeToSign()) {
  if (DEBUG)
    std::cout << ORANGE << "Form Base Copy Constructor Called" << RESET
              << std::endl;
}

// --=-------------------------------------------------------------- Destructor
Form::~Form() {
  if (DEBUG)
    std::cout << ORANGE << "Form base destructor called" << RESET << std::endl;
}

// ------------------------------------------------------------------- Overload
Form &Form::operator=(const Form &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Form Base = Assignment Operator Called" << RESET
              << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.getName();
    this->gradeToExec_ = rhs.getGradeToExec();
    this->gradeToSign_ = rhs.getGradeToSign();
  }

  return *this;
}

std::ostream &operator<<(std::ostream &lhs, Form const &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Form Base << Assignment Operator Called"
              << RESET << std::endl;

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
    lhs << "Form " << LGREEN << rhs.getName() << RESET
        << ", created with a grade of " << LGREEN << rhs.getGradeToSign()
        << RESET << ".\n\n";
  }

  return lhs;
}

// -------------------------------------------------------------------=- Method
void Form::beSigned(Bureaucrat const &rhs) {
  if (rhs.getGrade() < 1 || rhs.getGrade() > 150) {
    std::cout << "Form " << LGREEN << this->getName() << RESET
              << " couldn't be signed by " << LGREEN << rhs.getName() << RESET
              << " due to a wrong grade : " << LGREEN << this->getGradeToSign() << RESET
              << "." << std::endl;
  }
  else {
    std::cout << "Form " << LGREEN << this->getName() << RESET
              << " was signed by " << LGREEN << rhs.getName() << RESET
              << " with a grade of " << LGREEN << this->getGradeToSign() << RESET
              << "." << std::endl;
  }
}

// -------------------------------------------------------------------- Setters
void Form::setName(std::string name) { this->name_ = name; }

void Form::setGrade(int grade) {
  if (grade < 1 || grade > 150)
    std::cerr << "Error: Grade input out of range" << std::endl;

  this->gradeToSign_ = grade;
  this->gradeToExec_ = grade;
}

// -------------------------------------------------------------------- Getters
const std::string &Form::getName() const { return this->name_; }
int const &Form::getGradeToExec() const { return this->gradeToExec_; }
int const &Form::getGradeToSign() const { return this->gradeToSign_; }
