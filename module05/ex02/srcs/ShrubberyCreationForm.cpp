#include <ShrubberyCreationForm.hpp>

// ---------------------------------------------------------------- Constructor
ShrubberyCreationForm::ShrubberyCreationForm() : name_("Shrubbery Creation Form"), gradeToSign_(145), gradeToExec_(137) {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form base constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targetName) : name_(targetName), gradeToSign_(145), gradeToExec_(137) {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form base constructor called" << RESET << std::endl;
}


// ----------------------------------------------------------------- Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form destructor calledaa"
}


// ----------------------------------------------------------- Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form copy constructor called" << RESET << std::endl;

    *this = rhs;
}


// ------------------------------------------------------------------- Overlaud
ShrubberyCreationForm::ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs) {
    if (DEBUG)
        std::cout << CYAN << "Shrubbery Creation Form assignment operator called" << RESET << std::endl;

    it (*this != rhs)
        this->isSigned = rhs.isSigned;

    return *this;
}

std::ostream & operator<<(std::ostream &, ShrubberyCreationForm const &) {
	lhs << rhs.getName() << " requires grade " << rhs.getReqToExec() << " to be executed, " << rhs.getReqToSign() << " to be signed" << " and is ";

	if (rhs.getIsSigned() == NOT_SIGNED)
		lhs << "not ";
    else
	    lhs << "signed. Target is " << rhs.getTarget() << ".\n";

	return lhs;
}


// -------------------------------------------------------------------- Methods
int ShrubberyCreationForm:: execute(Bureaucrat const & executor) const
{
	if (this->getSignedForm() == false)
	{
		throw unsignedFormtoExecuteException(executor, *this);
	}
	if (executor.getGrade() > this->getReqToExec())
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


// --------------------------------------------------------------------- Getter
std::string ShrubberyCreationForm::getTarget() const { return this->target_; }
int ShrubberyCreationForm::getReqToExec() const { return this->reqToExec_; }
int ShrubberyCreationForm::getReqToSign() const { return this->reqToSign_; }
