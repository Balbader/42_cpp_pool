#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
  Bureaucrat();
  ~Bureaucrat();

  Bureaucrat(const Bureaucrat &);
  Bureaucrat &operator=(const Bureaucrat &);

private:
};

#endif // !BUREAUCRAT_HPP
