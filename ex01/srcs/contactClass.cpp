#include "ContactClass.hpp"

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
void Contact::setFirstName(std::string input) {
  _firstName = getInput(ENTER, FIRST, EMPTY, input);
  return;
}
std::string Contact::getFirstName(void) const { return _firstName; }

//============================================================ Contact lastName
void Contact::setLastName(std::string input) {
  _lastName = getInput(ENTER, LAST, EMPTY, input);
  return;
}
std::string Contact::getLastName(void) const { return _lastName; }

//============================================================ Contact Nickname
void Contact::setNickname(std::string input) {
  _nickname = getInput(ENTER, NICK, EMPTY, input);
  return;
}
std::string Contact::getNickname(void) const { return _nickname; }

//============================================================ Contact Phone
void Contact::setPhoneNumber(std::string input) {
  _phoneNumber = getInput(ENTER, PHONE, EMPTY, input);
  return;
}
std::string Contact::getPhoneNumber(void) const { return _phoneNumber; }

//============================================================ Contact Secret
void Contact::setDarkestSecret(std::string input) {
  _darkestSecret = getInput(ENTER, SECRET, EMPTY, input);
  return;
}
std::string Contact::getDarkestSecret(void) const { return _darkestSecret; }

//============================================================ Contact Info
void Contact::getContactInfo(void) {

  std::string input = "";

  std::cout << GREEN << "New Contact Information:" << std::endl;
  setFirstName(input);
  setLastName(input);
  setNickname(input);
  setPhoneNumber(input);
  setDarkestSecret(input);
  return;
}

void Contact::printContactInfo(Contact newContact, int index) {
  std::cout << std::endl;
  std::cout << std::setw(10) << index << " | " << newContact.getFirstName()
            << " | " << newContact.getLastName() << " | "
            << newContact.getNickname() << std::endl;
  return;
}
