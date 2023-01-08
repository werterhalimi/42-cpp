# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shalimi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 16:31:25 by shalimi           #+#    #+#              #
#    Updated: 2023/01/06 16:35:16 by shalimi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = megaphone.cpp
OBJECTS = $(SOURCES:.cpp=.o)

NAME = megaphone


all: $(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJECTS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all
.PHONY: all clean fclean re
