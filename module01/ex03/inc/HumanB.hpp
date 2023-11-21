/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:07:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 21:07:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

public:
    HumanB(std::string);
    ~HumanB();

    void attack();
    void setWeapon(Weapon&);

    std::string getWeapon(void);

private:
    std::string _name;
    Weapon _weaponB;

};

#endif // !HUMANB_HPP
