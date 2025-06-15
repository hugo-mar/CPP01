/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:13:28 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 15:43:50 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie z1("Rotbert");
	z1.announce();

	Zombie* z2 = newZombie("Heapster");
	z2->announce();
	delete z2;

	randomChump("Chumpalino");

	return 0;
}