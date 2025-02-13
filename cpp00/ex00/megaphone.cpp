/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:39:02 by capapes           #+#    #+#             */
/*   Updated: 2025/02/13 17:17:59 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

typedef void (*str_fn)(const std::string);

std::string to_uppercase(std::string str){
	for (size_t i = 0; i < str.length(); i++)
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
	std::cout << std::endl;
	return (str);
}

void print_uppercase(const std::string str){
	std::cout << to_uppercase(str);
}

void argv_iter_fn(char **argv, str_fn f)
{
	for (int i = 1; argv[i]; i++)
		f(argv[i]);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		argv_iter_fn(argv, print_uppercase);
	return (0);
}
