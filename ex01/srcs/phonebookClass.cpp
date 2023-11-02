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

void Phonebook::printContact() {
  Contact newContact;
  newContact.printContactInfo();
}

void Phonebook::runProgram() {
  Contact newContact;
  newContact.GetContactInfo();
};

void runProgram();
void addContact(Contact newContact);
void printContact(int index);
void printContactList(void);

bool Phonebook::add_contact(Contact contact) {
  if (_contacts_count >= 8)
    return false;
  _contacts[_contacts_count] = contact;
  _contacts_count++;
  return true;
}

void Phonebook::print_selected_contact(int index) {

  if (index < 0 || index > 7 || index >= this->_contacts_count) {
    std::cout << "Sorry, this index is invalid." << std::endl;
    return;
  }
  _contacts[index].print_all_contact_fields();
}

void Phonebook::print_list(void) {

  std::cout << std::setw(10) << "index"
            << "|"
            << "first name"
            << "|"
            << "last name"
            << "|"
            << "nickname" << std::endl;

  for (int i = 0; i < _contacts_count; i++)
    _contacts[i].print_contact(i);
}
