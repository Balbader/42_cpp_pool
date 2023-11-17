/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:39:59 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 11:40:01 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIECLASS_HPP
#define ZOMBIECLASS_HPP

#include "colors.hpp"
#include <iostream>

#define DEBUG 1

class Zombie
{

public:

    Zombie();
    Zombie(std::string);
    ~Zombie();

    void announce(void);

    void setZombieName(std::string);
    std::string getName(void) const;

private:

    std::string _name;

};

Zombie *zombieHorde(int, std::string);

#endif // !ZOMBIECLASS_HPP
