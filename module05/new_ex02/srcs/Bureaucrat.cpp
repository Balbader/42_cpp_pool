#include "Bureaucrat.hpp"

// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
Bureaucrat::Bureaucrat() : name_("Name undefined"), grade_(10) {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Base Constructor called" << RESET
              << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Args Constructor
// ----------------------------------------------------------------------------
Bureaucrat::Bureaucrat(const std::string& name, int grade)
		   : name_(name), grade_(grade) {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Arguments Base Constructor called"
              << RESET << std::endl;

	// if (grade < 1)
	// 	throw Bureaucrat::GradeTooHighException();
	// else if (grade > 150)
	// 	throw Bureaucrat::GradeTooLowException();

	try {
		if (isGradeOutOfRange(grade)) {
			if (grade < 1)
				throw GradeTooHighException();
			if (grade > 150)
				throw GradeTooLowException();
		}
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
Bureaucrat::Bureaucrat(const Bureaucrat& rhs) {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat Copy Constructor called"
              << RESET << std::endl;

	*this = rhs;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
Bureaucrat::~Bureaucrat() {
  if (DEBUG)
    std::cout << GREEN << "Bureaucrat base destructor called" << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (DEBUG)
    std::cout << ORANGE << "AForm assignment operator overload called" << RESET << std::endl;

	if (this != &rhs) {
		this->_grade = rhs._grade;
	}

	return (*this);
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
void Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " 
		<< e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm& form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " 
		<< e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();

	_grade -= 1;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();

	_grade += 1;
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Getters
// ----------------------------------------------------------------------------
const std::string Bureaucrat::getName() const { return (this->_name); }
int	Bureaucrat::getGrade() const { return (this->_grade); }


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- ostream
// ----------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs) {

	lhs << rhs.getName() << " bureaucrat grade " << rhs.getGrade() << std::endl;

	return lhs;
}
