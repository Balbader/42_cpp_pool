#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include "define.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class Contact {

  // TODO: Do we need to keep this public ????

public:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;

  // Functions Declaration
  void _setFirstName(std::string);       // setter
  std::string _getFirstName(void) const; // getter

  void _setLastName(std::string);
  std::string _getLastName(void) const;

  void _setNickname(std::string);
  std::string _getNickname(void) const;

  void _setPhoneNumber(std::string);
  std::string _getPhoneNumber(void) const;

  void _setDarkestSecret(std::string);
  std::string _getDarkestSecret(void) const;

public:
  Contact(void);
  int index;
  std::string getInput(std::string, std::string, std::string, std::string);
  void getContactInfo(void);
  void printContactInfo(Contact, int);
  ~Contact(void);
};

#endif // !CONTACTCLASS_H
