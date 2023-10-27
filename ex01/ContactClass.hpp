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
  char *name;
  char *lastname;
  char *nickname;
  int *phoneNumber;

public:
  Contact();
  ~Contact();
};

Contact::Contact() {}

Contact::~Contact() {}

#endif // !CONTACTCLASS_H
