#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {

public:
    PresidentialPardonForm(std::string const);
    ~PresidentialPardonForm();

    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &);

    // virtual void beSigned(Bureaucrat const &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const;

    // std::string getTarget(void) const;

protected:
	PresidentialPardonForm();

private:
    std::string const target_;
};

std::ostream &operator<<(std::ostream &lhs, PresidentialPardonForm const &rhs);

#endif // !PRESIDENTIALPARDONFORM_HPP
