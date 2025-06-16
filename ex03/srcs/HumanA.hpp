/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 21:08:41 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/16 23:56:05 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanA
{

private:
	
	std::string	_name;
	Weapon& 	_weapon;
	
public:
	HumanA( const std::string& name, Weapon& weapon );

	void	attack() const;

};
