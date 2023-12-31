/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:12:01 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/14 13:12:03 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include "define.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class Contact
{
public:

    Contact(void);
    ~Contact(void);

    std::string getInput(std::string, std::string, std::string, std::string);
    std::string getNumber(std::string, std::string, std::string, std::string);

    int checkNumber(std::string input);

    void getContactInfo(void);
    void printExit(void);
    void printDigitErrorMessage(void);
    void printCharErrorMessage(void);

    void setFirstName(std::string);
    void setLastName(std::string);
    void setNickname(std::string);
    void setPhoneNumber(std::string);
    void setDarkestSecret(std::string);

    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;

private:

    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
    std::string _index;
};

#endif // !CONTACTCLASS_H
