/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:25:54 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 20:28:56 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl()
{
	std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor called" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "Debug message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error message" << std::endl;
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*MethodPtr)(void);

	static const MethodEntry methods[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
	};

	for (int i = 0; i < 4; ++i)
		if (level == methods[i].name)
			(this->*(methods[i].func))();
	
	std::cout << "Unknown level: " << level << std::endl;
}