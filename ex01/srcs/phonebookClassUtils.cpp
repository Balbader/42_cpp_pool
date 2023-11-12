#include "PhonebookClass.hpp"

//============================================================ Display Messages
void Phonebook::_welcomeMessage(void) {
  // std::cout << std::endl;
  std::cout << "Welcome to your new Phonebook !\n" << std::endl;
  // std::cout << std::endl;
  return;
}

void Phonebook::_options(void) {
  std::cout << "Here are your options :" << std::endl;
  std::cout << "1. Add a new contact : " << GREEN << "ADD" << RESET
            << std::endl;
  std::cout << "2. Search for an existing contact : " << GREEN << "SEARCH"
            << RESET << std::endl;
  std::cout << "3. Quit the program : " << GREEN << "EXIT" << RESET
            << std::endl;
  return;
}

void Phonebook::_printOption(void) {
  std::cout << "4. Print Phonebook ! " << GREEN << "PRINT" << RESET
            << std::endl;
  return;
}

void Phonebook::_whatNext(void) {
  std::cout << std::endl;
  std::cout << GREEN << "What next ?" << RESET << std::endl;
  _options();
  _printOption();
  std::cout << std::endl;
  std::cout << "Please type in the appropriate command:" << std::endl;
  return;
}

void Phonebook::_contactAdded(void) {
  std::cout << GREEN << "Contat added !" << RESET << std::endl;
  _whatNext();
  return;
}

void Phonebook::_searchMessage(void) {
  std::cout << std::endl;
  std::cout << "Please enter contact's id# :" << std::endl;
}

//============================================================ Check ContactID
char Phonebook::_checkContactID(char contactID) {
  if ((contactID - '0') < 0 || (int)contactID > 9)
    std::cout << RED << "Wrong input.\n"
              << RESET << "Contact ID must be between 1 and 8" << std::endl;
  return contactID;
}

//============================================================ Check Input
std::string Phonebook::_checkInput(std::string input) {
  if (input == "ADD" || input == "SEARCH" || input == "EXIT" ||
      input == "PRINT")
    return input;
  else if (input != "ADD" && input != "SEARCH" && input != "EXIT" &&
           input != "PRINT" && input != "") {
    while (input != "ADD" && input != "SEARCH" && input != "EXIT") {
      std::cout << RED << "Wrong input !\nPlease enter one of the following commands :" << RESET << std::endl;
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
