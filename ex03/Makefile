NAME = ex03
SRCS = ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
CC = clang++
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf

all: $(NAME)
$(NAME):	$(OBJS)
			@echo "Compiling $@"
			@$(CC) $(FLAGS) $(OBJS) -o $@
			@echo "Success"
.cpp.o:
	@echo "Compiling $@"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "Removing .o"
	@$(RM) $(OBJS)
fclean:	clean
		@echo "Removing Executable"
		@$(RM) $(NAME)
re: fclean all 