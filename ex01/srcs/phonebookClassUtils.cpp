#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

void Phonebook::_printOptions(void) {
  std::cout << std::endl;
  std::cout << "Welcome to your new Phonebook !" << std::endl;
  std::cout << std::endl;
  std::cout << "Here are your options :" << std::endl;
  std::cout << "1. Add a new contact : " << GREEN << "ADD" << RESET
            << std::endl;
  std::cout << "2. Serch for an existing contact : " << GREEN << "SEARCH"
            << RESET << std::endl;
  std::cout << "3. Quit the program : " << GREEN << "EXIT" << RESET
            << std::endl;
  std::cout << std::endl;
  std::cout << "Please type in the appropriate command:" << std::endl;
}

//============================================================ Check Input
// Checks if the user input is one of the 3 accepted commands
std::string Phonebook::_checkInput(std::string input) {
  if (input == "ADD" || input == "SEARCH" || input == "EXIT")
    return input;
  else if (input != "ADD" || input != "SEARCH" || input != "EXIT") {
    while (input != "ADD" || input != "SEARCH" || input != "EXIT") {
      std::cout << RED
                << "Please enter one of the following commands :" << std::endl;
      std::cout << BLUE << "1. ADD" << RESET << std::endl;
      std::cout << BLUE << "2. SEARCH" << RESET << std::endl;
      std::cout << BLUE << "3. EXIT" << RESET << std::endl;
      std::getline(std::cin, input);
      if (input == "ADD" || input == "SEARCH" || input == "EXIT")
        break;
    }
  }
  return input;
}
