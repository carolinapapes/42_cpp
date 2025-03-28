/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:49:51 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 18:04:55 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include "Utils.hpp"

class PhoneBook
{
	private:
		int				count;
		int 			last_index;
		class Contact	arr[8];
  	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void 	search(void);

};

#endif