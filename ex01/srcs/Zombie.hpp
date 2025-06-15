/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:19:19 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 20:54:23 by hugo-mar         ###   ########.fr       */
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
	Zombie();
	Zombie( const std::string& name );
	~Zombie();

	void announce( void ) const;
	void setName( const std::string& name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif
