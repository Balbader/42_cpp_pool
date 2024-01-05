#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
private :
	std::string	const 			_target;
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & src);

public :
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const target);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

	std::string		getTarget(void) const;
	
	virtual void	beSigned(Bureaucrat const &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream & operator<<(std::ostream & lhs, RobotomyRequestForm const & rhs);

#endif // !ROBOTOMYREQUESTFORM_HPP
