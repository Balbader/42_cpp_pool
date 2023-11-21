/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:07:59 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:08:03 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor
HumanA::HumanA(std::string name, Weapon& newWeapon) : _name(name), _weaponA(newWeapon)
{
    if (DEBUG)
        std::cout << GREEN << "Human A instance " << this->_name  << " created." << RESET << std::endl << std::endl;
}


// Destructor
HumanA::~HumanA()
{
    if (DEBUG)
        std::cout << std::endl << RED << "Human A instance " << this->_name << " destroyed." << RESET << std::endl;
}


// Get Name
std::string HumanA::getName() const
{
    return this->_name;
}


// Get WeaponA
std::string HumanA::getWeaponA() const
{
    return this->_weaponA.getType();
}


// attack
void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weaponA.getType() << std::endl;
}
