/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:08:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:08:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "colors.hpp"

// Constructor
Weapon::Weapon()
{
    if (DEBUG)
        std::cout << GREEN << "Weapon instance created." << RESET << std::endl;
}

Weapon::Weapon(std::string weaponType)
{
    if (DEBUG)
        std::cout << GREEN << "Weapon instance created." << RESET << std::endl;
}


// Destructor
Weapon::~Weapon()
{
    if (DEBUG)
        std::cout << RED << "Weapon instance destroyed." << RESET << std::endl;
}


// Setter & Getter
void Weapon::setType(std::string weaponType)
{
    _type = weaponType;
}

std::string Weapon::getType(void) const
{
    return _type;
}
