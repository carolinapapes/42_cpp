/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:36:49 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 18:05:54 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#define BOLD "\033[1m"
#define RESET "\033[0m"

std::string	getUserInput(std::string prompt)
{
	std::string input;
	std::cout << BOLD << "Enter " + prompt + ": " << RESET;
	std::cin >> input;
	while (input.empty())
	{
		std::cout << prompt + " must be at least 1 character long" << std::endl;
		std::cout << BOLD << "Enter " + prompt + ": " << RESET;
		std::cin >> input;
	}
	return input;
}

Contact::Contact()
{
	std::cout << "Contact created" << std::endl;
}

void Contact::save()
{
	first_name = getUserInput("first name");
	last_name = getUserInput("last name");
	nickname = getUserInput("nickname");
	phone_number = getUserInput("phone number");
	darkest_secret = getUserInput("darkest secret");
}

Contact::~Contact()
{
	std::cout << "Contact destroyed" << std::endl;
}

void Contact::print() const
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}



void Contact::print(std::string separator) const
{
	std::cout << set_length(first_name, 10) << separator;
	std::cout << set_length(last_name, 10) << separator;
	std::cout << set_length(nickname, 10) << std::endl;
}