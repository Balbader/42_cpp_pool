#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <limits.h>
#include <string>

#define DEBUG 1

// ----------------------------------------------------------------- Bureaucrat
class Bureaucrat {

public:
  Bureaucrat();
  ~Bureaucrat();

  Bureaucrat(std::string, int);

  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  void incrementGrade();
  void decrementGrade();
  void printGrade();
  int isGradeOutOfRange(int);

  void setName(std::string);
  void setGrade(int);

  const std::string &getName() const;
  unsigned int const &getGrade() const;

protected:

private:
  std::string name_;
  unsigned int grade_;
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_HPP
