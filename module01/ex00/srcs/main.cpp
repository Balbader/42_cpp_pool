/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:10:39 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 09:10:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

int main(void)
{
	Zombie newZombie("Malcolm");
    Zombie randomZombie;

	newZombie.announce();
    newZombie.setZombieName("Lisa");
	newZombie.announce();
    newZombie.setZombieName("Basil");
	newZombie.announce();

    randomZombie.randomChump("Marc");
	return 0;
}
