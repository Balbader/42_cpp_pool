/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:08:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:08:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "colors.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        std::cout << "Weapon type : " << GREEN << club.getType() << RESET << std::endl;

        // HumanA bob("Bob", club);
        // bob.attack();
        // club.setType("some other type of club");
        // bob.attack();
    }
    // {
    //     Weapon club = Weapon("crude spiked club");

    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    return 0;
}
