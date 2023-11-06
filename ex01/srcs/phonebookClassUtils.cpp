#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

void Phonebook::_welcomeMessage(void) {
  std::cout << std::endl;
  std::cout << "Welcome to your new Phonebook !" << std::endl;
}
void Phonebook::_options(void) {
  std::cout << "Here are your options :" << std::endl;
  std::cout << "1. Add a new contact : " << GREEN << "ADD" << RESET
            << std::endl;
  std::cout << "2. Serch for an existing contact : " << GREEN << "SEARCH"
            << RESET << std::endl;
  std::cout << "3. Quit the program : " << GREEN << "EXIT" << RESET
            << std::endl;
}

void Phonebook::_printOption(void) {
  std::cout << "4. Print Phonebook ! " << GREEN << "PRINT" << RESET
            << std::endl;
  std::cout << std::endl;
}

void Phonebook::_whatNext(void) {
  std::cout << std::endl;
  std::cout << "What next ?" << std::endl;
  _options();
  _printOption();
  std::cout << "Please type in the appropriate command:" << std::endl;
}

void Phonebook::_contactAdded(void) {
  std::cout << GREEN << "Contat added !" << RESET << std::endl;
  _whatNext();
}

//============================================================ Check Input
// Checks if the user input is one of the 3 accepted commands
std::string Phonebook::_checkInput(std::string input) {
  if (input == "ADD" || input == "SEARCH" || input == "EXIT" ||
      input == "PRINT")
    return input;
  else if (input != "ADD" || input != "SEARCH" || input != "EXIT" ||
           input != "PRINT") {
    while (input != "ADD" || input != "SEARCH" || input != "EXIT") {
      std::cout << std::endl;
      std::cout << RED
                << "Wrong input !\nPlease enter one of the following commands :"
                << std::endl;
      std::cout << BLUE << "1. ADD" << RESET << std::endl;
      std::cout << BLUE << "2. SEARCH" << RESET << std::endl;
      std::cout << BLUE << "3. EXIT" << RESET << std::endl;
      std::cout << BLUE << "4. PRINT" << RESET << std::endl;
      std::getline(std::cin, input);
      if (input == "ADD" || input == "SEARCH" || input == "EXIT" ||
          input == "PRINT")
        break;
    }
  }
  return input;
}
