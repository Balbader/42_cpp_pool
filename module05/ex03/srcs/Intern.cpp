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
		std::string form[] = {
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
			if (name == form[i]) {
				std::cout << LBLUE << "Intern" << RESET << " creates " << name << std::endl;
				for (int i = 0; i < 3; i++) {
					if (name != form[i]) {
		                std::cout << LBLUE << "Intern" << RESET << " couldn't create " << name << std::endl;
						AForm* badForm = forms[i];
						delete badForm;
					}
				}
				return (forms[i]);
			}
		}

		// std::cout << "Intern couldn't create " << name << std::endl;

		for (int i = 0; i < 3; i++) {
			AForm* badForm = forms[i];
			delete badForm;
		}

		return NULL;

	} catch(const std::bad_alloc& e) {
		std::cerr << e.what() << '\n';
		return NULL;
	}

	return NULL;
}
