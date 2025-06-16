/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:37:43 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/16 23:55:20 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( const std::string& name, Weapon& weapon )
	:	_name(name),
		_weapon(weapon) {
			
}

void	HumanA::attack() const {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << '\n';
}
