#include "ContactClass.hpp"
#include <iomanip>
#include <iostream>
#include <string>

Contact::Contact(void) { return; }

Contact::~Contact(void) { return; }

//============================================================ Get Input
std::string Contact::getInput(std::string enter, std::string attr,
                              std::string empty, std::string input) {
  std::cout << BLUE << enter << attr << RESET << std::endl;
  std::getline(std::cin, input);
  while (input.length() == 0) {
    std::cout << empty << attr << std::endl;
    std::cout << std::endl;
    std::cout << BLUE << enter << attr << RESET << std::endl;
    std::getline(std::cin, input);
  }
  return input;
}

//============================================================ Contact firstname
void Contact::_setFirstName(std::string input) {
  _firstName = getInput(ENTER, FIRST, EMPTY, input);
  return;
}
std::string Contact::_getFirstName(void) const { return _firstName; }

//============================================================ Contact lastName
void Contact::_setLastName(std::string input) {
  _lastName = getInput(ENTER, LAST, EMPTY, input);
  return;
}
std::string Contact::_getLastName(void) const { return _lastName; }

//============================================================ Contact Nickname
void Contact::_setNickname(std::string input) {
  _nickname = getInput(ENTER, NICK, EMPTY, input);
  return;
}
std::string Contact::_getNickname(void) const { return _nickname; }

//============================================================ Contact Phone
void Contact::_setPhoneNumber(std::string input) {
  _phoneNumber = getInput(ENTER, PHONE, EMPTY, input);
  return;
}
std::string Contact::_getPhoneNumber(void) const { return _phoneNumber; }

//============================================================ Contact Secret
void Contact::_setDarkestSecret(std::string input) {
  _darkestSecret = getInput(ENTER, SECRET, EMPTY, input);
  return;
}
std::string Contact::_getDarkestSecret(void) const { return _darkestSecret; }

//============================================================ Contact Info
void Contact::getContactInfo(void) {

  std::string input = "";

  std::cout << GREEN << "New Contact Information:" << std::endl;
  _setFirstName(input);
  _setLastName(input);
  _setNickname(input);
  _setPhoneNumber(input);
  _setDarkestSecret(input);
  return;
}

void Contact::printContactInfo(Contact newContact, int index) {
  std::cout << std::endl;
  std::cout << std::setw(10) << index << " | " << newContact._getFirstName()
            << " | " << newContact._getLastName() << " | "
            << newContact._getNickname() << std::endl;
  return;
}
