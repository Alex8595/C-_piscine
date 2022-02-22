# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 13:33:48 by ahernand          #+#    #+#              #
#    Updated: 2022/02/22 13:33:50 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

all : $(NAME)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/Zombie.cpp			\
		srcs/newZombie.cpp		\
		srcs/randomChump.cpp

OBJS =	srcs/main.o				\
		srcs/Zombie.o			\
		srcs/newZombie.o		\
		srcs/randomChump.o

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
