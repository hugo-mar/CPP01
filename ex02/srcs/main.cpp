/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 23:57:59 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/16 00:09:55 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {

	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Memory address of the string variable: " << &str << '\n';
	std::cout << "Memory address held by stringPTR: " << stringPTR << '\n';
	std::cout << "Memory address held by stringREF: " << &stringREF << '\n';

	std::cout << "Value of the string variable: " << str << '\n';
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << '\n';
	std::cout << "Value pointed to by stringREF: " << stringREF << '\n';

	return 0;
}