#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
public:
  Form();
  ~Form();

  Form(const Form &);
  Form &operator=(const Form &);

private:
  std::string name_;
  unsigned int grade_;
  void isSigned(); // NOTE: need argument?
};

#endif // !FORM_HPP
