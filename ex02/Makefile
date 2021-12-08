# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 16:38:15 by ahernand          #+#    #+#              #
#    Updated: 2021/12/07 16:38:29 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GlobalBanksters

all : $(NAME)

CC = c++

#CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
CPPFLAGS = 


SRCS =	srcs/Account.cpp		\
		srcs/tests.cpp

OBJS =	srcs/Account.o			\
		srcs/tests.o

$(OBJS) : SRCS

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


make fclean:
	@rm -f GlobalBanksters
	@rm -f srcs/Account.o
	@rm -f srcs/tests.o


re:	fclean all
