#include "RobotomyRequestForm.hpp"

// ---------------------------------------------------------------- Constructor
RobotomyRequestForm::RobotomyRequestForm() : name_("Robotomy Request Form"), gradeToSign_(72), gradeToExec_(45) {
	if (DEBUG)
		std::cout << YELLOW << "Robotomy Request Form base constructor called" << RESET << std::endl;
}
