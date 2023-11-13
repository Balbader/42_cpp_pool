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
  void printExit(void);
  std::string getInput(std::string, std::string, std::string, std::string);
  int checkNumber(std::string input);
  std::string getNumber(std::string, std::string, std::string, std::string);

  void setFirstName(std::string);
  void setLastName(std::string);
  void setNickname(std::string);
  void setPhoneNumber(std::string);
  void setDarkestSecret(std::string);

  std::string getFirstName(void) const;
  std::string getLastName(void) const;
  std::string getNickname(void) const;
  std::string getPhoneNumber(void) const;
  std::string getDarkestSecret(void) const;

private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;
  std::string _index;
};

#endif // !CONTACTCLASS_H
