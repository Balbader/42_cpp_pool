/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:12:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/22 15:12:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include <iostream>
#include <stdlib.h>

class Contact {
	int index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact(std::string, std::string, std::string, std::string, std::string) {};

	// Functions Declaration
	void ftSetFirstName(); // setter
	void ftGetFirstName(); // getter

	void ftSetLastName();
	void ftGetLastName();

	void ftSetNickname();
	void ftGetNickname();

	void ftSetPhoneNumber();
	void ftGetPhoneNumber();

	void ftSetDarkestSecret();
	void ftGetDarkestSecret();

	~Contact() {};
};

// Class Constructor
/*
Contact::Contact(std::string fName, std::string lName, std::string nName, \
	std::string phNumber, std::string dSecret) {
	firstName = fName;
	lastName = lName;
	nickname = nName;
	phoneNumber = phNumber;
	darkestSecret = dSecret;
}
*/

// Class Destructor
//Contact::~Contact() {}

#endif // !CONTACTCLASS_H
