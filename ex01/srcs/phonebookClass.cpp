#include "PhonebookClass.hpp"
#include "define.hpp"
#include <ctype.h>
#include <iomanip>
#include <iostream>

// ---------------------------------------------------> Constructor
Phonebook::Phonebook(void) { return; };

// ---------------------------------------------------> Destructor
Phonebook::~Phonebook(void) { return; };

// ---------------------------------------------------> Add Contact
int Phonebook::addContact(int index) {
  Contact newContact;

  // TODO: change index limit from 2 to 7

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
void Phonebook::printContact(char contactID, int index) {
  for (int i = 0; i < index; ++i) {
    if ((contactID - '0') - 1 == i) {
      std::cout << RED << "contactID : " << contactID << "\nindex : " << index
                << RESET << std::endl;
      std::cout << contactID << " | " << _contactList[i]._getFirstName()
                << " | " << _contactList[i]._getLastName() << " | "
                << _contactList[i]._getNickname() << " | "
                << _contactList[i]._getPhoneNumber() << " | "
                << _contactList[i]._getDarkestSecret() << std::endl;
    }
    ++i;
  }
  return;
}

// ---------------------------------------------------> Print Contact List
void Phonebook::printContactList(int index) {
  std::cout << std::endl;
  std::cout << GREEN << "Contact's List :" << RESET << std::endl;
  for (int i = 0; i < index; ++i) {
    std::cout << i + 1 << " | " << _contactList[i]._getFirstName() << " | "
              << _contactList[i]._getLastName() << " | "
              << _contactList[i]._getNickname() << std::endl;
  }
  return;
}

// ---------------------------------------------------> Run Program
void Phonebook::runProgram(void) {
  Phonebook newBook;
  std::string input;
  char contactID;
  int index = 0;

  std::cout << std::endl;
  std::cout << "Welcome to your new Phonebook !" << std::endl;
  _options();
  while (true) {
    std::getline(std::cin, input);
    input = _checkInput(input);
    if (input == "ADD") {
      index = newBook.addContact(index);
      _contactAdded();
    } else if (input == "SEARCH") {
      std::cout << RED << "SEARCH command entered!" << RESET << std::endl;
      newBook.printContactList(index);
      _searchMessage();
      std::cin >> contactID;
      newBook.printContact(contactID, index);
    } else if (input == "EXIT") {
      std::cout << RED << "EXIT command entered!" << RESET << std::endl;
      break;
    } else if (input == "PRINT") {
      newBook.printContactList(3);
      _whatNext();
    }
  }
  return;
}
