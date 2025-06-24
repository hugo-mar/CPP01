/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:11:17 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/24 10:33:48 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char* argv[] ) {

	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " followed by one of the levels - DEBUG, INFO, WARNING or ERROR\n";
		return 1;
	}

	std::string			level = argv[1];
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 				levelIndex = -1;

	for (int i = 0; i < 4; ++i) {
		if (level == levels[i])
			levelIndex = i;
	}

	Harl kidA;
	
	switch (levelIndex)
	{

	case (0):
		kidA.complain("DEBUG");
		/* fall through */
	
	case (1):
		kidA.complain("INFO");
		/* fall through */

	case (2):
		kidA.complain("WARNING");
		/* fall through */

	case (3):
		kidA.complain("ERROR");
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}

	return 0;
}