/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:56:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 11:56:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

// --------------------------------------------------------------> New Zombie
Zombie* Zombie::newZombie(std::string zombieName)
{
    Zombie *zombie;

    zombie = new Zombie(zombieName);

    return zombie;
}

// --------------------------------------------------------------> Set/Get Name
void Zombie::setZombieName(std::string zombieName)
{
    _name = zombieName;
}

std::string Zombie::getName(void) const { return _name; }
