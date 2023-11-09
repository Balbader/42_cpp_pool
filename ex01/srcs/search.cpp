#include "SearchClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

//============================================================ Display Messages
void Search::_searchMessage(void) {
  std::cout << BLUE << "Please enter contact's name :" << RESET << std::endl;
  return;
}

void Search::_searchContact(Contact _contactList[3]) {
  std::string input;
  std::getline(std::cin, input);
  return;
}

std::string Search::_nameToUpper(std::string contactName) {
  for (int i = 0; i < contactName.length(); ++i) {
    std::toupper(contactName[i]);
  }
  return contactName;
}
