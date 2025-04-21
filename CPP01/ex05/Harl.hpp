/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:25:07 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 20:07:48 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);


		struct MethodEntry {
			const char* name;
			MethodPtr   func;
		};
    	static const MethodEntry methods[];
};