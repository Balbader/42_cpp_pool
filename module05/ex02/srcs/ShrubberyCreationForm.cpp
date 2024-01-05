#include <ShrubberyCreationForm.hpp>


// ---------------------------------------------------------------- Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : name_("Shrubbery Creation Form"), gradeToSign_(145), gradeToExec_(137) {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form base constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : name_("Shrubbery Creation Form"), gradeToSign_(145), gradeToExec_(137) {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form base constructor called" << RESET << std::endl;
}


int ShrubberyCreationForm:: execute(Bureaucrat const & executor) const
{
	if (this->getSignedForm() == false)
	{
		throw unsignedFormtoExecuteException(executor, *this);
	}
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw GradeTooLowtoExecuteException(executor, *this);
	}
	std::string name = getTarget() + "_shruberry";
	std::ofstream outputFile(name.c_str());
	if (outputFile.is_open())
	{
		for (int count = 0; count < 30; count++)
		{
			outputFile << "\n";
			outputFile << "       *         *         *         *         *         *\n";
			outputFile << "      ***       ***       ***       ***       ***       ***\n";
			outputFile << "     *****     *****     *****     *****     *****     *****\n";
			outputFile << "    *******   *******   *******   *******   *******   *******\n";
			outputFile << "   ********* ********* ********* ********* ********* *********\n";
			outputFile << "      ***       ***       ***       ***       ***       ***\n";
			outputFile << "      ***       ***       ***       ***       ***       ***\n";
		}
	}
	return 0;
}
