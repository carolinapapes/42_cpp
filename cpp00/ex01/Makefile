# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: capapes <capapes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 16:48:14 by capapes           #+#    #+#              #
#    Updated: 2025/03/25 18:08:15 by capapes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Phonebook.cpp Contact.cpp Utils.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = Phonebook

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: clean all

.PHONY: all clean