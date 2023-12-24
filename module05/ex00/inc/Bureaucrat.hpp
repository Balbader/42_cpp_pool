#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include <exception>
#include <iostream>
#include <string>

#define DEBUG 1

class Bureaucrat {
public:
  Bureaucrat(std::string, int);
  ~Bureaucrat();

  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  void incrementGrade();
  void decrementGrade();
  void printGrade();

  void setName(std::string);
  void setGrade(int);

  const std::string getName() const;
  int getGrade() const;

protected:
  Bureaucrat();
  // Exceptions exceptions;

private:
  std::string name_;
  unsigned int grade_;
};

std::ostream & operator<<(std::ostream & lhs, Bureaucrat const & rhs);

#endif // !BUREAUCRAT_HPP
