#include "PhonebookClass.hpp"
#include "define.hpp"
#include <cstdlib>
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
// void Phonebook::printContact(char contactID, int index) {
void Phonebook::printContact(std::string contactID, int index) {
  std::cout << std::endl;
  for (int i = 0; i < index; ++i) {
    if (atoi(contactID) - 1 == i) {
      std::cout << "Search result :" << std::endl;
      std::cout << std::setw(10) << contactID << "|" << std::setw(10)
                << _contactList[i].getFirstName() << "|" << std::setw(10)
                << _contactList[i].getLastName() << "|" << std::setw(10)
                << _contactList[i].getNickname() << "|" << std::setw(10)
                << _contactList[i].getPhoneNumber() << "|" << std::setw(10)
                << _contactList[i].getDarkestSecret() << "|" << std::endl;
    }
  }
  return;
}

// ---------------------------------------------------> Print Contact List
void Phonebook::printContactList(int index) {
  std::cout << std::endl;
  std::cout << GREEN << "Contact's List :" << RESET << std::endl;
  for (int i = 0; i < index; ++i) {
    std::cout << std::setw(10) << i + 1 << "|" << std::setw(10)
              << _contactList[i].getFirstName() << "|" << std::setw(10)
              << _contactList[i].getLastName() << "|" << std::setw(10)
              << _contactList[i].getNickname() << "|" << std::endl;
  }
  return;
}

// ---------------------------------------------------> Run Program
void Phonebook::runProgram(void) {
  Phonebook newBook;
  std::string input;
  std::string contactID;
  int index = 0;

  _welcomeMessage();
  _options();
  while (true) {
    if (input == "1")
      std::cout << "Farine" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof()) {
      std::cout << std::endl
                << "Exiting the phonebook. All contacts are lost forever."
                << std::endl;
      break;
    }
    if (_checkInput(input) == 1) // NOTE: turn _checkInput() to a bool ???
      continue;
    if (input == "ADD") {
      if (index > 2)
        index = 0;
      newBook.addContact(index);
      ++index;
      _contactAdded();
    } else if (input == "SEARCH") {
      // FIX: if _contactList is empty display error message
      newBook.printContactList(index);
      _searchMessage();

      // FIX: handle case if "contactID" is out of range / non existant
      // std::cin >> contactID;
      std::getline(std::cin, contactID);
      // contactID = _checkContactID(contactID);

      // FIX: make sure that after printing the contact, "_whatNext()" is
      // displayed and not "_checkInput()" message
      newBook.printContact(contactID, index);
      // _whatNext();

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
