/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:28:11 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/18 13:11:08 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_utils.hpp"

int	main( int argc, char* argv[] ) {

	t_params 	params;
	std::string	inContent;
	std::string	outContent;

	if (!parseArgs(argc, argv, params))
		return 1;

	if (!readFile(params, inContent))
		return 1;

	if (params.str1 == params.str2)
	outContent = inContent;
	else
		replaceContent(inContent, outContent, params);

	if (!writeFile(params, outContent))
		return 1;

	return 0;
}
