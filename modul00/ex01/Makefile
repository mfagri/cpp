# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 20:59:49 by mfagri            #+#    #+#              #
#    Updated: 2022/09/12 20:59:50 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eco

SRC	=  main.cpp\
	Phonebook.cpp\

CPC = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp =.o)

all: $(NAME)

$(NAME): $(OBJ) Phonebook.hpp
	$(CPC) $(CFLAGS) $(DFLAGS) $(OBJ) -o $@ 


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
