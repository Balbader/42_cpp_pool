/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:10:21 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/14 13:10:25 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"


//----------------------------------------------------------------> Constructor
Contact::Contact(void) {}

Contact::~Contact(void) {}


//----------------------------------------------------------------> Err message
void Contact::printExit(void)
{
    std::cout << std::endl << RED << "Exiting the phonebook. All contacts are lost forever." << RESET << std::endl;
}

void Contact::printDigitErrorMessage(void)
{
    std::cout << std::endl << RED << "Error encountered!\n" << RESET << std::endl;
    std::cout << "Wrong data format. Phone number must contain" << RED << " 10 digits" << RESET << "!" << std::endl;
    std::cout << BLUE << "Please enter valid number:" << RESET << std::endl;
}

void Contact::printCharErrorMessage(void)
{
    std::cout << std::endl << RED << "Error encountered!\n" << RESET << std::endl;
    std::cout << "Wrong data format. Phone number can only contain" << RED << " digits" << RESET << "!" << std::endl;
    std::cout << BLUE << "Please enter valid number:" << RESET << std::endl;
}


//------------------------------------------------------------------> Get Input
std::string Contact::getInput(std::string enter, std::string attr, std::string empty, std::string input)
{
    std::cout << BLUE << enter << attr << RESET << std::endl;

    std::getline(std::cin, input);
    if (std::cin.eof())
        printExit();

    while (input.length() == 0)
    {
        std::cout << RED << "Error encountered!\n" << RESET << std::endl;
        std::cout << empty << PLEASE << attr << std::endl;
        std::cout << BLUE << enter << attr << RESET << std::endl;

        std::getline(std::cin, input);
    }

    return input;
}


//---------------------------------------------------------------> Check number
int Contact::checkNumber(std::string input)
{
    for (int i = 0; i < (int)input.length(); ++i)
    {
        if (!std::isdigit(input[i]))
            return (1);
    }
    return (0);
}


//-----------------------------------------------------------------> Get number
std::string Contact::getNumber(std::string enter, std::string attr, std::string empty, std::string input)
{
    std::cout << BLUE << enter << attr << RESET << std::endl;

    std::getline(std::cin, input);
    if (std::cin.eof())
        printExit();

    while (input.length() == 0 || input.length() > 10 || checkNumber(input) == 1)
    {
        if (input.length() == 0)
        {
            std::cout << RED << empty << RESET << attr << std::endl;
            std::cout << std::endl << BLUE << enter << attr << RESET << std::endl;

            std::getline(std::cin, input);
            if (std::cin.eof())
            {
                printExit();
                break;
            }
        }

        if (input.length() > 10)
        {
            printDigitErrorMessage();

            std::getline(std::cin, input);
            if (std::cin.eof())
            {
                printExit();
                break;
            }
        }

        if (checkNumber(input) == 1)
        {
            printCharErrorMessage();

            std::getline(std::cin, input);
            if (std::cin.eof())
            {
                printExit();
                break;
            }
        }
    }

    return input;
}


//---------------------------------------------------------------> Contact Info
void Contact::getContactInfo(void)
{
    std::string input = "";

    std::cout << GREEN << "New Contact Information:" << std::endl;

    setFirstName(input);
    setLastName(input);
    setNickname(input);
    setPhoneNumber(input);
    setDarkestSecret(input);
}


//----------------------------------------------------------> Contact firstname
void Contact::setFirstName(std::string input)
{
    _firstName = getInput(ENTER, FIRST, EMPTY, input);
}

std::string Contact::getFirstName(void) const { return _firstName; }


//-----------------------------------------------------------> Contact lastName
void Contact::setLastName(std::string input)
{
    _lastName = getInput(ENTER, LAST, EMPTY, input);
}

std::string Contact::getLastName(void) const { return _lastName; }


//-----------------------------------------------------------> Contact Nickname
void Contact::setNickname(std::string input)
{
    _nickname = getInput(ENTER, NICK, EMPTY, input);
}

std::string Contact::getNickname(void) const { return _nickname; }


//--------------------------------------------------------------> Contact Phone
void Contact::setPhoneNumber(std::string input)
{
    _phoneNumber = getNumber(ENTER, PHONE, EMPTY, input);
}

std::string Contact::getPhoneNumber(void) const { return _phoneNumber; }


//-------------------------------------------------------------> Contact Secret
void Contact::setDarkestSecret(std::string input)
{
    _darkestSecret = getInput(ENTER, SECRET, EMPTY, input);
}

std::string Contact::getDarkestSecret(void) const { return _darkestSecret; }
