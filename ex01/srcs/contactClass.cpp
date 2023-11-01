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

//============================================================ Contact firstName
void Contact::_SetFirstName(std::string input) {
  std::cout << BLUE << ENTERFIRST << RESET << std::endl;
  std::getline(std::cin, input);
  while (input.length() == 0) {
    std::cout << EMPTY << "first name." << std::endl;
    std::cout << std::endl;
    std::cout << BLUE << ENTERFIRST << RESET << std::endl;
    std::getline(std::cin, input);
  }
  _firstName = input;
  return;
};
std::string Contact::_GetFirstName() const { return _firstName; };

//============================================================ Contact lastName
void Contact::_SetLastName(std::string input) {
  std::cout << BLUE << ENTERLAST << RESET << std::endl;
  std::getline(std::cin, input);
  while (input.length() == 0) {
    std::cout << EMPTY << "last name." << std::endl;
    std::cout << std::endl;
    std::cout << BLUE << ENTERLAST << RESET << std::endl;
    std::getline(std::cin, input);
  }
  _lastName = input;
  return;
};
std::string Contact::_GetLastName() const { return _lastName; };

//============================================================ Contact
// nickname
void Contact::_SetNickname(std::string input) {
  std::cout << BLUE << ENTERNICK << RESET << std::endl;
  std::getline(std::cin, input);
  while (input.length() == 0) {
    std::cout << EMPTY << "nickname." << std::endl;
    std::cout << std::endl;
    std::cout << BLUE << ENTERNICK << RESET << std::endl;
    std::getline(std::cin, input);
  }
  _nickname = input;
  return;
};
std::string Contact::_GetNickname() const { return _nickname; };

//============================================================ Contact
// phoneNumber
void Contact::_SetPhoneNumber(std::string input) {
  std::cout << BLUE << ENTERPHONE << RESET << std::endl;
  std::getline(std::cin, input);
  while (input.length() == 0) {
    std::cout << EMPTY << " phone number." << std::endl;
    std::cout << BLUE << ENTERPHONE << RESET << std::endl;
    std::getline(std::cin, input);
  }
  _phoneNumber = input;
  return;
};
std::string Contact::_GetPhoneNumber() const { return _phoneNumber; };

//============================================================ Contact
// darkestSecret
void Contact::_SetDarkestSecret(std::string input) {
  std::cout << BLUE << ENTERDARK << RESET << std::endl;
  std::getline(std::cin, input);
  while (input.length() == 0) {
    std::cout << EMPTY << " darkest secret." << std::endl;
    std::cout << BLUE << ENTERDARK << RESET << std::endl;
    std::getline(std::cin, input);
  }
  _darkestSecret = input;
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
