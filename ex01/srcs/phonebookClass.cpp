#include "PhonebookClass.hpp"

Phonebook::Phonebook() {
  std::cout << GREEN << "Phonebook Constructor Called!" << RESET << std::endl;
};

Phonebook::~Phonebook() {
  std::cout << GREEN << "Phonebook Destructor Called!" << RESET << std::endl;
};

void Phonebook::RunProgram() {

  Contact newContact;

  newContact.GetContactInfo();
};
