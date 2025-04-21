/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:47:37 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 18:53:03 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include "ftFile.hpp"

// String replacement - START
std::string replaceStr(std::string str, const std::string s1, const std::string s2)
{
	std::size_t pos = 0;
	
	while (true) {
		pos = str.find(s1, pos);
		if (pos == std::string::npos)
			break;
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos += s2.length();
	}
	return str;
}

void replaceFile(std::string filename, const std::string s1, const std::string s2)
{
	std::string line;
	std::string tempFilename = generateTempFilename();
	std::ifstream inFile = getInFile(filename);
	std::ofstream outFile = getOutFile(tempFilename);

	while (std::getline(inFile, line))
	{
		line = replaceStr(line, s1, s2);
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	std::remove(filename.c_str());
	std::rename(tempFilename.c_str(), filename.c_str());
}
// String replacement - END