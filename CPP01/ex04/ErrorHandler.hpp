/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorHandler.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:09:08 by capapes           #+#    #+#             */
/*   Updated: 2025/04/16 17:16:39 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORHANDLER_HPP
# define ERRORHANDLER_HPP

# include <iostream>
# include <string>

enum class ErrorCode
{
	NO_ERROR = 0,
	INVALID_ARGUMENT_COUNT,
	EMPTY_ARGUMENT,
	FILE_NOT_FOUND,
};

inline void handle_error(ErrorCode code, const std::string& detail = "") {
    switch (code) {
        case ErrorCode::INVALID_ARGUMENT_COUNT:
            std::cerr << "Error: Invalid argument count. <filename> <s1> <s2>" << "\n";
            break;
        case ErrorCode::EMPTY_ARGUMENT:
            std::cerr << "Error: Arguments must not be empty. " << detail << "\n";
            break;
		case ErrorCode::FILE_NOT_FOUND:
			std::cerr << "Error: File not found. " << detail << "\n";
        default:
            std::cerr << "Unknown error.\n";
    }
    exit(static_cast<int>(code));
}


#endif


