# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 14:40:43 by ahernand          #+#    #+#              #
#    Updated: 2021/11/30 14:48:08 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

all : $(NAME)

CC = c++

CPPFLAGS = -std=c++98

OBJS = srcs/phone_book.o

$(OBJS) : srcs/phone_book.cpp

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $< -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


make fclean:
	@rm -f Megaphone
	@rm -f srcs/phone_book.o

re:	fclean all
