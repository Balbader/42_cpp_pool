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
  // ------------------------------------------------- Constructor & Destructor
  Bureaucrat(std::string, int);
  ~Bureaucrat();

  // ----------------------------------- Copy constructor & Assignment operator
  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  // --------------------------------------------------------------- Exceptions
  class GradeTooHighException : public std::exception {
  public:
    // Constructor to use to pass the error message
    GradeTooHighException(const std::string &msg) : message_(msg) {}
    // Overriding the what message to return a custom error message
    virtual const char *what() const throw() { return message_.c_str(); }
    // Destructor
    virtual ~GradeTooHighException() throw() {}

  private:
    std::string message_;
  };

  class GradeTooLowException : public std::exception {
  public:
    GradeTooLowException(const std::string &msg) : message_(msg) {}
    virtual const char *what() const throw() { return message_.c_str(); }
    virtual ~GradeTooLowException() throw() {}

  private:
    std::string message_;
  };

  // ------------------------------------------------------------------ Methods
  void incrementGrade();
  void decrementGrade();
  void printGrade();
  void isGradeOutOfRange(int);

  // ------------------------------------------------------------------ Setters
  void setName(std::string);
  void setGrade(int);

  // ------------------------------------------------------------------ Getters
  const std::string &getName() const;
  unsigned int const &getGrade() const;

protected:
  Bureaucrat();

private:
  std::string name_;
  unsigned int grade_;
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_HPP
