/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:53:20 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/30 10:53:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include <string>

Contact::Contact()
    : _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""),
      _darkestSecret("") {
  std::cout << GREEN << "----------------------------> Constructor Called!"
            << RESET << std::endl;
  // std::cout << GREEN << "Constructor Called!" << RESET << std::endl;
}

Contact::~Contact() {
  std::cout << RED << "----------------------------> Destructor Called!"
            << RESET << std::endl;
  // std::cout << RED << "Destructor Called!" << RESET << std::endl;
}

//============================================================ Set User Info
int Contact::_SetUserInput(std::string str) {
  std::string tmp;

  std::getline(std::cin, tmp);
  if (tmp.length() == 0)
    return (-1);
  str = tmp;
  std::cout << "_SetUserInput str : " << str << std::endl;
  return 0;
}

std::string Contact::_GetUserInput(std::string str) const { return str; }

//============================================================ Contact firstName
int Contact::_SetFirstName() {
  std::cout << BLUE << "Enter New Contact First Name:" << RESET << std::endl;
  return _SetUserInput(_firstName);
};
std::string Contact::_GetFirstName() const {
  return _GetUserInput(_firstName);
};

//============================================================ Contact lastName
int Contact::_SetLastName() {
  std::cout << BLUE << "Enter New Contact Last Name:" << RESET << std::endl;
  return _SetUserInput(_lastName);
};
std::string Contact::_GetLastName() const { return _lastName; };

//============================================================ Contact nickname
int Contact::_SetNickname() {
  std::cout << BLUE << "Enter New Contact Nickname:" << RESET << std::endl;
  return _SetUserInput(_nickname);
};
std::string Contact::_GetNickname() const { return _nickname; };

//============================================================ Contact
// phoneNumber
int Contact::_SetPhoneNumber() {
  std::cout << BLUE << "Enter New Contact 8 Digits Phone Number:" << RESET
            << std::endl;
  return _SetUserInput(_phoneNumber);
};
std::string Contact::_GetPhoneNumber() const { return _phoneNumber; };

//============================================================ Contact
// darkestSecret
int Contact::_SetDarkestSecret() {
  std::cout << BLUE << "Enter New Contact Darkest Secret:" << RESET
            << std::endl;
  return _SetUserInput(_darkestSecret);
}
std::string Contact::_GetDarkestSecret() const { return _darkestSecret; }

//============================================================ Contact Info
void Contact::GetContactInfo() {

  _SetFirstName();
  _SetLastName();
  _SetNickname();
  _SetPhoneNumber();
  _SetDarkestSecret();

  std::cout << "Contact's Name: " << GREEN << _GetFirstName() << " " << GREEN
            << _GetLastName() << RESET << std::endl;
  std::cout << "Contact's Nickname: " << GREEN << _GetNickname() << RESET
            << std::endl;
  std::cout << "Contact's Phone Number: " << GREEN << _GetPhoneNumber() << RESET
            << std::endl;
  std::cout << "Contact's Darkest Secret: " << RED << _GetDarkestSecret()
            << RESET << std::endl;
}
