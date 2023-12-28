#include "Form.hpp"

// ---------------------------------------------------------------- Constructor
Form::Form() {
  if (DEBUG)
    std::cout << LYELLOW << "Form base constructor called" << RESET << "\n";
}

Form::Form(std::string name, int grade) : gradeToSign_(grade), name_(name) {
  if (DEBUG)
    std::cout << LYELLOW << "Form base with args constructor called" << RESET << "\n";
}

// ---------------------------------------------------------------- Destructor
Form::~Form() {
  if (DEBUG)
    std::cout << LYELLOW << "Form base destructor called" << RESET << "\n";
}
