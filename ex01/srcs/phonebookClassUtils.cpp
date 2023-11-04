#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

void Phonebook::_printOptions(void) {
  std::cout << BLUE << "What would you like to do ?" << RESET << std::endl;
  std::cout << BLUE << "1. ADD" << RESET << std::endl;
  std::cout << BLUE << "2. SEARCH" << RESET << std::endl;
  std::cout << BLUE << "3. EXIT" << RESET << std::endl;
  std::cout << BLUE << "Please Type the appropriate command:" << RESET
            << std::endl;
}

/* _checkInput : Checks if the user input is one of the 3 accepted commands */
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
