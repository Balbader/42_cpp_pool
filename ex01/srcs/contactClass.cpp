/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:53:20 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/30 10:53:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include <string>

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""),
	_phoneNumber(""), _darkestSecret("") {
	std::cout << GREEN << "----------------------------> Constructor Called!" \
		<< RESET << std::endl;
	// std::cout << GREEN << "Constructor Called!" << RESET << std::endl;
}

Contact::~Contact() {
	std::cout << RED << "----------------------------> Destructor Called!" \
		<< RESET << std::endl;
	// std::cout << RED << "Destructor Called!" << RESET << std::endl;
}
//============================================================ Contact firstName
void Contact::_ftSetFirstName() {
	std::cout << YELLOW << "Enter New Contact First Name:" << RESET << std::endl;
	std::cin >> _firstName;
};
std::string Contact::_ftGetFirstName() const {
	return _firstName;
};

//============================================================ Contact lastName
void Contact::_ftSetLastName() {
	std::cout << YELLOW << "Enter New Contact Last Name:" << RESET << std::endl;
	std::cin >> _lastName;
};
std::string Contact::_ftGetLastName() const {
	return _lastName;
};

//============================================================ Contact nickname
void Contact::_ftSetNickname() {
	std::cout << YELLOW << "Enter New Contact Nickname:" << RESET << std::endl;
	std::cin >> _nickname;
};
std::string Contact::_ftGetNickname() const {
	return _nickname;
};

//============================================================ Contact phoneNumber
void Contact::_ftSetPhoneNumber() {
	std::cout << YELLOW << "Enter New Contact 8 Digits Phone Number:" << RESET \
		<< std::endl;
	std::cin >> _phoneNumber;
};
std::string Contact::_ftGetPhoneNumber() const {
	return _phoneNumber;
};

//============================================================ Contact darkestSecret
void Contact::_ftSetDarkestSecret() {
	std::cout << YELLOW << "Enter New Contact Darkest Secret:" << RESET << std::endl;
	std::cin >> _darkestSecret;
}
std::string Contact::_ftGetDarkestSecret() const {
	return _darkestSecret;
}

//============================================================ Run Program function
void Contact::ftGetUserInfo() {

	_ftSetFirstName();
	_ftSetLastName();
	_ftSetNickname();
	_ftSetPhoneNumber();
	_ftSetDarkestSecret();

	std::cout << "Contact's Name: " << GREEN << _ftGetFirstName() << " " \
		<< GREEN << _ftGetLastName() << RESET << std::endl;
	std::cout << "Contact's Nickname: " << GREEN << _ftGetFirstName() << RESET \
		<< std::endl;
	std::cout << "Contact's Phone Number: " << GREEN << _ftGetPhoneNumber() << RESET \
		<< std::endl;
	std::cout << "Contact's Darkest Secret: " << RED << _ftGetDarkestSecret() << RESET \
		<< std::endl;
}
