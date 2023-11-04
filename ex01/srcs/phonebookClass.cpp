#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

Phonebook::Phonebook(void) { return; };

Phonebook::~Phonebook(void) { return; };

void Phonebook::addContact(int i) {
  Contact newContact;

  std::cout << std::endl;
  newContact.getContactInfo();
  _contactList[i] = newContact;
  newContact.printContactInfo(_contactList[i], i);
}

void Phonebook::printContact(int index) { (void)index; }

void Phonebook::printContactList(void) {}

void Phonebook::runProgram(void) {
  Phonebook newBook;
  std::string input;

  _printOptions();
  std::getline(std::cin, input);
  input = _checkInput(input);
  if (input == "ADD") {
    newBook.addContact(0);
  } else if (input == "SEARCH") {
    std::cout << RED << "SEARCH command entered!" << RESET << std::endl;
    return;
  } else if (input == "EXIT")
    std::cout << RED << "EXIT command entered!" << RESET << std::endl;
  return;
}
