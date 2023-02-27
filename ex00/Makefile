# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 12:11:45 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/20 14:02:09 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CPP_FLAGS= -Wall -Werror -Wextra -std=c++98

NAME=claptrap

SRCS= main.cpp ClapTrap.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re:	fclean all
	@echo "remaking files!"
