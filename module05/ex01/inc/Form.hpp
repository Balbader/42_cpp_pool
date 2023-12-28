#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat {
public:
  Form(int);
  ~Form();

  Form(const Form &);
  Form &operator=(const Form &);

  void beSigned(Bureaucrat);
  void signForm();

protected:
  Form();

private:
  std::string name_;
  unsigned int gradeToSign_;
  unsigned int gradeToExec_;
  int isSigned_(int);
};

#endif // !FORM_HPP
