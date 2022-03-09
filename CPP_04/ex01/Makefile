# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 17:25:04 by ahernand          #+#    #+#              #
#    Updated: 2022/01/24 15:48:06 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

all : $(NAME)

CXX = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/WrongAnimal.cpp	\
		srcs/WrongCat.cpp		\
		srcs/Cat.cpp			\
		srcs/Dog.cpp			\
		srcs/Brain.cpp			\
		srcs/Animal.cpp

OBJS = srcs/main.o				\
		srcs/WrongAnimal.o		\
		srcs/WrongCat.o			\
		srcs/Cat.o				\
		srcs/Dog.o				\
		srcs/Brain.o			\
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
