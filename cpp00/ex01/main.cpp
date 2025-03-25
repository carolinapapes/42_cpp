/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:34:19 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 17:57:39 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

#define BOLD "\033[1m"
#define RESET "\033[0m"

int main()
{
	PhoneBook phonebook;
	std::string command;

	while (!std::cin.eof())
	{
		std::cout << BOLD << "Enter a command [ADD | SEARCH | EXIT]" << RESET << std::endl;
		std::cin >> command;
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}