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
void Phonebook::printContact(std::string contactName) {
  Search newSearch;
  std::string name;

  name = newSearch.nameToUpper(contactName);
  std::cout << "Name to upper : " << name << std::endl;
}

// ---------------------------------------------------> Print Contact List
// Prints the full list of phonebook content
void Phonebook::printContactList(int index) {
  std::cout << std::endl;
  std::cout << GREEN << "Contact's List :" << RESET << std::endl;
  for (int i = 0; i < index; ++i) {
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
  while (true) {
    std::getline(std::cin, input);
    input = _checkInput(input);
    if (input == "ADD") {
      index = newBook.addContact(index);
      _contactAdded();
    } else if (input == "SEARCH") {
      std::cout << RED << "SEARCH command entered!" << RESET << std::endl;
    } else if (input == "EXIT") {
      std::cout << RED << "EXIT command entered!" << RESET << std::endl;
      break;
    } else if (input == "PRINT") {
      newBook.printContactList(index);
      _whatNext();
    }
  }
  return;
}
