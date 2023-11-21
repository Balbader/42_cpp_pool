/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:08:06 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:08:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor
HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
    if (DEBUG)
        std::cout << std::endl << YELLOW << "HumanB instance " << this->_name << " created." << RESET << std::endl;
}

// Destructor
HumanB::~HumanB()
{
    if (DEBUG)
        std::cout << ORANGE << "HumanB instance " << this->_name << " destroyed." << std::endl << std::endl;
}

// Set Weapon B
void HumanB::setWeapon(Weapon& newWeapon)
{
    this->_weaponB = &newWeapon;
}

// Get Weapon B
std::string HumanB::getWeapon()
{
    return this->_weaponB->getType();
}

std::string HumanB::getName() const
{
    return this->_name;
}
// Attack B
void HumanB::attack()
{
    if (_weaponB == NULL)
        std::cout << getName() << " is weaponless :( " << std::endl;
    else
        std::cout << getName() << " attacks with " << getWeapon() << std::endl;
}
