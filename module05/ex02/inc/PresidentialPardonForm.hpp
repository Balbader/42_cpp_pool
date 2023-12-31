#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include AForm;

class PresidentialPardonForm : public AForm {
public:
  std::string getTarget(void) const;

  PresidentialPardonForm(std::string const target);
  virtual ~PresidentialPardonForm();

  PresidentialPardonForm &operator=(const PresidentialPardonForm &);

  virtual void beSigned(Bureaucrat const &bureaucrat);
  virtual void execute(Bureaucrat const &executor) const;

private:
  std::string const _target;

  PresidentialPardonForm();
  PresidentialPardonForm (const PresidentialPardonForm &);
};

std::ostream &operator<<(std::ostream &lhs, PresidentialPardonForm const &rhs);

#endif // !PRESIDENTIALPARDONFORM_HPP
