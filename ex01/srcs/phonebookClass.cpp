#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

Phonebook::Phonebook(void) { return; };

Phonebook::~Phonebook(void) { return; };

void Phonebook::addContact(int i) {
  Contact newContact;
  newContact.getContactInfo();
  _contactList[i] = newContact;
  newContact.printContactInfo(_contactList[i]);
}

void Phonebook::printContact(int index) { (void)index; }

void Phonebook::printContactList(void) {}

void Phonebook::runProgram(void) {
  Phonebook newBook;
  std::string input;
  std::cout << BLUE << "What would you like to do? (ADD, SEARCH, EXIT)" << RESET
            << std::endl;
  std::getline(std::cin, input);
  if (input == "ADD" || input == "add")
    newBook.addContact(0);
  else
    std::cout << "Nothing Done!" << std::endl;
  return;
}
