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

void Contact::ftSetFirstName() {
	std::cout << "Enter New Contact First Name:" << std::endl;
	std::cin >> firstName;
};

void Contact::ftGetFirstName() {
	return firstName;
};

void Contact::ftSetLastName() {
	std::cout << "Enter New Contact Last Name:" << std::endl;
	std::cin >> lastName;
};

void Contact::ftGetLastName() {
	return lastName;
};

void Contact::ftSetNickname() {
	std::cout << "Enter New Contact Nickname:" << std::endl;
	std::cin >> nickname;
};

void Contact::ftGetNickname() {
	return nickname;
};

void Contact::ftSetPhoneNumber() {
	std::cout << "Enter New Contact 8 Digits Phone Number:" << std::endl;
	std::cin >> phoneNumber;
};

void Contact::ftGetPhoneNumber() {
	return phoneNumber;
};

void Contact::ftSetDarkestSecret() {
	std::cout << "Enter New Contact Darkest Secret:" << std::endl;
	std::cin >> darkestSecret;
}

void Contact::ftGetDarkestSecret() {
	return darkestSecret;
}
