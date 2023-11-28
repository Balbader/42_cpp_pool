/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:40:20 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 11:40:21 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

int main(void)
{
    Zombie *newHorde;

    newHorde = zombieHorde(5, "Zombie");

    for (int i = 0; i < 5; ++i)
    {
        newHorde[i].announce();
    }

    delete[] newHorde;

    return 0;
}
