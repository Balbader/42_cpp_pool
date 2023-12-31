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
//
//
//
//
//
//
PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target)
: AForm(name, 25, 5, target)
{
	std::cout << RED << "PresidentialPardonForm constructor called\n" << RESET;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << "PresidentialPardonForm destructor called\n" << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) 
:AForm(rhs)
{
	std::cout << BLUE << "PresidentialPardonForm copy constructor called\n" << RESET;
	*this = rhs;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << GREEN << "PresidentialPardonForm copy assignment called\n" << RESET;
	if (this != &rhs)
	{
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignedForm() == false)
	{
		throw unsignedFormtoExecuteException(executor, *this);
	}
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw GradeTooLowtoExecuteException(executor, *this);
	}
	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox\n";
	return 0;
}
