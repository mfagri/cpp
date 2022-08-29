NAME  = main

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

OBJ = $(FILES:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(FILES) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all