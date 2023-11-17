/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:43:20 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/16 17:43:23 by baalbade         ###   ########.fr       */
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
    void randomChump(std::string);
    Zombie *newZombie(std::string);

    void setZombieName(std::string);
    std::string getName(void) const;

private:
    std::string _name;
};

#endif // !ZOMBIECLASS_HPP
