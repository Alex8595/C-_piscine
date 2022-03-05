# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 19:53:57 by ahernand          #+#    #+#              #
#    Updated: 2022/03/04 19:53:58 by ahernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoreForms

all : $(NAME)

CXX = c++

CPPFLAGS = -std=c++98 #-Wall -Werror -Wextra

SRCS =	srcs/Form.cpp					\
		srcs/Bureaucrat.cpp				\
		srcs/ShrubberyCreationForm.cpp	\
		srcs/RobotomyRequestForm.cpp	\
		srcs/PresidentialPardonForm.cpp	\
		srcs/Intern.cpp					\
		srcs/main.cpp


OBJS =	srcs/Form.o						\
		srcs/Bureaucrat.o				\
		srcs/ShrubberyCreationForm.o	\
		srcs/RobotomyRequestForm.o		\
		srcs/PresidentialPardonForm.o	\
		srcs/Intern.o					\
		srcs/main.o


$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@ 


# - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - #
# - - - - - - - - - - - - - - - #

make fclean:
	rm -f $(OBJS)
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all
