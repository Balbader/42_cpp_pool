#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
public :
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &);

	virtual void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const;

	std::string	getTarget(void) const;
	void setTarget(std::string);

private :
	std::string	const 			_target;
};

std::ostream & operator<<(std::ostream & lhs, RobotomyRequestForm const & rhs);

#endif // !ROBOTOMYREQUESTFORM_HPP
