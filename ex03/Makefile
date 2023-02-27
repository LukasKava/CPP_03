# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 12:11:45 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/23 14:58:42 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CPP_FLAGS= -Wall -Werror -Wextra -std=c++98 -Wshadow

NAME=diamond

SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re:	fclean all
	@echo "remaking files!"
