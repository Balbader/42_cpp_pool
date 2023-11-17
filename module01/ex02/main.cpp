/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:19:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/11/17 13:19:33 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    char str[] = "HI THIS IS BRAIN";
    char *ptr = str;
    char &ref = *ptr;

    std::cout << "str : " << str << std::endl;
    std::cout << "ptr : " <<  ptr << std::endl;
    return 0;
}
