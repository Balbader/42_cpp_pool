#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include "define.hpp"
#include <iomanip>
#include <iostream>

class Contact {
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;

  // Functions Declaration
  void _SetFirstName(std::string);   // setter
  std::string _GetFirstName() const; // getter

  void _SetLastName(std::string);
  std::string _GetLastName() const;

  void _SetNickname(std::string);
  std::string _GetNickname() const;

  void _SetPhoneNumber(std::string);
  std::string _GetPhoneNumber() const;

  void _SetDarkestSecret(std::string);
  std::string _GetDarkestSecret() const;

public:
  Contact();
  std::string GetInput(std::string, std::string, std::string, std::string);
  void GetContactInfo();
  ~Contact();
};

#endif // !CONTACTCLASS_H
