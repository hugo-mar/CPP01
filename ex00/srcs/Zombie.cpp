/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:11:50 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 14:14:28 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( const std::string& name ) : _name(name) {

}

Zombie::~Zombie() {

	std::cout << this->_name << " is destroyed\n";
}

void	Zombie::announce() const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}