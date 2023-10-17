/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:44:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/10/17 15:44:16 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
	int a (42);
	int b = 42;
	char str[] = "Hello from str\n";
	char str2[] ("Hello from str2\n");

	cout << str;
	cout << str2;
	cout << a;
	cout << "\n";
	cout << "Hello World!" << endl;
	cout << "I'm a C++ program!" << endl;
	return 0;
}
