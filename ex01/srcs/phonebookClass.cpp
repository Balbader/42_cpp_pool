#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

// ---------------------------------------------------> Constructor
Phonebook::Phonebook(void) { return; };

// ---------------------------------------------------> Destructor
Phonebook::~Phonebook(void) { return; };

// ---------------------------------------------------> Add Contact
int Phonebook::addContact(int index) {
  Contact newContact;

  if (index > 2)
    index = 0;
  std::cout << std::endl;
  std::cout << RED << "index : " << index << RESET << std::endl;
  newContact.getContactInfo();
  _contactList[index] = newContact;
  ++index;
  return index;
}

// ---------------------------------------------------> Print Specific Contact
void Phonebook::printContact(int index) {
  std::cout << std::endl;
  std::cout << GREEN << "Result :" << RESET << std::endl;
  for (int i = 0; i < 3; ++i) {
    if (i + 1 == index) {
      std::cout << i + 1 << " | " << _contactList[i]._getFirstName() << " | "
                << _contactList[i]._getLastName() << " | "
                << _contactList[i]._getNickname() << " | "
                << _contactList[i]._getPhoneNumber() << " | "
                << _contactList[i]._getDarkestSecret() << std::endl;
    }
  }
}

// ---------------------------------------------------> Print Contact List
// Prints the full list of phonebook content
void Phonebook::printContactList(void) {
  std::cout << std::endl;
  std::cout << GREEN << "Contact's List :" << RESET << std::endl;
  for (int i = 0; i < 3; ++i) {
    std::cout << i + 1 << " | " << _contactList[i]._getFirstName() << " | "
              << _contactList[i]._getLastName() << " | "
              << _contactList[i]._getNickname() << " | "
              << _contactList[i]._getPhoneNumber() << " | "
              << _contactList[i]._getDarkestSecret() << std::endl;
  }
}

// ---------------------------------------------------> Run Program
void Phonebook::runProgram(void) {
  Phonebook newBook;
  std::string input;
  int index = 0;

  std::cout << std::endl;
  std::cout << "Welcome to your new Phonebook !" << std::endl;
  _options();
  contactCount = 0;
  while (true) {
    std::getline(std::cin, input);
    input = _checkInput(input);
    if (input == "ADD") {
      // (contactCount > 2) ? contactCount = 0 : ++contactCount;
      index = newBook.addContact(index);
      _contactAdded();
    } else if (input == "SEARCH") {
      std::cout << RED << "SEARCH command entered!" << RESET << std::endl;
      break;
    } else if (input == "EXIT") {
      std::cout << RED << "EXIT command entered!" << RESET << std::endl;
      break;
    } else if (input == "PRINT") {
      newBook.printContactList();
      _whatNext();
    }
  }
  return;
}
