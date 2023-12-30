#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
public:
  // ------------------------------------------------- Constructor & Destructor
  Form(std::string);
  Form(std::string, int, int);
  ~Form();

  // ----------------------------------- Copy constructor & Assignment operator
  Form(const Form &);
  Form &operator=(const Form &);

  // ------------------------------------------------------------------ Methods
  void beSigned(Bureaucrat const &);

  // --------------------------------------------------------------- Exceptions
  class GradeTooHighException : public std::exception {
    virtual const char *what() const throw() {
      return "Form Exception error occured.\nGrade too high.\n";
    }
  };

  class GradeTooLowException : public std::exception {
    virtual const char *what() const throw() {
      return "Form Exception error occured.\nGrade too Low.\n";
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

std::ostream &operator<<(std::ostream &lhs, Form const &rhs);

#endif // !FORM_HPP
