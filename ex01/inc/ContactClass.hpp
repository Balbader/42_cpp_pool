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

#include "define.hpp"
#include <iostream>

class Contact {
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;

  // Functions Declaration
  int _SetUserInput(std::string);               // setter
  std::string _GetUserInput(std::string) const; // getter

  int _SetFirstName();
  std::string _GetFirstName() const;

  int _SetLastName();
  std::string _GetLastName() const;

  int _SetNickname();
  std::string _GetNickname() const;

  int _SetPhoneNumber();
  std::string _GetPhoneNumber() const;

  int _SetDarkestSecret();
  std::string _GetDarkestSecret() const;

public:
  Contact();
  void GetContactInfo();
  ~Contact();
};

#endif // !CONTACTCLASS_H
