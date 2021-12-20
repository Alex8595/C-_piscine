NAME = weapons

all : $(NAME)

CXX = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/Weapon.cpp			\
		srcs/HumanA.cpp			\
		srcs/HumanB.cpp

OBJS =	srcs/main.o				\
		srcs/Weapon.o			\
		srcs/HumanA.o			\
		srcs/HumanB.o

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