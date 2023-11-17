/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:40:30 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 11:40:31 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

// ---------------------------------------------------------------> Constructor
Zombie::Zombie() : _name("No Name")
{
    this->_name = "Horde";

    if (DEBUG)
        std::cout << YELLOW << _name << " created." << RESET << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    if (DEBUG)
        std::cout << LGREEN << name <<  "'s Constructor called." << RESET << std::endl;
}

Zombie::~Zombie()
{
    if (DEBUG)
        std::cout << RED << _name << "'s Deconstructor Called." << RESET << std::endl;
}


// ------------------------------------------------------------------> Announce
void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string zombieName)
{
    _name = zombieName;
}

std::string Zombie::getName(void) const
{
    return _name;
}
