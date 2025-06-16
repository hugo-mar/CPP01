/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:32:48 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/16 23:56:33 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( const std::string& type )
	:	_type(type) {

}

const std::string&	Weapon::getType() const {

	return this->_type;
}

void Weapon::setType( const std::string& type) {

	this->_type = type;
}
