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

CXX = g++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp		\
		srcs/ClapTrap.cpp

OBJS =	srcs/main.o			\
		srcs/ClapTrap.o

$(OBJS) : SRCS

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #

fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

re:	fclean all
