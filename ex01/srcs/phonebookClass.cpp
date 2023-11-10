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
void Phonebook::addContact(int index) {
  Contact newContact;

  std::cout << std::endl;
  newContact.getContactInfo();
  _contactList[index] = newContact;
  return;
}

// ---------------------------------------------------> Print Specific Contact
void Phonebook::printContact(char contactID, int index) {
  std::cout << std::endl;
  for (int i = 0; i < index; ++i) {
    if ((int)(contactID - '0') - 1 == i) {
      std::cout << std::setw(10) << contactID << " | " << std::setw(10)
                << _contactList[i].getFirstName() << " | " << std::setw(10)
                << _contactList[i].getLastName() << " | " << std::setw(10)
                << _contactList[i].getNickname() << " | " << std::setw(10)
                << _contactList[i].getPhoneNumber() << " | " << std::setw(10)
                << _contactList[i].getDarkestSecret() << std::endl;
    }
  }
  return;
}

// ---------------------------------------------------> Print Contact List
void Phonebook::printContactList(int index) {
  std::cout << std::endl;
  std::cout << GREEN << "Contact's List :" << RESET << std::endl;
  for (int i = 0; i < index; ++i) {
    std::cout << std::setw(10) << i + 1 << " | " << std::setw(10)
              << _contactList[i].getFirstName() << " | " << std::setw(10)
              << _contactList[i].getLastName() << " | " << std::setw(10)
              << _contactList[i].getNickname() << std::endl;
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
    if (std::cin.eof()) {
      std::cout << std::endl
                << "Exiting the phonebook. All contacts are lost forever."
                << std::endl;
      break;
    }
    input = _checkInput(input);
    if (input == "ADD") {
      if (index > 2)
        index = 0;
      newBook.addContact(index);
      ++index;
      _contactAdded();
    } else if (input == "SEARCH") {
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
