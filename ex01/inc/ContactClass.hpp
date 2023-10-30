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

class Contact {
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

	// Functions Declaration
	void _ftSetFirstName(); // setter
	std::string _ftGetFirstName() const; // getter

	void _ftSetLastName();
	std::string _ftGetLastName() const;

	void _ftSetNickname();
	std::string _ftGetNickname() const;

	void _ftSetPhoneNumber();
	std::string _ftGetPhoneNumber() const;

	void _ftSetDarkestSecret();
	std::string _ftGetDarkestSecret() const;

public:
	Contact();
	void ftRunProgram();
	~Contact();
};

#endif // !CONTACTCLASS_H
