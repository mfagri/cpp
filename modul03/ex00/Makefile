# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 19:35:57 by mfagri            #+#    #+#              #
#    Updated: 2022/10/23 19:05:56 by mfagri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

SRC	= main.cpp ClapTrap.cpp

CPC = c++

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CXX) $(CFLAGS) $(DFLAGS) -c -o $@ -c $<
	
$(NAME): $(OBJ) 
	$(CPC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all