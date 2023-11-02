#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

class Phonebook {
public:
  void runProgram();
  void addContact();
  void printContact();
  Phonebook();
  ~Phonebook();
};

#endif // !PHONEBOOKCLASS_H
