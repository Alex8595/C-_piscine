# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 15:46:01 by ahernand          #+#    #+#              #
#    Updated: 2022/03/10 14:00:36 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

all : $(NAME)

CXX = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/AMateria.cpp		\
		srcs/Ice.cpp			\
		srcs/Cure.cpp			\
		srcs/MateriaSource.cpp	\
		srcs/Character.cpp

OBJS =	srcs/main.o				\
		srcs/AMateria.o			\
		srcs/Ice.o				\
		srcs/Cure.o				\
		srcs/MateriaSource.o	\
		srcs/Character.o

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
