/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:10:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/30 09:10:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <string>

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), \
		_phoneNumber(""), _darkestSecret("") {
	std::cout << "----------------------------> Constructor Called!" << std::endl;
	// std::cout << GREEN << "Constructor Called!" << RESET << std::endl;
}

Contact::~Contact() {
	std::cout << "----------------------------> Destructor Called!" << std::endl;
	// std::cout << RED << "Destructor Called!" << RESET << std::endl;
}
//============================================================ Contact firstName
void Contact::_ftSetFirstName() {
	std::cout << "Enter New Contact First Name:" << std::endl;
	std::cin >> _firstName;
};
std::string Contact::_ftGetFirstName() const {
	return _firstName;
};

//============================================================ Contact lastName
void Contact::_ftSetLastName() {
	std::cout << "Enter New Contact Last Name:" << std::endl;
	std::cin >> _lastName;
};
std::string Contact::_ftGetLastName() const {
	return _lastName;
};

//============================================================ Contact nickname
void Contact::_ftSetNickname() {
	std::cout << "Enter New Contact Nickname:" << std::endl;
	std::cin >> _nickname;
};
std::string Contact::_ftGetNickname() const {
	return _nickname;
};

//============================================================ Contact phoneNumber
void Contact::_ftSetPhoneNumber() {
	std::cout << "Enter New Contact 8 Digits Phone Number:" << std::endl;
	std::cin >> _phoneNumber;
};
std::string Contact::_ftGetPhoneNumber() const {
	return _phoneNumber;
};

//============================================================ Contact darkestSecret
void Contact::_ftSetDarkestSecret() {
	std::cout << "Enter New Contact Darkest Secret:" << std::endl;
	std::cin >> _darkestSecret;
}
std::string Contact::_ftGetDarkestSecret() const {
	return _darkestSecret;
}

//============================================================ Run Program function
void Contact::ftRunProgram() {

	_ftSetFirstName();
	_ftSetLastName();
	_ftSetNickname();
	_ftSetPhoneNumber();
	_ftSetDarkestSecret();

	std::cout << "Contact's Name: " << _ftGetFirstName() << " " \
		<< _ftGetLastName() << std::endl;
	std::cout << "Contact's Nickname: " << _ftGetFirstName() << std::endl;
	std::cout << "Contact's Phone Number: " << _ftGetPhoneNumber() << std::endl;
	std::cout << "Contact's Darkest Secret: " << _ftGetDarkestSecret() << std::endl;
}
