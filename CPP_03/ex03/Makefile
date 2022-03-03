# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:54:56 by ahernand          #+#    #+#              #
#    Updated: 2022/01/18 13:39:02 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

all : $(NAME)

CXX = c++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -Wshadow

SRCS =	srcs/main.cpp		\
		srcs/ClapTrap.cpp	\
		srcs/FragTrap.cpp	\
		srcs/ScavTrap.cpp	\
		srcs/DiamondTrap.cpp

OBJS =	srcs/main.o			\
		srcs/ClapTrap.o		\
		srcs/ScavTrap.o		\
		srcs/FragTrap.o		\
		srcs/DiamondTrap.o

$(OBJS) : $(SRCS)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@



# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #

make fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

re:	fclean all

