#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include "define.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

class Phonebook {

public:
  Phonebook(void);
  ~Phonebook(void);

  void runProgram(void);
  void addContact(int);
  void printContact(int, int);
  void printContactList(int);

private:
  // TODO: change index limit from 3 to 8
  Contact _contactList[3];

  std::string _checkInput(std::string);
  int _checkContactID(int);
  void _checkIfEmpty(int);
  void _welcomeMessage(void);
  void _withPrintOption(void);
  void _options(void);
  void _printOption(void);
  void _whatNext(void);
  void _contactAdded(void);
  void _searchMessage(void);
};

#endif // !PHONEBOOKCLASS_H
