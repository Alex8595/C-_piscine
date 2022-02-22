# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 15:15:20 by ahernand          #+#    #+#              #
#    Updated: 2022/02/22 13:32:04 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

all : $(NAME)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/PhoneBook.cpp	\
		srcs/main.cpp

OBJS =	srcs/PhoneBook.o	\
		srcs/main.o

$(OBJS) : $(SRCS)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@


# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


make fclean:
	@rm -f $(NAME)
	@rm -f $(OBJS)

re:	fclean all
