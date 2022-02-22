# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:27:50 by ahernand          #+#    #+#              #
#    Updated: 2022/02/22 16:27:51 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

all : $(NAME)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/karen.cpp		\
		srcs/main.cpp

OBJS =	srcs/karen.o		\
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
