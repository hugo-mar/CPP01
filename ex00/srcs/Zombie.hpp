/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:55:51 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 14:16:53 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	_name;	

public:
	Zombie( const std::string& name );
	~Zombie();

	void announce( void ) const;
};

Zombie*	newZombie( const std::string& name );
void	randomChump( const std::string& name );

#endif
