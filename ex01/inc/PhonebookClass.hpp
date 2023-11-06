#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

class Phonebook {
  Contact _contactList[3];
  int _contactCount;
  std::string _checkInput(std::string);
  void _welcomeMessage(void);
  void _withPrintOption(void);
  void _options(void);
  void _printOption(void);
  void _whatNext(void);
  void _contactAdded(void);

public:
  Phonebook(void);
  void runProgram(void);
  void addContact(int, int);
  void printContact(int index);
  void printContactList(void);
  ~Phonebook(void);
};

#endif // !PHONEBOOKCLASS_H
