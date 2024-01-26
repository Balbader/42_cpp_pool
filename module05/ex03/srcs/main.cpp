
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void	intern_creation(std::string form_name, std::string target)
{
	Intern	Heidi;
	AForm	*Form;

	try
	{
		Form = Heidi.makeForm("Presidential pardon", "Lisa");
		delete Form;
		Form = Heidi.makeForm("Robotomy request", "Heloise");
		delete Form;
		Form = Heidi.makeForm("Shrubbery creation", "Home");
		delete Form;
		Form = Heidi.makeForm(form_name, target);
		if (Form)
			delete Form;
	}
	catch(const std::exception)
	{
		std::cerr << "Failed. Available forms are : Presidential pardon, Robotomy request and Shrubbery creation.\n";
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cerr << "Error: usage is ./intern <name of form> <target>.\n";
		return (ERROR);
	}
	intern_creation(argv[1], argv[2]);
	return (SUCCESS);
}
