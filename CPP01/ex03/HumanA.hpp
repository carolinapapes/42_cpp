/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:00:09 by capapes           #+#    #+#             */
/*   Updated: 2025/03/25 19:00:11 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();

  private:
	std::string name;
	Weapon &weapon;
};

#endif