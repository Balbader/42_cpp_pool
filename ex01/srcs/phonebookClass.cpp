#include "PhonebookClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

Phonebook::Phonebook() {
  std::cout << GREEN
            << "----------------------------> Phonebook Constructor Called!"
            << RESET << std::endl;
};

Phonebook::~Phonebook() {
  std::cout << RED
            << "----------------------------> Phonebook Destructor Called!"
            << RESET << std::endl;
};

void Phonebook::RunProgram() {

  Contact newContact;

  newContact.GetContactInfo();
};
