/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:49:51 by capapes           #+#    #+#             */
/*   Updated: 2025/02/13 20:04:08 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>


typedef void (*str_fn)(const std::string);

int strFind(std::string str, char c)
{
	int	len;
	
	len = str.length();
	for (int i = 0; i < len; i++)
		if (str[i] == c)
			return 1;
	return 0;
}

class Contact
{
	private:
		std::string _name;
		std::string _phone;
		std::time_t _datestamp;	
	

	int validateStrLength(std::string str, int len_min = 0, int len_max = 10)
	{
		if (str.length() < len_min || str.length() > len_max)
			return 0;
		return 1;
	}

	int strIter(std::string str, char c)
	{
		int len;
		
		len = str.length();
		for (size_t i = 0; i < str.length(); i++)
			if (str[i] == c)
				return 1;
		return 0;
	}

	int isAplha(char c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return 1;
		return 0;
	}

	int isDigit(char c)
	{
		if (c >= '0' && c <= '9')
			return 1;
		return 0;
	}

	int isValidPhone(std::string phone)
	{
		r(
			validateStrLength(phone, 1, 10) &&
			isDigit()) 
	}

	int isValidName(std::string name)
	{
		return validateStr(name, " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 1, 100);
	}

	int setPhone(std::string phone)
	{
		_phone = phone;
	}
	
	int setName(std::string name)
	{
		_name = name;
	}

	int setCreationDate(std::time_t creation_date)
	{
		_datestamp = std::time(0);
	}

	// getters
	std::string getName()
	{
		return _name;
	}
	
	std::string getPhone()
	{
		return _phone;
	}

	std::time_t getCreationDate()
	{
		return _datestamp;
	}

  	public:

	// Constructor
		Contact () : 
		_name(""), _phone(""), _creation_date(0)

	// Method
	void add()
	{
		std::string user_input;
		std::cout << "Enter first name: ";
		std::cin >> user_input;
		
		AddFirstName();
		std::cout << "Enter last name: ";
		
		std::cout << "Enter phone number: ";
		
		creation_date = std::time(0);
	}

	// Destructor
	
	

}

class PhoneBook
{
  public:
	// Data members
	Contact arr[8];

	// Constructor
	PhoneBook()
	{
		for (int i = 0; i < 8; i++)
			arr[i] = Contact();
	}
	// Method add
	int add()
	{
	}

	int search()
	{
	}
};