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
#include "HumanA.hpp"
#include "HumanB.hpp"

// Constructor
Weapon::Weapon()
{
    if (DEBUG)
        std::cout << GREEN << "Weapon instance created." << RESET << std::endl << std::endl;
}

Weapon::Weapon(std::string weaponType) : _type(weaponType)
{
    if (DEBUG)
        std::cout << GREEN << "Weapon/weaponType instance created." << RESET << std::endl << std::endl;
}


// Destructor
Weapon::~Weapon()
{
    if (DEBUG)
        std::cout << std::endl << RED << "Weapon instance destroyed." << RESET << std::endl;
}


// Setter & Getter
void Weapon::setType(std::string weaponType)
{
    this->_type = weaponType;
}

std::string Weapon::getType(void) const 
{
    return _type;
}
