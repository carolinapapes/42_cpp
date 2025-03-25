/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:03:49 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 18:16:16 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

std::string set_length(std::string str, long unsigned int len)
{
	if (str.length() > len)
		return str.substr(0, len - 1) + ".";
	while (str.length() < len)
		str = str + " ";
	return str;
}