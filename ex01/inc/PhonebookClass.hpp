#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

class Phonebook {
  Contact _contactList[8];
  int _contactCount;

public:
  Phonebook(void);
  void runProgram(void);
  void addContact(Contact newContact);
  void printContact(int index);
  void printContactList(void);
  ~Phonebook(void);
};

#endif // !PHONEBOOKCLASS_H
