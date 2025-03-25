/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:52:58 by capapes           #+#    #+#             */
/*   Updated: 2025/03/21 16:22:03 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	count = 0;
	std::cout << "Phonebook created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook destroyed" << std::endl;
}

void PhoneBook::add(void)
{
	arr[count] = Contact();
	count++;
	if (count == 8)
	{
		count = 0;
	}
}

void PhoneBook::search(void)
{
	std::string index;

	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	while (!std::cin.eof())
	{
		std::cout << "     index | first name| last name | nickname" << std::endl;
		for (int i = 0; i < count; i++)
		{
			std::cout << i << " | ";
			arr[i].print();
		}	
	}
}

void print(void)
{
	std::cout << this.first_name.substr(0, 10) << " | ";
	std::cout << this.last_name.substr(0, 10) << " | ";
	std::cout << this.nickname.substr(0, 10) << std::endl;
}

std::string	getUserInput(std::string prompt)
{
	std::string input;
	std::cout << "Enter " + prompt + ": " << std::endl;
	std::cin >> input;
	while (input.empty())
	{
		std::cout << prompt + " must be at least 1 character long" << std::endl;
		std::cout << "Enter " + prompt;
		std::cin >> input;
	}
	return input;
}