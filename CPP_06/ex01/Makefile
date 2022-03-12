# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:25:32 by ahernand          #+#    #+#              #
#    Updated: 2022/03/12 17:25:34 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

all : $(NAME)

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

CXX = clang++

SRCS =	srcs/main.cpp

OBJS =	srcs/main.o

$(OBJS) : SRCS

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@


# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf $(OBJS)
	@rm -rf $(NAME)

re: fclean all
