#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat {
public:
  Form(std::string, int);
  ~Form();

  Form(const Form &);
  Form &operator=(const Form &);

  void beSigned(Bureaucrat);
  void signForm();

protected:
  Form();

private:
  std::string name_;
  int gradeToSign_;
  int gradeToExec_;
  bool isSigned_(int);
};

#endif // !FORM_HPP
