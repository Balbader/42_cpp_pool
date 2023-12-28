#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <limits.h>
#include <string>

#define DEBUG 1

class Bureaucrat {

public:
  int grade_;

  // ------------------------------------------------- Constructor & Destructor
  Bureaucrat(std::string, int);
  ~Bureaucrat();

  // ----------------------------------- Copy constructor & Assignment operator
  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  // ------------------------------------------------------------------ Methods
  void incrementGrade();
  void decrementGrade();
  void printGrade();
  int isGradeOutOfRange(int);

  // --------------------------------------------------------------- Exceptions
  // const char *GradeTooHighException();
  // const char *GradeTooLowException();

  class MyClass : public std::exception {

  }

  // ------------------------------------------------------------------ Setters
  void setName(std::string);
  void setGrade(int);

  // ------------------------------------------------------------------ Getters
  const std::string &getName() const;
  int const &getGrade() const;

protected:
  Bureaucrat();

private:
  std::string name_;
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_HPP
