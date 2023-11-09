#include "SearchClass.hpp"
#include "define.hpp"
#include <iomanip>
#include <iostream>

//============================================================ Display Messages
void Search::_searchMessage(void) {
  std::cout << BLUE << "Please enter contact's name :" << RESET << std::endl;
  return;
}

void Search::searchContact(Contact _contactList[3]) {
  std::string name;
  std::getline(std::cin, name);
  name = nameToUpper(name);
  for (int i = 0; i < 8; ++i) {
  }
  return;
}

std::string Search::nameToUpper(std::string contactName) {
  for (int i = 0; i < contactName.length(); ++i) {
    std::toupper(contactName);
  }
  return contactName;
}
