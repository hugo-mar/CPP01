/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:10:02 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/18 13:10:51 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_utils.hpp"

bool	parseArgs(int argc, char* argv[], t_params& p) {

	if (argc != 4) {
		
		std::cerr << "Usage: " << argv[0] << " <filename> <str1> <str2>\n";
		return false;
	}

	p.inFilename = argv[1];
	p.str1 = argv[2];
	p.str2 = argv[3];

	if (p.str1.empty()) {
	
		std::cerr << "Error: s1 cannot be empty\n";
		return false;
	}

	return true;
}

bool	readFile(const t_params& p, std::string& inContent) {
	
	std::ifstream inStream(p.inFilename.c_str(), std::ios::in);
	if (!inStream) {
	
		std::cerr << "Error: unable to open file " << p.inFilename << '\n';
		return false;
	}
	
	inContent.assign((std::istreambuf_iterator<char>(inStream)), std::istreambuf_iterator<char>());
	
	if (inStream.bad()) { 
	
		std::cerr << "Error: unable to read file " << p.inFilename << '\n';
		return false;
	}

	return true;
}

bool	writeFile(const t_params& p, const std::string& outContent) {
	
	const std::string	outFilename = std::string(p.inFilename) + ".replace";
	std::ofstream 		outStream(outFilename.c_str(), std::ios::out | std::ios::trunc);
	if (!outStream) {
	
		std::cerr << "Error: unable to create file " << outFilename << '\n';
		return false;
	}
	
	outStream << outContent;
	if (!outStream) {
	
		std::cerr << "Error: Unable to write to file " << outFilename << '\n';
		return false;
	}

	return true;
}

void	replaceContent(const std::string& inContent, std::string& outContent, const t_params& p) {
	
	if (p.str1.empty()) {

		outContent = inContent;
		return ;
	}
	
	size_t		pos = 0;
	size_t		found;
	
	outContent.reserve(inContent.size());

	while ((found = inContent.find(p.str1, pos)) != std::string::npos) {

		outContent.append(inContent, pos, found - pos);
		outContent.append(p.str2);
		pos = found + p.str1.length();
	}
	outContent.append(inContent, pos, std::string::npos);
}