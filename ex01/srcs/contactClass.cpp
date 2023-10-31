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
}

Contact::~Contact() {
  std::cout << RED << "----------------------------> Destructor Called!"
            << RESET << std::endl;
}

//============================================================ Contact firstName
int Contact::_SetFirstName() {
  std::cout << BLUE << "Enter New Contact First Name:" << RESET << std::endl;
  std::getline(std::cin, _firstName);
  if (_firstName.length() == 0)
    return (-1);
  return 0;
};
std::string Contact::_GetFirstName() const { return _firstName; };

//============================================================ Contact lastName
int Contact::_SetLastName() {
  std::cout << BLUE << "Enter New Contact Last Name:" << RESET << std::endl;
  std::getline(std::cin, _lastName);
  if (_lastName.length() == 0)
    return (-1);
  return 0;
};
std::string Contact::_GetLastName() const { return _lastName; };

//============================================================ Contact nickname
int Contact::_SetNickname() {
  std::cout << BLUE << "Enter New Contact Nickname:" << RESET << std::endl;
  std::getline(std::cin, _nickname);
  if (_nickname.length() == 0)
    return (-1);
  return 0;
};
std::string Contact::_GetNickname() const { return _nickname; };

//============================================================ Contact
// phoneNumber
int Contact::_SetPhoneNumber() {
  std::cout << BLUE << "Enter New Contact 8 Digits Phone Number:" << RESET
            << std::endl;
  std::getline(std::cin, _phoneNumber);
  if (_phoneNumber.length() == 0)
    return (-1);
  return 0;
};
std::string Contact::_GetPhoneNumber() const { return _phoneNumber; };

//============================================================ Contact
// darkestSecret
int Contact::_SetDarkestSecret() {
  std::cout << BLUE << "Enter New Contact Darkest Secret:" << RESET
            << std::endl;
  std::getline(std::cin, _darkestSecret);
  if (_darkestSecret.length() == 0)
    return (-1);
  return 0;
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
