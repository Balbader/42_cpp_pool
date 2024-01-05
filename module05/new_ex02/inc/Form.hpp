#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
public:
  // ------------------------------------------------- Constructor & Destructor
  AForm(std::string);
  AForm(std::string, int, int);
  ~AForm();

  // ----------------------------------- Copy constructor & Assignment operator
  AForm(const AForm &);
  AForm &operator=(const AForm &);

  // ------------------------------------------------------------------ Methods
  virtual void beSigned(Bureaucrat const &) = 0;

  // --------------------------------------------------------------- Exceptions
  class GradeTooHighException : public std::exception {
    virtual const char *what() const throw() {
      return "AForm Exception error occured.\nGrade too high.\n";
    }
  };

  class GradeTooLowException : public std::exception {
    virtual const char *what() const throw() {
      return "AForm Exception error occured.\nGrade too Low.\n";
    }
  };

  // ------------------------------------------------------------------ Setters
  void setName(std::string);
  void setGrade(int);

  // ------------------------------------------------------------------ Getters
  const std::string &getName() const;
  int const &getGradeToExec() const;
  int const &getGradeToSign() const;

private:
  std::string name_;
  int gradeToSign_;
  int gradeToExec_;
  bool isSigned_;
};

std::ostream &operator<<(std::ostream &lhs, AForm const &rhs);

#endif // !AForm_HPP
