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
    virtual const char *what() const throw() {
      return "Wrond Grade input. Grade too high.\n\n";
    }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw() {
      return "Wrond Grade input. Grade too low.\n\n";
    }
  };

  // ------------------------------------------------------------------ Methods
  void incrementGrade();
  void decrementGrade();
  void printGrade();
  int gradeOutOfRange(int);

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
