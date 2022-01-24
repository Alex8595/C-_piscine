# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 15:46:01 by ahernand          #+#    #+#              #
#    Updated: 2022/01/24 16:06:50 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

all : $(NAME)

CXX = g++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp

OBJS =	srcs/main.o

$(OBJS) : $(SRCS)

$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $@

# - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - #
# - - - - - - - - - - - - - - - #

make fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

re: fclean all
