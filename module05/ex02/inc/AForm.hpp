#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
public:
    // ------------------------------------------------- Constructor & Destructor
    AForm();
    AForm(std::string, int, int);
    virtual ~AForm();

    // ----------------------------------- Copy constructor & Assignment operator
    AForm(const AForm &);
    AForm &operator=(const AForm &);

    // ------------------------------------------------------------------ Methods
    // Assigning 0 to the following functions to turn the AForm Class to an Abstract Class
    virtual void beSigned(Bureaucrat const &) = 0;
	virtual void execute(Bureaucrat const &) = 0;

    // --------------------------------------------------------------- Exceptions
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

    // ------------------------------------------------------------------ Setters
    void setName(std::string);
    void setGrade(int);

    // ------------------------------------------------------------------ Getters
    const std::string &getName() const;
    int const &getGradeToExec() const;
    int const &getGradeToSign() const;
    bool const &getIsSigned() const;

private:
    std::string name_;
    unsigned int gradeToSign_;
    unsigned int gradeToExec_;
    bool isSigned_;
};

std::ostream &operator<<(std::ostream &lhs, AForm const &rhs);

#endif // !AFORM_HPP
