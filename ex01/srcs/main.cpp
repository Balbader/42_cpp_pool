#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

int main(void) {
  std::string input;
  Phonebook newPhonebook;

  while (true) {
    std::cout << "Please enter your command: " << std::endl;
    std::cin >> input;
    if (input == "EXIT")
      break;
    else if (input == "ADD") {
      Contact newContact = GetContactInfo();
      if (!my_phonebook.add_contact(new_contact))
        std::cout << "Contact list is full" << std::endl;
    } else if (input == "SEARCH") {
      newPhonebook.printContactList();
      std::cout
          << "Please enter the index you'd like to see more information of"
          << std::endl;
      std::cin >> input;
      int index = (int)(input.at(0) - 48);
      newPhonebook.print_selected_contact(index);
    }
  }
  return (0);
}
