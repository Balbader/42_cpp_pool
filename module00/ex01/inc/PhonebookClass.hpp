/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:12:16 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/14 13:12:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include "define.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

class Phonebook
{
    public:

        Phonebook(void);
        ~Phonebook(void);

        void runProgram(void);
        void addContact(int);
        void printContact(char, int);
        void printContactList(int);
        void printField(std::string);

    private:

        Contact _contactList[8];

        std::string _checkInput(std::string);

        int _checkContactID(std::string);

        void _isEmpty(void);
        void _printWelcomeMessage(void);
        void _withPrintOption(void);
        void _printOptions(void);
        void _whatNext(void);
        void _contactAdded(void);
        void _printSearchMessage(void);
        void _printExitMessage(void);
        void _printCheckIdErrMessage(int);
};

#endif // !PHONEBOOKCLASS_H
