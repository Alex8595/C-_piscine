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

NAME = megaphone

all : $(NAME)

CXX = c++ 

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = srcs/megaphone.cpp

OBJS = srcs/megaphone.o

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
