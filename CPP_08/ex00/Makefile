# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 19:57:16 by ahernand          #+#    #+#              #
#    Updated: 2022/03/18 19:57:17 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Easyfind

CXX = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp

OBJS =	srcs/main.o

all : $(NAME)

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
