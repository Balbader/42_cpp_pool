#ifndef SEARCHCLASS_HPP
#define SEARCHCLASS_HPP

#include "ContactClass.hpp"
#include "PhonebookClass.hpp"
#include <iomanip>
#include <iostream>

class Search {
  void _searchMessage(void);

  void _searchContact(Contact);
  std::string _nameToUpper(std::string);
};

#endif // !SEARCHCLASS_HPP
