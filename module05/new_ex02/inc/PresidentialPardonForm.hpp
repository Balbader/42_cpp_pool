#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string, int, int);
	~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);

private:
	const std::string name_;
	
};

#endif // !PRESIDENTIALPARDONFORM_HPP
