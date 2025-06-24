/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:07:36 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/18 19:24:39 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	
}

void	Harl::_debug( void ) {

	std::cout << "\n[ DEBUG ]\n"
			<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::_info( void ) {

	std::cout << "\n[ INFO ]\n"
			<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::_warning( void ) {

	std::cout << "\n[ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::_error( void ) {

	std::cout << "\n[ ERROR ]\n"
			<< "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level ) {

		static const std::string levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};
	
		static void (Harl::* const funcs[4])() = {
			&Harl::_debug,
			&Harl::_info,
			&Harl::_warning,
			&Harl::_error
		};
		
		for (int i = 0; i < 4; ++i) {
			if (level == levels[i]) {
				(this->*funcs[i])();
				return ;
			}
		}

		std::cout << "\n[ Probably complaining about insignificant problems ]\n";
}