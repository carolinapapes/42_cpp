/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:49:51 by capapes           #+#    #+#             */
/*   Updated: 2025/03/21 16:21:22 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

class Contact
{
	private:
		std::string getUserInput(std::string field);
  	public:
	// Data members
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		Contact ()
		{
			first_name = getUserInput("first name");
			last_name = getUserInput("last name");
			nickname = getUserInput("nickname");
			phone_number = getUserInput("phone number");
			darkest_secret = getUserInput("darkest secret");
		}
		void print(void);
		~Contact(void);
};

class PhoneBook
{
	private:
		int		count;
		int 	last_index;
		Contact	arr[8];
  	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void 	search(void);

};