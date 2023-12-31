/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:07:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:07:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "colors.hpp"

// #define DEBUG 0
#define DEBUG 1

class Weapon
{

public:

    Weapon();
    Weapon(std::string);
    ~Weapon();

    void setType(std::string);
    std::string getType(void) const;

private:

    std::string _type;

};

#endif // !WEAPON_HPP
