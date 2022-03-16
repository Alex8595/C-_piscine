# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 19:38:37 by ahernand          #+#    #+#              #
#    Updated: 2022/03/15 19:38:38 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

all : $(NAME)

CXX = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/example.cpp	\
		srcs/main.cpp

OBJS =	srcs/example.o		\
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
