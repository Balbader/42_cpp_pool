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


// -------------------------------------------------------------------- Methods
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
		}-- disable netrw at the very start of your init.lua
vim.g.loaded_netrw = 1
vim.g.loaded_netrwPlugin = 1

-- set termguicolors to enable highlight groups
vim.opt.termguicolors = true

-- empty setup using defaults
require("nvim-tree").setup()

-- OR setup with some options
require("nvim-tree").setup({
  sort = {
    sorter = "case_sensitive",
  },
  view = {
    width = 30,
  },
  renderer = {
    group_empty = true,
  },
  filters = {
    dotfiles = true,
  },
})
	}
	return 0;
}


// --------------------------------------------------------------------- Getter
ShrubberyCreationForm::getTarget() {
	return this->target_;
}
