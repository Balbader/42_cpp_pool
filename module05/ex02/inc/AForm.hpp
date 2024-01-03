#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
public:
    // ------------------------------------------------- Constructor & Destructor
    Form();
    Form(std::string, int, int);
    virtual ~Form();

    // ----------------------------------- Copy constructor & Assignment operator
    Form(const Form &);
    Form &operator=(const Form &);

    // ------------------------------------------------------------------ Methods
    // Assigning 0 to the following functions to turn the Form Class to an Abstract Class
    void beSigned(Bureaucrat const &) = 0;
    void execute(Bureaucrat const &) = 0;

    // --------------------------------------------------------------- Exceptions
    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw() {
          return "Form Exception error occured.\nGrade too high.\n";
        }
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw() {
          return "Form Exception error occured.\nGrade too Low.\n";
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

std::ostream &operator<<(std::ostream &lhs, Form const &rhs);

#endif // !AFORM_HPP
