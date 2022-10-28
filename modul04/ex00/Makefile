# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 16:43:10 by mfagri            #+#    #+#              #
#    Updated: 2022/10/27 15:55:30 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<
	
$(NAME): $(OBJ) 
	$(CXX) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all