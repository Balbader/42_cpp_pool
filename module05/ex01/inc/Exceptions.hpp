#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <iostream>

class GradeTooHighException : public std::exception {
    virtual const char *what() const throw() {
        return "Exception error occured.\nGrade too high.\n";
    }
};

class GradeTooLowException : public std::exception {
    virtual const char *what() const throw() {
        return "Exception error occured.\nGrade too Low.\n";
    }
};

#endif // !EXCEPTIONS_HPP
