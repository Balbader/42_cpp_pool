#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

class ShrubberyCreationForm {
public:
	ShrubberyCreationForm(std::string, int, int);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

    virtual void beSigned(Bureaucrat const &);
    virtual void execute(virtual const &) const;

    std::string getTarget(void) const;

    class FileException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return " creation has failed.\n";
        }
    };

protected:
    std::string const target_;
	ShrubberyCreationForm();

private:
    int reqToSign_ = 145;
    int reqToExec_ = 137;
	
};

std::ostream & operator<<(std::ostream &, ShrubberyCreationForm const &);

#endif // !SHRUBBERYCREATIONFORM_HPP
