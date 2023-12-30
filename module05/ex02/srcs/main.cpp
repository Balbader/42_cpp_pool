#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(int ac, char **av) {

  if (ac == 3) {
    // Form WireTransfer("Wire Transfer");
    Bureaucrat Basil("Basil");

    // std::cout << WireTransfer;
    // std::cout << Basil;
    // std::cout << "\n";

    // WireTransfer.beSigned(Basil);
    // std::cout << "\n";
    // Basil.signForm(WireTransfer);
    // std::cout << "\n";

    // New Form
    Form ElectricBill("Electric Bill", atoi(av[1]), atoi(av[2]));
    std::cout << ElectricBill << std::endl;
    Basil.signForm(ElectricBill);
  }
  else
    std::cerr << RED << "ERROR OCCURED!\n" << RESET
              << "Please provide the following arguments in the folllowing "
                 "order to successfully execute the program: \n"
              << "1. Name of executable: " << LGREEN
              << "<./Bureaucrat\n"
              << RESET
              << "2. Grade to execute (from 1 to 150 included): " << LGREEN
              << "148\n"
              << RESET
              << "3. Grade to sign (from 1 to 150 included): " << LGREEN
              << " 42"
              << RESET << std::endl;

  return 0;
}
