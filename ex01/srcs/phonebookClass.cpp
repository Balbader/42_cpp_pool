#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

Phonebook::Phonebook(void) {
  std::cout << GREEN
            << "----------------------------> Phonebook Constructor Called!"
            << RESET << std::endl;
};

Phonebook::~Phonebook(void) {
  std::cout << RED
            << "----------------------------> Phonebook Destructor Called!"
            << RESET << std::endl;
};

bool Phonebook::addContact(Contact contact) {
  if (_contactCount >= 8)
    return false;
  _contactList[_contactsCount] = contact;
  _contactsCount++;
  return true;
}

void Phonebook::printContact() {
  Contact newContact;
  newContact.printContactInfo();
}

void Phonebook::printContact(int index) {

  if (index < 0 || index > 7 || index >= this->_contactsCount) {
    std::cout << "Sorry, this index is invalid." << std::endl;
    return;
  }
  _contactList[index]
      .print_all_contact_fields(); // ------------------------------> !!!!!
}

void Phonebook::printContactList(void) {

  std::cout << std::setw(10) << "index"
            << "|"
            << "first name"
            << "|"
            << "last name"
            << "|"
            << "nickname" << std::endl;

  for (int i = 0; i < _contactCount; i++)
    _contactList[i].printContact(i);
}

void Phonebook::runProgram() {
  Contact newContact;
  newContact.GetContactInfo();
};
