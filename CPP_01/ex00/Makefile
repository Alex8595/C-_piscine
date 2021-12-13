
NAME = zombie

all : $(NAME)

CXX = g++

#CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
CPPFLAGS = -std=c++98


SRCS =	srcs/main.cpp			\
		srcs/Zombie.cpp			\
		srcs/newZombie.cpp		\
		srcs/randomChump.cpp

OBJS =	srcs/main.o				\
		srcs/Zombie.o			\
		srcs/newZombie.o		\
		srcs/randomChump.o

$(OBJS) : SRCS

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $@


# - - - - - - - - - - - - - - - - - #
# - - - - C L E A N I N G - - - - - #
# - - - - - - - - - - - - - - - - - #


make fclean:
	@rm -f $(NAME)
	@rm -f $(OBJS)


re:	fclean all