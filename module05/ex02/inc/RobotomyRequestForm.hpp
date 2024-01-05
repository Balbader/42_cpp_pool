#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
public :
	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(std::string const&);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &);

	virtual void	beSigned(Bureaucrat const &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const;

	std::string		getTarget(void) const;

private :
	std::string	const 			_target;
	RobotomyRequestForm();

	RobotomyRequestForm(RobotomyRequestForm const & src);
};

std::ostream & operator<<(std::ostream & lhs, RobotomyRequestForm const & rhs);

#endif // !ROBOTOMYREQUESTFORM_HPP
