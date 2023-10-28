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
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	// Functions Declaration
	void ftSetFirstName(); // setter
	std::string ftGetFirstName(); // getter

	void ftSetLastName();
	std::string ftGetLastName();

	void ftSetNickname();
	std::string ftGetNickname();

	void ftSetPhoneNumber();
	std::string ftGetPhoneNumber();

	void ftSetDarkestSecret();
	std::string ftGetDarkestSecret();

	void ftRunProgram();

	Contact(std::string, std::string, std::string, std::string, std::string);
	~Contact();
};

// Class Constructor
Contact::Contact(std::string fName, std::string lName, std::string nName, \
		std::string phNumber, std::string dSecret) {
	firstName = fName;
	lastName = lName;
	nickname = nName;
	phoneNumber = phNumber;
	darkestSecret = dSecret;
}

// Class Destructor
Contact::~Contact() {}

#endif // !CONTACTCLASS_H
