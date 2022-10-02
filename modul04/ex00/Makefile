# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 16:43:10 by mfagri            #+#    #+#              #
#    Updated: 2022/10/02 19:25:04 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRC	= main.cpp Polymorphism.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

CPC = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Polymorphism.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
	$(CPC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all