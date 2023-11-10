#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

class Phonebook {

  // TODO: change index limit from 3 to 8
  Contact _contactList[3];

  // std::string _checkInput(std::string);
  int _checkInput(std::string);
  char _checkContactID(char);
  void _welcomeMessage(void);
  void _withPrintOption(void);
  void _options(void);
  void _printOption(void);
  void _whatNext(void);
  void _contactAdded(void);
  void _searchMessage(void);

public:
  Phonebook(void);
  void runProgram(void);
  void addContact(int);
  // void printContact(char, int);
  void printContact(std::string, int);
  void printContactList(int);
  ~Phonebook(void);
};

#endif // !PHONEBOOKCLASS_H
