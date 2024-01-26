#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
     std::cout << "\n-------------------CEO----------------------------------" << std::endl;
    try
    {
        Bureaucrat bur = Bureaucrat("Sophie Vigier", 1);
	    Intern pipo = Intern();

		AForm* form = pipo.makeForm("shrubbery creation", "42Paris");
		if (!form)
		{
			std::cout << "Error creating form, abort" << std::endl;
			return (1);
		}
	    std::cout << bur;
        std::cout << *form;
        
        bur.signForm(*form);
        bur.execForm(*form);
        bur.execForm(*form);
        bur.execForm(*form);

        AForm* dead = pipo.makeForm("robotomy request", "baalbade");
		if (!dead)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete form;
			return (1);
		}
        std::cout << *dead;

        bur.signForm(*dead);
        bur.execForm(*dead);
        
        AForm* mercy = pipo.makeForm("presidential pardon", "baalbade");
		if (!mercy)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete form;
			delete dead;
			return (1);
		}
        std::cout << *mercy;
        bur.signForm(*mercy);
        bur.execForm(*mercy);
		delete form;
		delete dead;
		delete mercy;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------------------LIL MAN-------------------------" << std::endl;
    try
    {
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
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	
}
