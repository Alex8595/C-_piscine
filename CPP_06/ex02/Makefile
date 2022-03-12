# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 18:12:24 by ahernand          #+#    #+#              #
#    Updated: 2022/03/12 18:12:25 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

all : $(NAME)

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

CXX = clang++

SRCS =	srcs/Base.cpp	\
		srcs/A.cpp		\
		srcs/B.cpp		\
		srcs/C.cpp		\
		srcs/main.cpp

OBJS =	srcs/Base.o		\
		srcs/A.o		\
		srcs/B.o		\
		srcs/C.o		\
		srcs/main.o
		
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
