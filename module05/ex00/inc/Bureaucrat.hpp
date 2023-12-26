#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <limits.h>
#include <string>

#define DEBUG 1

// --------------------------------------------------------------- Exceptions
class GradeTooHighException : public std::exception {
public:
  GradeTooHighException(const std::string &msg, int grade)
      : message_(msg), wrongGrade_(grade) {
    try {
      if (this->wrongGrade_ < 1)
        throw std::exception();
    } catch (const std::exception &e) {
      std::cerr << e.what() << "\n";
    }
  }
  virtual const char *what() const throw() { return message_.c_str(); }
  virtual ~GradeTooHighException() throw() {}

private:
  std::string message_;
  int wrongGrade_;
};

class GradeTooLowException : public std::exception {
public:
  GradeTooLowException(const std::string &msg, int grade)
      : message_(msg), wrongGrade_(grade) {
    try {
      if (this->wrongGrade_ > 150)
        throw std::exception();
    } catch (const std::exception &e) {
      std::cerr << e.what() << "\n";
    }
  }
  virtual const char *what() const throw() { return message_.c_str(); }
  virtual ~GradeTooLowException() throw() {}

private:
  std::string message_;
  int wrongGrade_;
};

class Bureaucrat {

public:
  Bureaucrat(std::string, int);
  ~Bureaucrat();

  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  void incrementGrade();
  void decrementGrade();
  void printGrade();
  void isGradeOutOfRange(int);

  void setName(std::string);
  void setGrade(int);

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
