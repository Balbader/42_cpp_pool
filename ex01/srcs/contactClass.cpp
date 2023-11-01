#include "ContactClass.hpp"
#include <iomanip>
#include <iostream>
#include <string>

Contact::Contact() {
  std::cout << GREEN
            << "----------------------------> Contact Constructor Called!"
            << RESET << std::endl;
  return;
}

Contact::~Contact() {
  std::cout << RED << "---------------------------->Contact Destructor Called!"
            << RESET << std::endl;
  return;
}

//============================================================ Get Input
std::string Contact::GetInput(std::string enter, std::string attr,
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
void Contact::_SetFirstName(std::string input) {
  _firstName = GetInput(ENTER, FIRST, EMPTY, input);
  return;
};
std::string Contact::_GetFirstName() const { return _firstName; };

//============================================================ Contact lastName
void Contact::_SetLastName(std::string input) {
  _lastName = GetInput(ENTER, LAST, EMPTY, input);
  return;
};
std::string Contact::_GetLastName() const { return _lastName; };

//============================================================ Contact Nickname
void Contact::_SetNickname(std::string input) {
  _nickname = GetInput(ENTER, NICK, EMPTY, input);
  return;
};
std::string Contact::_GetNickname() const { return _nickname; };

//============================================================ Contact Phone
void Contact::_SetPhoneNumber(std::string input) {
  _phoneNumber = GetInput(ENTER, PHONE, EMPTY, input);
  return;
};
std::string Contact::_GetPhoneNumber() const { return _phoneNumber; };

//============================================================ Contact Secret
void Contact::_SetDarkestSecret(std::string input) {
  _darkestSecret = GetInput(ENTER, SECRET, EMPTY, input);
  return;
}
std::string Contact::_GetDarkestSecret() const { return _darkestSecret; }

//============================================================ Contact Info
void Contact::GetContactInfo() {

  std::string input = "";

  _SetFirstName(input);
  _SetLastName(input);
  _SetNickname(input);
  _SetPhoneNumber(input);
  _SetDarkestSecret(input);

  std::cout << std::endl;
  std::cout << "Contact's Name: " << GREEN << _GetFirstName() << " " << GREEN
            << _GetLastName() << RESET << std::endl;
  std::cout << "Contact's Nickname: " << GREEN << _GetNickname() << RESET
            << std::endl;
  std::cout << "Contact's Phone Number: " << GREEN << _GetPhoneNumber() << RESET
            << std::endl;
  std::cout << "Contact's Darkest Secret: " << RED << _GetDarkestSecret()
            << RESET << std::endl;
  std::cout << std::endl;
  return;
}
