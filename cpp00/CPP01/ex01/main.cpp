/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:35:13 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 18:36:04 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* hord = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		hord[i].announce();
	delete[] hord;
}