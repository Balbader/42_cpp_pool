#include "Form.hpp"

// ---------------------------------------------------------------- Constructor
Form::Form() {
  if (DEBUG)
    std::cout << ORANGE << "Form base constructor called" << RESET << "\n";
}

Form::Form(std::string name, int grade)
    : name_(name), gradeToSign_(grade), gradeToExec_(grade) {
  if (DEBUG)
    std::cout << ORANGE << "Form base with args constructor called" << RESET
              << "\n";

  try {
    if (isGradeOutOfRange(gradeToSign_) || isGradeOutOfRange(gradeToExec_)) {
      if (gradeToExec_ < 1 || gradeToSign_ < 1)
        throw GradeTooHighException();
      if (gradeToExec_ > 150 || gradeToSign_ > 150)
        throw GradeTooLowException();
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

// ----------------------------------------------------------- Copy Constructor
Form::Form(const Form &rhs)
    : name_(rhs.getName()), gradeToExec_(rhs.getGradeToExec())
    , gradeToSign_(rhs.getGradeToSign()) {
  if (DEBUG)
    std::cout << ORANGE << "Form Base Copy Constructor Called" << RESET
              << std::endl;
}

// ---------------------------------------------------------------- Destructor
Form::~Form() {
  if (DEBUG)
    std::cout << ORANGE << "Form base destructor called" << RESET << "\n";
}

// ------------------------------------------------------------------- Overload
Form &Form::operator=(const Form &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Form Base = Assignment Operator Called"
              << RESET << std::endl;

  if (this != &rhs) {
    this->name_ = rhs.getName();
    this->gradeToExec_ = rhs.getGradeToExec();
    this->gradeToSign_ = rhs.getGradeToSign();
  }

  return *this;
}

std::ostream &operator<<(std::ostream &lhs, Form const &rhs) {
  if (DEBUG)
    std::cout << ORANGE << "Bureaucrat Base << Assignment Operator Called"
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
    lhs << "Form " << LGREEN << rhs.getName() << RESET << ", created with a grade of "
        << LGREEN << rhs.getGradeToSign()
        << ".\n"
        << RESET;
  }

  return lhs;
}

// -------------------------------------------------------------------=- Method
void Form::signForm(Form signedForm) {
  std::cout << "Bureaucrat " << LGREEN << this->getName() << RESET
            << " signed form " << LGREEN << signedForm << RESET << std::endl;
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
