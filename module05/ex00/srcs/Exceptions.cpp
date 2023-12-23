#include "Exceptions.hpp"

// Exceptions
void Exceptions::GradeTooHighException() {
  std::cerr << RED << "ERROR : " << RESET
            << "Wrond Grade input. Grade too high.\n\n";
}

void Exceptions::GradeTooLowException() {
  std::cerr << RED << "ERROR : " << RESET
            << "Wrond Grade input. Grade too low.\n\n";
}
