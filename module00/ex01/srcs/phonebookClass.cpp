/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:10:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/14 13:10:58 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"
#include "define.hpp"
#include <ctype.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <string>

// ---------------------------------------------------------------> Constructor
Phonebook::Phonebook(void){};

Phonebook::~Phonebook(void){};


// ---------------------------------------------------------------> Add Contact
void Phonebook::addContact(int index)
{
    Contact newContact;

    std::cout << std::endl;

    newContact.getContactInfo();
    _contactList[index] = newContact;
}


// ---------------------------------------------------------------> Print Field
void Phonebook::printField(std::string input)
{
    if (input.length() > 10)
        std::cout << input.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << input << "|";
}


// ----------------------------------------------------> Print Specific Contact

void Phonebook::printContact(std::string contactID)
{
    const char *id = contactID.c_str();

    std::cout << std::endl;

    if (_contactList[atoi(id) - 1].getFirstName() == "")
        std::cout << RED << "Contact doesn't exist!" << RESET << std::endl;

    else
    {
        for (int i = 0; i < 8; ++i)
        {
            if (atoi(id) - 1 == i)
            {
                std::cout << GREEN << "Search result :" << RESET << std::endl;
                std::cout << std::setw(10) << contactID << "|";

                printField(_contactList[i].getFirstName());
                printField(_contactList[i].getLastName());
                printField(_contactList[i].getNickname());
                printField(_contactList[i].getPhoneNumber());
                printField(_contactList[i].getDarkestSecret());

                std::cout << std::endl;
            }
        }
    }
}


// --------------------------------------------------------> Print Contact List
void Phonebook::printContactList(int index)
{
    std::cout << std::endl << GREEN << "Contact's List :" << RESET << std::endl;

    for (int i = 0; i < index; ++i)
    {
        std::cout << std::setw(10) << i + 1 << "|";

        printField(_contactList[i].getFirstName());
        printField(_contactList[i].getLastName());
        printField(_contactList[i].getNickname());

        std::cout << std::endl;
    }
}


// ---------------------------------------------------------------> Run Program
void Phonebook::runProgram(void)
{
    Phonebook newBook;
    std::string input;
    int index = 0;
    int contactLen = 0;
    int totCount = 0;

    _printWelcomeMessage();

    _printOptions();

    while (true)
    {
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            _printExitMessage();
            break;
        }

        input = _checkInput(input);

        if (input == "ADD")
        {
            ++contactLen;
            if (contactLen > 8)
                contactLen = 8;

            if (index > 7)
                index = 0;

            newBook.addContact(index);
            ++index;

            _contactAdded();
        }

        else if (input == "SEARCH")
        {
            if (contactLen == 0)
                _isEmpty();

            else
            {
                std::string contactID;

                newBook.printContactList((contactLen > index) ? contactLen : index);

                _printSearchMessage();

                std::getline(std::cin, contactID);
                if (std::cin.eof())
                {
                    _printExitMessage();
                    break;
                }

                contactID = _checkContactID(contactID);

                newBook.printContact(contactID);
            }

            _whatNext();
        }

        else if (input == "EXIT")
        {
            std::cout << RED << "EXIT command entered!" << RESET << std::endl;
            break;
        }

        else if (input == "PRINT")
        {
            newBook.printContactList(8);
            _whatNext();
        }
    }
}
