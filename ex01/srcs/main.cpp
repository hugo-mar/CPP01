/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:00:07 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/15 23:53:27 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	int		N = 5;
	Zombie*	horde = zombieHorde(N, "Heapster");

	for (int i = 0; i < N; ++i)
		horde[i].announce();

	delete[] horde;

	return 0;
}
