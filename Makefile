NAME	=	libft_cpp.a
CC		=	clang++
OBJDIR	=	objects
SRC		=	int_to_string.cpp sort_table.cpp is_prime.hpp
OBJ		=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CFLAGS	=	-Wall -Wextra -Werror

ifneq (,$(findstring xterm,${TERM}))
	GREEN := $(shell tput -Txterm setaf 2)
	RESET := $(shell tput -Txterm sgr0)
else
	GREEN := ""
	RESET := ""
endif

all: $(NAME)

bonus: all

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "${GREEN}Compilation Done${RESET}"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p objects
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -f $(COMP)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re test