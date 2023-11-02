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

void Phonebook::addContact(Contact contact) { (void)contact; }

void Phonebook::printContact(int index) { (void)index; }

void Phonebook::printContactList(void) {}
