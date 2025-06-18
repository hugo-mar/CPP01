/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:11:17 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/18 19:25:53 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {

	Harl kidA;

	kidA.complain("DEBUG");
	kidA.complain("INFO");
	kidA.complain("WARNING");
	kidA.complain("ERROR");
	kidA.complain("DEBIG");

	return 0;
}