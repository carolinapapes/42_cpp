/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:41:26 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 18:54:44 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <ErrorHandler.hpp>
#include "ftReplace.hpp"

// Input validation and parsing - START
typedef struct named_args_s
{
	std::string filename;
	std::string s1;
	std::string s2;
} named_args_t;

void validateInput(int argc, char* argv[])
{	
	if (argc != 4)
		handle_error(ErrorCode::INVALID_ARGUMENT_COUNT);
	for (int i = 1; i < argc; ++i)
		if (argv[i] == nullptr)
			handle_error(ErrorCode::EMPTY_ARGUMENT);
}

void getArgs(int argc, char* argv[], named_args_t& args)
{
	args.filename = argv[1];
	args.s1 = argv[2];
	args.s2 = argv[3];
}
// Input validation and parsing - END

int main(int argc, char* argv[])
{
	named_args_t args;

	validateInput(argc, argv);	
	getArgs(argc, argv, args);
	replaceFile(args.filename, args.s1, args.s2);
}