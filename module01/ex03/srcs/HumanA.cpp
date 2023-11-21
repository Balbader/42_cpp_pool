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
HumanA::HumanA(std::string name, Weapon newWeapon)
{
    this->_name = name;

    this->_weaponA = newWeapon;

    if (DEBUG)
        std::cout << "Human A " << GREEN << this->_name << RESET << " created." << std::endl;
}


// Destructor
HumanA::~HumanA()
{
    if (DEBUG)
        std::cout << "Human A " << RED << this->_name << RESET << " destroyed." << std::endl;
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
void HumanA::attack(std::string name, std::string weapon)
{
    std::cout << name << " attacks with their " << weapon << std::endl;
}
