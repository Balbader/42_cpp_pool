#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include "define.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class Contact {

public:
  Contact(void);
  ~Contact(void);

  void getContactInfo(void);

  void printContactInfo(Contact, int);

  void setFirstName(std::string);
  std::string getFirstName(void) const;

  void setLastName(std::string);
  std::string getLastName(void) const;

  void setNickname(std::string);
  std::string getNickname(void) const;

  void setPhoneNumber(std::string);
  std::string getPhoneNumber(void) const;

  void setDarkestSecret(std::string);
  std::string getDarkestSecret(void) const;

  std::string getInput(std::string, std::string, std::string, std::string);

  int checkNumber(std::string input);
  std::string getNumber(std::string, std::string, std::string, std::string);

private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;
  std::string _index;
};

#endif // !CONTACTCLASS_H
