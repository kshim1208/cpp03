NAME = Now_its_weird!
CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm
RMFLAGS = -f

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPPC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o	: %.cpp
	$(CPPC) $(CPPFLAGS) -c $< -o $@

.PHONY:all
all : $(NAME)

.PHONY:clean
clean:
	$(RM) $(RMFLAGS) $(OBJS)

.PHONY:fclean
fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

.PHONY:re
re:
	make fclean
	make all
