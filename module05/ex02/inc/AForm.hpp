#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
public:
    // Constructor & Destructor
    AForm(std::string, int, int);
    virtual ~AForm();

    // Copy constructor & Assignment operator
    AForm(const AForm &);
    AForm &operator=(const AForm &);

    // Methods
    void beSigned(Bureaucrat const &);
	void execute(Bureaucrat const &);

    // Assigning 0 to the following functions to turn the AForm Class to an Abstract Class
	virtual void execNow() const = 0;

    // Exceptions
    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw() {
          return "AForm Exception error occured.\nGrade too high.\n";
        }
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw() {
          return "AForm Exception error occured.\nGrade too Low.\n";
        }
    };

	class UnsignedFormException : public std::exception {
		virtual const char *what() const throw() {
			return "AForm Exception err occured.\nUnsigned form being processed.\n";
		}
	};

    // Setters
    void setName(std::string);
    void setGrade(int);

    // Getters
    const std::string &getName() const;
	bool const &getIsSigned() const;
    int const &getGradeToExec() const;
    int const &getGradeToSign() const;

protected:
	AForm();

private:
    std::string name_;
	bool isSigned_;
    const int gradeToSign_;
    const int gradeToExec_;
};

std::ostream &operator<<(std::ostream &lhs, AForm const &rhs);

#endif // !AFORM_HPP
