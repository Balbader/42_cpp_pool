/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:48:07 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/16 17:48:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

// ---------------------------------------------------------------> Constructor
Zombie::Zombie() : _name("No Name")
{
    if (DEBUG)
        std::cout << YELLOW << "Zombie Constructor Called : " << _name << RESET << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    if (DEBUG)
        std::cout << LGREEN << "Zombie Constructor Called : " << name << RESET << std::endl;
}

Zombie::~Zombie()
{
    if (DEBUG)
        std::cout << RED << "Zombie Deconstructor Called : " << _name << RESET << std::endl;
}


// ------------------------------------------------------------------> Announce
void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
