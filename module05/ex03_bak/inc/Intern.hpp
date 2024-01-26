#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

class Intern {
public:
	Intern();
	~Intern();

	Intern(const Intern&);
	Intern&	operator=(const Intern&);

	AForm*	makeForm(std::string, std::string);
};

#endif
