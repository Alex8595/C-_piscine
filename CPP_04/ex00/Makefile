# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 17:27:21 by ahernand          #+#    #+#              #
#    Updated: 2022/01/17 17:08:06 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

all : $(NAME)


CXX = g++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/Cat.cpp			\
		srcs/WrongCat.cpp		\
		srcs/Dog.cpp			\
		srcs/WrongAnimal.cpp	\
		srcs/Animal.cpp

OBJS = srcs/main.o				\
	   srcs/Cat.o				\
	   srcs/WrongCat.o			\
	   srcs/Dog.o				\
	   srcs/WrongAnimal.o		\
	   srcs/Animal.o


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
