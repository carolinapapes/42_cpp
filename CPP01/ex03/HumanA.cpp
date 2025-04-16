/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:28:42 by capapes           #+#    #+#             */
/*   Updated: 2025/04/16 15:35:32 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	// Constructor
}

HumanA::~HumanA()
{
	// Destructor
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}