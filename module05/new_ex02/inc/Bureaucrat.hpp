#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include "colors.hpp"
#include <iostream>
#include <string>

class AForm;

class Bureaucrat {
public:
	Bureaucrat(const std::string &, int);
	~Bureaucrat();

	Bureaucrat(const Bureaucrat &) = default;
	Bureaucrat &operator=(const Bureaucrat &) = default;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Error Occured!\nGrade too high.\n";
		}
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Error Occured!\nGrade too low.\n";
		}
	};

	void incrementGrade();
	void decrementGrade();

	void signForm(AForm&);
	void execForm(AForm&);

	const std::string getName() const;
	int getGrade() const;

protected:
	Bureaucrat();

private:
	const std::string name_;
	int grade_;
};

std::ostream& operator<<(std::ostream& lhs, const Bureaucrat& rhs);

#endif // !BUREAUCRAT_HPP
