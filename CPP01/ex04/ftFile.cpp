/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftFile.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:48:21 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 18:51:41 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftFile.hpp"

// File handling - START
std::string generateTempFilename() {
    std::srand(std::time(0));
    int randomNum = std::rand();
    return "tempfile_" + std::to_string(randomNum) + ".tmp";
}

std::ifstream getInFile(std::string filename)
{
	std::ifstream file;

	file.open(filename, std::ios::in);
	if (!file.is_open())
		handle_error(ErrorCode::FILE_NOT_FOUND, filename);
	return file;
}

std::ofstream getOutFile(std::string filename)
{
	std::ofstream outfile;

	outfile.open(filename, std::ios::out);
	if (!outfile.is_open())
		handle_error(ErrorCode::FILE_NOT_FOUND, filename);
	return outfile;
}
// File handling - END