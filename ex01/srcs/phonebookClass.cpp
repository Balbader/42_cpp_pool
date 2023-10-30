/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:53:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/30 10:53:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

Phonebook::Phonebook() {
	std::cout << GREEN << "Phonebook Constructor Called!" << RESET << std::endl;
}

Phonebook::~Phonebook() {
	std::cout << GREEN << "Phonebook Destructor Called!" << RESET << std::endl;
}

void Phonebook::ftRunProgram() {
	Contact newContact;
	newContact.ftGetUserInfo();
}
