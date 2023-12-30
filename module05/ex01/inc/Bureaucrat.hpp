#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include <exception>
#include <iostream>
#include <stdlib.h>
#include <string>

#define DEBUG 1

class Form;

class Bureaucrat {

public:
  Bureaucrat();
  ~Bureaucrat();

  Bureaucrat(std::string, int);

  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  class GradeTooHighException : public std::exception {
    virtual const char *what() const throw() {
      return "Exception error occured.\nGrade too high.\n";
    }
  };

  class GradeTooLowException : public std::exception {
    virtual const char *what() const throw() {
      return "Exception error occured.\nGrade too Low.\n";
    }
  };

  int isGradeOutOfRange(int);
  void incrementGrade();
  void decrementGrade();
  void signForm(Form);
  void printGrade();

  void setName(std::string);
  void setGrade(int);
  std::string getName() const;
  int getGrade() const;

private:
  std::string name_;
  int grade_;
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_HPP
