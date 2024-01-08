#include "PresidentialPardonForm.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
PresidentialPardonForm::PresidentialPardonForm() {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm base constructor called"
                  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Args Constructor
// ----------------------------------------------------------------------------
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
					   : AForm("PresidentialPardonForm", 25, 5), _target(target) {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm args derived constructor called"
                  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
					   : AForm(rhs), _target(rhs._target) {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm derived copy constructor called"
                  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
PresidentialPardonForm::~PresidentialPardonForm() {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm derived destructor called"
                  << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm assignment copy operator called"
                  << RESET << std::endl;

	(void)rhs;

	return (*this);
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
void	PresidentialPardonForm::execute(const Bureaucrat& executor) const {

	if (this->getIsSigned() == false)
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > this->getGradeExecute())
		throw(AForm::GradeTooLowException());
		
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
