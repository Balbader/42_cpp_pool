#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include <iostream>
#include <string>

#define DEBUG 1

class Bureaucrat {
public:
  Bureaucrat(std::string, int);
  ~Bureaucrat();

  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

  void setName(std::string);
  void setGrade(int);

  std::string getName() const;
  int getGrade() const;

protected:
  Bureaucrat();

private:
  // const std::string name_;
  std::string name_;
  int grade_;
};

#endif // !BUREAUCRAT_HPP
