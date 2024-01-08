#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "colors.hpp"

class PresidentialPardonForm : public AForm {
public :
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
	
	PresidentialPardonForm(const PresidentialPardonForm& rhs);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

	void	execute(const Bureaucrat& executor) const;

private :
	const std::string& _target;
};

#endif // !PRESIDENTIALPARDONFORM_HPP
