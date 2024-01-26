#include "Intern.hpp"
// ----------------------------------------------------------------------------
// ---------------------------------------------------------------- Constructor
// ----------------------------------------------------------------------------
Intern::Intern() {
  if (DEBUG)
    std::cout << LBLUE << "Intern Constructor called" << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------------- Destructor
// ----------------------------------------------------------------------------
Intern::~Intern() {
  if (DEBUG)
    std::cout << LBLUE << "Intern Destructor called" << RESET << std::endl;
}


// ----------------------------------------------------------------------------
// ----------------------------------------------------------- Copy Constructor
// ----------------------------------------------------------------------------
Intern::Intern(const Intern& rhs)
{
  if (DEBUG)
    std::cout << LBLUE << "Intern copy constructor called" << RESET << std::endl;

	*this = rhs;
}


// ----------------------------------------------------------------------------
// ------------------------------------------------------------------- Overload
// ----------------------------------------------------------------------------
Intern&	Intern::operator=(const Intern& rhs)
{
	if (DEBUG)
    std::cout << LBLUE << "Intern assignment operator overload called"
			  << RESET << std::endl;

	(void)rhs;

	return (*this);
}


// ----------------------------------------------------------------------------
// -------------------------------------------------------------------- Methods
// ----------------------------------------------------------------------------
AForm*	Intern::makeForm(std::string name, std::string target)
{
	try {
		std::string formuu[] = {
			"robotomy request",
			"presidential pardon",
			"shrubbery creation"
		};
		AForm* forms[] = {
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target),
			new ShrubberyCreationForm(target)
		};

		for (int i = 0; i < 3; i++) {
			if (name == formuu[i]) {
				std::cout << "Intern creates " << name << std::endl;
				for (int i = 0; i < 3; i++) {
					if (name != formuu[i]) {
						AForm* lol = forms[i];
						delete lol;
					}
				}
				return (forms[i]);
			}
		}

		std::cout << "Intern couldn't create " << name << std::endl;

		for (int i = 0; i < 3; i++) {
			AForm* lol = forms[i];
			delete lol;
		}

		return NULL;
	} catch(const std::bad_alloc& e) {
		std::cerr << e.what() << '\n';
		return NULL;
	}

	return NULL;
}
