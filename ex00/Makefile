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

NAME = Megaphone

all : $(NAME)

CC = c++ 

CPPFLAGS = -std=c++98

OBJS = srcs/Megaphone.o

$(OBJS) : srcs/Megaphone.cpp

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $< -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


make fclean:
	@rm -f Megaphone
	@rm -f srcs/Megaphone.o

re:	fclean all
