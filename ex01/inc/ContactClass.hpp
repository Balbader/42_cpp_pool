#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include "define.hpp"
#include <iostream>

class Contact {
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;

  // Functions Declaration
  int _SetFirstName();               // setter
  std::string _GetFirstName() const; // getter

  int _SetLastName();
  std::string _GetLastName() const;

  int _SetNickname();
  std::string _GetNickname() const;

  int _SetPhoneNumber();
  std::string _GetPhoneNumber() const;

  int _SetDarkestSecret();
  std::string _GetDarkestSecret() const;

public:
  Contact();
  void GetContactInfo();
  ~Contact();
};

#endif // !CONTACTCLASS_H
