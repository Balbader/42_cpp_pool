#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

class AForm;

// ---------------------------------------------------------------- Constructor
PresidentialPardonForm::PresidentialPardonForm() {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm base constructor called"
                  << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : AForm(name, 25, 5, 5, target) {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm args derived constructor called"
                  << RESET << std::endl;
}

// ----------------------------------------------------------------- Destructor
~PresidentialPardonForm::PresidentialPardonForm() {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm derived destructor called"
                  << RESET << std::endl;
}

// ----------------------------------------------------------- Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonFormt& rhs) {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm derived copy constructor called"
                  << RESET << std::endl;

    *this = rhs;
}

// ------------------------------------------------------------------- Overload
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& rhs) {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm assignment copy operator called"
                  << RESET << std::endl;

    if (*this != rhs)
        this->setTarget() = rhs.getTarget();

    return *this;
}

std::ostream &operator<<(std::ostream &lhs, PresidentialPardonForm const &rhs) {
    if (DEBUG)
        std::cout << MAGENTA << "PresidentialPardonForm assignment << operator called"
                  << RESET << std::endl;

    if (rhs.getGradeToExec < 5 || rhs.getGradeTosign < 25) {
        try {
            if ((rhs.getGradeToExec() < 5)
                throw "Exception error occured.\nGrade too Exec too low.\n";
            if (rhs.getGradeTosign() < 25)
                throw "Exception error occured.\nGrade too sign low.\n";
        } catch (const char *e) {
            std::cerr << e << std::endl;
        }
    } else 
        lhs << MAGENTA << rhs.getTarget() << RESET << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}

// -------------------------------------------------------------------- Methods


// -------------------------------------------------------------------- Setters

// -------------------------------------------------------------------- Getters
