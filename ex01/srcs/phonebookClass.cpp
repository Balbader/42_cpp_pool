#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

// ---------------------------------------------------> Constructor
Phonebook::Phonebook(void) { return; };

// ---------------------------------------------------> Destructor
Phonebook::~Phonebook(void) { return; };

// ---------------------------------------------------> Add Contact
void Phonebook::addContact(int index, int _contactCount) {
  Contact newContact;

  std::cout << std::endl;
  newContact.getContactInfo();
  if (_contactCount > 3) {
    std::cout << "_contactCount : " << _contactCount << std::endl;
    _contactCount = 0;
    _contactList[_contactCount] = newContact;
  } else {
    std::cout << "index : " << index << std::endl;
    _contactList[index] = newContact;
    std::cout << "_contactCount : " << _contactCount << std::endl;
  }
  std::cout << std::endl;
}

// ---------------------------------------------------> Print Specific Contact
void Phonebook::printContact(int index) { (void)index; }

// ---------------------------------------------------> Print Contact List
void Phonebook::printContactList(void) {
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

  _contactCount = 0;
  while (true) {
    _printOptions();
    std::getline(std::cin, input);
    input = _checkInput(input);
    if (input == "ADD") {
      ++_contactCount;
      newBook.addContact(index, _contactCount);
      ++index;
      _keepGoing();
    } else if (input == "SEARCH") {
      std::cout << RED << "SEARCH command entered!" << RESET << std::endl;
      break;
    } else if (input == "EXIT") {
      std::cout << RED << "EXIT command entered!" << RESET << std::endl;
      break;
    } else if (input == "PRINT") {
      newBook.printContactList();
    }
  }
  return;
}
