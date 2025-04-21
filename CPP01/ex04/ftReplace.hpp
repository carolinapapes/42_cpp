/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftReplace.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:54:08 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 18:54:29 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTREPLACE_H
# define FTREPLACE_H
#include <fstream>
#include <string>
#include "ftFile.hpp"

std::string		replaceStr(std::string str, const std::string s1, const std::string s2);
void			replaceFile(std::string filename, const std::string s1, const std::string s2);

#endif
