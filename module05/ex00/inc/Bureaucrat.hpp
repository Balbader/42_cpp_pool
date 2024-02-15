#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"
#include "Exceptions.hpp"

#include <exception>
#include <iostream>
#include <string>

#define DEBUG 0
// #define DEBUG 1

class Bureaucrat {
public:
    Bureaucrat();
    ~Bureaucrat();

    Bureaucrat(std::string, int);

    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator=(const Bureaucrat &);

    void incrementGrade();
    void decrementGrade();
    void printGrade();
    int isGradeOutOfRange(int);

    void setName(std::string);
    void setGrade(int);

    const std::string &getName() const;
    unsigned int const &getGrade() const;

private:
    std::string name_;
    unsigned int grade_;
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat const &rhs);

#endif // !BUREAUCRAT_HPP
