/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:41:26 by capapes           #+#    #+#             */
/*   Updated: 2025/04/16 17:52:05 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

#include <ErrorHandler.hpp>


std::string &replace(std::string filename, std::string s1, std::string s2)
{
	// open file
	std::ifstream file(filename);
	if (!file.is_open())
		handle_error(ErrorCode::FILE_NOT_FOUND, filename);
	std::string line;
	for (char ch; file.get(ch);) {
    	line += ch;
	}
}

void is_input_valid(int argc, char* argv[])
{	
	if (argc != 4)
		handle_error(ErrorCode::INVALID_ARGUMENT_COUNT);
	for (int i = 1; i < argc; ++i)
		if (argv[i] == nullptr)
			handle_error(ErrorCode::EMPTY_ARGUMENT);
}

int main(int argc, char* argv[])
{
	is_input_valid(argc, argv);
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	

	

}