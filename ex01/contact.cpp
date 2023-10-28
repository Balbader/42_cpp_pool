/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:12:33 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/22 15:12:35 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include <cstring>

// Contact info functions
void Contact::ftSetFirstName() {
	std::cout << "Enter New Contact First Name:" << std::endl;
	std::cin >> firstName;
};
std::string Contact::ftGetFirstName() {
	return firstName;
};
void Contact::ftSetLastName() {
	std::cout << "Enter New Contact Last Name:" << std::endl;
	std::cin >> lastName;
};
std::string Contact::ftGetLastName() {
	return lastName;
};
void Contact::ftSetNickname() {
	std::cout << "Enter New Contact Nickname:" << std::endl;
	std::cin >> nickname;
};
std::string Contact::ftGetNickname() {
	return nickname;
};
void Contact::ftSetPhoneNumber() {
	std::cout << "Enter New Contact 8 Digits Phone Number:" << std::endl;
	std::cin >> phoneNumber;
};
std::string Contact::ftGetPhoneNumber() {
	return phoneNumber;
};
void Contact::ftSetDarkestSecret() {
	std::cout << "Enter New Contact Darkest Secret:" << std::endl;
	std::cin >> darkestSecret;
}
std::string Contact::ftGetDarkestSecret() {
	return darkestSecret;
}

// Run Program function
void Contact::ftRunProgram() {

	ftSetFirstName();
	ftSetLastName();
	ftSetNickname();
	ftSetPhoneNumber();
	ftSetDarkestSecret();

	std::cout << "Contact Name: " << ftGetFirstName() << " " << ftGetLastName() << std::endl;
	std::cout << "Contact Nickname: " << ftGetFirstName() << std::endl;
	std::cout << "Contact Phone Number: " << ftGetPhoneNumber() << std::endl;
	std::cout << "Contact Darkest Secret: " << ftGetDarkestSecret() << std::endl;
}
