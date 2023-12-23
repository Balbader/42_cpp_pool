#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include "Bureaucrat.hpp"
#include <exception>

class Exceptions {
public:
  Exceptions();
  ~Exceptions();

  Exceptions(const Exceptions &);
  Exceptions &operator=(const Exceptions &);

  void GradeTooHighException();
  void GradeTooLowException();
};

Exceptions::Exceptions() {}

Exceptions::~Exceptions() {}

#endif // !EXCEPTIONS_HPP
