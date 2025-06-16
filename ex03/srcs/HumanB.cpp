/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:30:14 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/16 23:55:40 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( const std::string& name )
	:	_name(name),
		_weapon(NULL) {

}

void	HumanB::setWeapon(Weapon& weapon) {

	_weapon = &weapon;
}

void HumanB::attack() const {

	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << '\n';
	else
		std::cout << this->_name << " tries to attack but is unarmed\n";
}
