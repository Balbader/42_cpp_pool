/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:06:19 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/21 17:06:35 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int ac, char **av)
{
	if (ac == 1) {
		cout << "* LOUD SND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (int j = 1; j < ac; ++j) {
		string input = av[j];
		for (int i = 0; input[i]; ++i) {
			input[i] = toupper(input[i]);
		}
		cout << input;
	}
	cout << endl;
	return (0);
}
