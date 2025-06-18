/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_utils.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:05:03 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/18 13:08:37 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_UTILS_HPP
# define REPLACE_UTILS_HPP

#include <fstream>
#include <string>
#include <iostream>
#include <iterator>

struct t_params {

	std::string	inFilename;
	std::string	str1;
	std::string	str2;
};

bool	parseArgs(int argc, char* argv[], t_params& p);
bool	readFile(const t_params& p, std::string& inContent);
bool	writeFile(const t_params& p, const std::string& outContent);
void	replaceContent(const std::string& inContent, std::string& outContent, const t_params& p);

#endif