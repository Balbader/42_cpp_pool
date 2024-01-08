#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>


int main(void)
{
    std::cout << "\n-------------------CEO----------------------------------" << std::endl;

    try {
        Bureaucrat bur = Bureaucrat("Sophie Vigier", 1);
	    ShrubberyCreationForm form("42Paris");
	
	    std::cout << bur;
        std::cout << form;
        
        bur.signForm(form);
        bur.execForm(form);
        bur.execForm(form);
        bur.execForm(form);

        RobotomyRequestForm dead("baalbade");
        std::cout << dead;
        
        bur.signForm(dead);
        bur.execForm(dead);
        
        PresidentialPardonForm mercy("baalbade");
        std::cout << mercy;
        bur.signForm(mercy);
        bur.execForm(mercy);
    }
    catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

    std::cout << "\n-------------------USELESS INTERN-------------------------" << std::endl;

    try {
        Bureaucrat bur = Bureaucrat("Useless Intern", 150);
	    ShrubberyCreationForm form("Home");
	
	    std::cout << bur;
        std::cout << form;
        
        bur.signForm(form);
        bur.execForm(form);
        bur.execForm(form);
        bur.execForm(form);

        RobotomyRequestForm dead("baalbade");
        std::cout << dead;

        bur.signForm(dead);
        bur.execForm(dead);
        
        PresidentialPardonForm mercy("baalbade");
        std::cout << mercy;
        bur.signForm(mercy);
        bur.execForm(mercy);
        
        std::cout << std::endl;
    }
    catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

    return (0);
}
