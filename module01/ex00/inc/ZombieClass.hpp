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

#include <iostream>

class ZOMBIE
{

public:
	void announce(void);
	std::string getName(void);

private:
	std::string _name;

};

#endif // !ZOMBIECLASS_HPP
