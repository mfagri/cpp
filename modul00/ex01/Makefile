# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 20:59:49 by mfagri            #+#    #+#              #
#    Updated: 2022/10/12 14:59:38 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRC	=  main.cpp\
	Phonebook.cpp\

CXX = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp Phonebook.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<
	
$(NAME): $(OBJ) Phonebook.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) $(OBJ) -o $@ 


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
