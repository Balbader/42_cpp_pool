#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat {
public:
  // ------------------------------------------------- Constructor & Destructor
  Form(std::string, int);
  ~Form();

  // ----------------------------------- Copy constructor & Assignment operator
  Form(const Form &);
  Form &operator=(const Form &);

  // ------------------------------------------------------------------ Methods
  void beSigned(Bureaucrat const &);
  void signForm();

  // --------------------------------------------------------------- Exceptions
  const char *GradeTooHighException();
  const char *GradeTooLowException();

  // ------------------------------------------------------------------ Setters
  void setName(std::string);
  void setGrade(int);

  // ------------------------------------------------------------------ Getters
  const std::string &getName() const;
  int const &getGradeToExec() const;
  int const &getGradeToSign() const;

protected:
  Form();

private:
  std::string name_;
  int gradeToSign_;
  int gradeToExec_;
  bool isSigned_(int);
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs);

#endif // !FORM_HPP
