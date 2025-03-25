/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:52:58 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 18:15:17 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

#define BOLD "\033[1m"
#define RESET "\033[0m"

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
	arr[count].save();
	count++;
	if (count == 8)
		count = 0;
}

int isValidIndex(std::string index, int count)
{
	return (
		!(
			index.length() > 1
			|| index[0] < '0'
			|| index[0] > '7'
			|| index[0] - '0' >= count
			|| index.empty()
		)
	);
}

void PhoneBook::search(void)
{
	std::string index;

	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << BOLD << 
			set_length("Index", 10) 
			<< " | " 
			<< set_length("First name", 10)
			<< " | "
			<< set_length("Last name", 10)
			<< " | "
			<< set_length("Nickname", 10)
			<< RESET << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << i << set_length("", 9) << " | ";
		arr[i].print(" | ");
	}	
	std::cout << BOLD << "Enter index of contact to display: " << RESET;
	std::cin >> index;
	if (!isValidIndex(index, count))
		std::cout << "Invalid index" << std::endl;
	else
		arr[index[0] - '0'].print("\n");
}

