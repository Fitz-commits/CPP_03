NAME = ex00
SRCS = ClapTrap.cpp main.cpp
CC = clang++
FLAGS = -Wall -Wextra -Werror
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