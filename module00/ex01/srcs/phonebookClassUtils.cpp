#include "PhonebookClass.hpp"

//-----------------------------------------------------------> Display Messages
void Phonebook::_printWelcomeMessage(void)
{
    std::cout << "Welcome to your new Phonebook !\n" << std::endl;
}

void Phonebook::_printOptions(void)
{
      std::cout << "Here are your options :" << std::endl;
      std::cout << "1. Add a new contact : " << GREEN << "ADD" << RESET << std::endl;
      std::cout << "2. Search for an existing contact : " << GREEN << "SEARCH" << RESET << std::endl;
      std::cout << "3. Quit the program : " << GREEN << "EXIT" << RESET << std::endl;
      std::cout << "4. Print Phonebook : " << GREEN << "PRINT" << RESET << std::endl;
}

void Phonebook::_whatNext(void)
{
    std::cout << std::endl << GREEN << "What next ?" << RESET << std::endl;

    _printOptions();

    std::cout << std::endl << "Please type in the appropriate command:" << std::endl;
}

void Phonebook::_contactAdded(void)
{
    std::cout << GREEN << "Contat added !" << RESET << std::endl;

    _whatNext();
}

void Phonebook::_printSearchMessage(void)
{
    std::cout << std::endl << "Please enter contact's id# :" << std::endl;
}

void Phonebook::_printExitMessage(void)
{
    std::cout << std::endl << RED << "Exiting the phonebook. All contacts are lost forever." << RESET << std::endl;
}

void Phonebook::_printCheckIdErrMessage(int contactID)
{
    std::cout << RED << "Contat ID out of range.\n" << RESET << "Contact ID must be between 1 and 8: " << contactID << std::endl;
}

void Phonebook::_isEmpty()
{
    std::cout << std::endl << RED << "Phonebook is empty.\n" << RESET << "Enter 'ADD' to create a new contact." << std::endl;
}


//------------------------------------------------------------> Check ContactID
// FIX: infinite loop when wrong input is enterd
//
// TODO:  . change contactID from int to std::string || char
//        . check if the length of the string is over 1
//        . check if contactID is numeric
//
// int Phonebook::_checkContactID(int contactID)
int Phonebook::_checkContactID(std::string contactID)
{
    if (!isdigit(contactID) || contactID < 1 || contactID > 8)
    {
        while (!std::isdigit(contactID) || contactID < 1 || contactID > 8)
        {
            _printCheckIdErrMessage(contactID);

            std::cin.get();
            std::cin >> contactID;

            if (std::cin.eof())
                break;

            if (contactID > 0 && contactID < 9)
            {
                break;
                return contactID;
            }
        }
    }

    return contactID;
}

//----------------------------------------------------------------> Check Input
std::string Phonebook::_checkInput(std::string input)
{
    if (input == "ADD" || input == "SEARCH" || input == "EXIT" || input == "PRINT")
        return input;

    else if (input != "ADD" && input != "SEARCH" && input != "EXIT" && input != "PRINT" && input != "")
    {
        while (input != "ADD" && input != "SEARCH" && input != "EXIT")
        {
            std::cout << RED << "Wrong input !\nPlease enter one of the following commands :" << RESET << std::endl;
            std::cout << BLUE << "1. ADD" << RESET << std::endl;
            std::cout << BLUE << "2. SEARCH" << RESET << std::endl;
            std::cout << BLUE << "3. EXIT" << RESET << std::endl;
            std::cout << BLUE << "4. PRINT" << RESET << std::endl;

            std::getline(std::cin, input);

            if (std::cin.eof())
                break;

            if (input == "ADD" || input == "SEARCH" || input == "EXIT" || input == "PRINT")
                break;
        }
    }

    return input;
}
