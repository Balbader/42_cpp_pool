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
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = *stringPTR;

    std::cout << "str : " << &str << std::endl;
    std::cout << "ptr : " << stringPTR << std::endl;
    std::cout << "ref : " << &stringREF << std::endl;

    std::cout << std::endl << "str : " << str << std::endl;
    std::cout << "ptr : " << *(stringPTR) << std::endl;
    std::cout << "ref : " << stringREF << std::endl;
    return 0;
}
