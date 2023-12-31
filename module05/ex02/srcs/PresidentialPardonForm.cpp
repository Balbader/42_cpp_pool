#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

// ---------------------------------------------------------------- Constructor
PresidentialPardonForm::PresidentialPardonForm() {
  if (DEBUG)
    std::cout << MAGENTA << "PresidentialPardonForm Derived constructor called"
              << RESET << std::endl;
}

// ----------------------------------------------------------------- Destructor
~PresidentialPardonForm::PresidentialPardonForm() {
  if (DEBUG)
    std::cout << MAGENTA << "PresidentialPardonForm Derived desstructor called"
              << RESET << std::endl;
}

// ----------------------------------------------------------- Copy Constructor

// ------------------------------------------------------------------- Overload

// -------------------------------------------------------------------- Methods

// -------------------------------------------------------------------- Setters

// -------------------------------------------------------------------- Getters

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
