/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:36:29 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/16 23:36:50 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanB
{

private:
	std::string	_name;
	Weapon*		_weapon;

public:
	HumanB( const std::string& name );

	void	setWeapon(Weapon& weapon);
	void	attack() const;

};
