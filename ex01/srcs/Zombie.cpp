/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:18:31 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 21:07:55 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie( const std::string& name ) : _name(name) {

}

Zombie::~Zombie() {

	std::cout << this->_name << " is destroyed\n";
}

void	Zombie::announce() const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName( const std::string& name ) {

	this->_name = name;
}