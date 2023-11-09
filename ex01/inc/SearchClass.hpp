#ifndef SEARCHCLASS_HPP
#define SEARCHCLASS_HPP

#include "ContactClass.hpp"
#include "PhonebookClass.hpp"
#include <iomanip>
#include <iostream>

class Search {
  void _searchMessage(void);

public:
  void searchContact(Contact);
  std::string nameToUpper(std::string);
};

#endif // !SEARCHCLASS_HPP
