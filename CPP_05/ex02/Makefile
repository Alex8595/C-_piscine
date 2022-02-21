# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 13:13:37 by ahernand          #+#    #+#              #
#    Updated: 2022/02/19 13:13:38 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoreForms

all : $(NAME)

CXX = g++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRCS =	srcs/Form.cpp					\
		srcs/Bureaucrat.cpp				\
		srcs/ShrubberyCreationForm.cpp	\
		srcs/main.cpp

#		srcs/RobotomyRequestForm.cpp	\
		srcs/PresidentialPardonForm.cpp	\
		srcs/main.cpp

OBJS =	srcs/Form.o						\
		srcs/Bureaucrat.o				\
		srcs/ShrubberyCreationForm.o	\
		srcs/main.o

#		srcs/RobotomyRequestForm.o		\
		srcs/PresidentialPardonForm.o	\
		srcs/main.o

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@ 

# - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - #
# - - - - - - - - - - - - - - - #

make fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)

re: fclean all