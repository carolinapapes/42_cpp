/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftFile.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:49:21 by capapes           #+#    #+#             */
/*   Updated: 2025/04/21 18:51:11 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTFILE_H
# define FTFILE_H

# include <ErrorHandler.hpp>
# include <fstream>
# include <string>
# include <ctime>

std::string		generateTempFilename();
std::ifstream	getInFile(std::string filename);
std::ofstream	getOutFile(std::string filename);
#endif