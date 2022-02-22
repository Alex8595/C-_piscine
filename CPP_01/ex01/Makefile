# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 14:16:30 by ahernand          #+#    #+#              #
#    Updated: 2022/02/22 14:17:09 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde

all : $(NAME)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/Zombie.cpp			\
		srcs/ZombieHorde.cpp	\
		srcs/main.cpp

OBJS =	srcs/Zombie.o			\
		srcs/ZombieHorde.o		\
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
