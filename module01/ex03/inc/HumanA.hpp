/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:07:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:07:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

public:

    HumanA(std::string, Weapon&);
    ~HumanA();

    void attack();

    std::string getName(void) const;
    std::string getWeaponA(void) const;

private:

    std::string _name;
    Weapon& _weaponA;

};

#endif // !HUMANA_HPP
