# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 17:43:43 by ahernand          #+#    #+#              #
#    Updated: 2022/01/04 17:43:46 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serena

all : $(NAME)

CXX = g++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp		\
		srcs/ClapTrap.cpp	\
		srcs/ScavTrap.cpp

OBJS =	srcs/main.o			\
		srcs/ClapTrap.o		\
		srcs/ScavTrap.o

$(OBJS) : SRCS

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #

make fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

re:	fclean all
