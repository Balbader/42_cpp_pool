#include "RobotomyRequestForm.hpp"

// ---------------------------------------------------------------- Constructor
RobotomyRequestForm::RobotomyRequestForm() : name_("Robotomy Request Form"), gradeToSign_(72), gradeToExec_(45) {
	if (DEBUG)
		std::cout << YELLOW << "Robotomy request form base constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const targetName) : name_(targetName), gradeToSign_(72), gradeToExec_(45) {
	if (DEBUG)
		std::cout << YELLOW << "Robotomy request form arguments constructor called" << RESET << std::endl;
}


// ----------------------------------------------------------- Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
    : name_(rhs.getName()), gradeToSign_(rhs.getGradeToSign()), gradeToExec_(rhs.getGradeToExec()) {

  if (DEBUG)
    std::cout << YELLOW << "Robotomy request form copy constructor called" << RESET
              << std::endl;
}


// ----------------------------------------------------------------- Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
	if (DEBUG)
		std::cout << YELLOW << "Robotomy request form base destructor called" << RESET << std::endl;

}

// ------------------------------------------------------------------- Overload
RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs) {
  if (DEBUG)
    std::cout << YELLOW << "Robotomy request form base assignment operator Called" << RESET
              << std::endl;

    if (*this != rhs)
        this->setTarget() = rhs.getTarget();

    return *this;
}

// --------------------------------------------------------------------- Setter
void RobotomyRequestForm::setTarget(std::string target) const {
	this->target_ = target;
	this->gradeToExec_ = 45;
	this->gradeToSign_ = 72;
}

// --------------------------------------------------------------------- Getter
