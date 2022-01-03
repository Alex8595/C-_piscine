# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 14:40:43 by ahernand          #+#    #+#              #
#    Updated: 2021/11/30 14:45:13 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

all : $(NAME)

CC = gcc++ 

CPPFLAGS = -std=c++98

SRCS =	srcs/main.cpp		\
		srcs/ClapTrap.cpp

OBJS =	srcs/main.o			\
		srcs/ClapTrap.o
		
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $< -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #

make fclean:
	@rm -f Megaphone
	@rm -f srcs/Megaphone.o

re:	fclean all
