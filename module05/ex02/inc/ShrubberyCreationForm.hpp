#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm {
public:
  ShrubberyCreationForm();
  ~ShrubberyCreationForm();

  ShrubberyCreationForm(const ShrubberyCreationForm &);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

private:
    unsigned int requiredSign = 145;
    unsigned int requiredExec = 137;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
