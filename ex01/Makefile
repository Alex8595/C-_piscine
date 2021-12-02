# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 15:15:20 by ahernand          #+#    #+#              #
#    Updated: 2021/12/02 15:15:22 by ahernand         ###   ########.fr        #
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
